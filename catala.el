;; To use automatically, add this to your .emacs:
; (add-to-list 'treesit-extra-load-path "/path/to/tree-sitter-catala")
; (autoload 'catala-ts-mode "/path/to/catala.el" "Major mode for Catala code." t)
; (add-to-list 'auto-mode-alist '("\\.catala_\\(fr\\|en\\|pl\\)" . catala-ts-mode))

(require 'treesit)

(defgroup catala nil
  "Support for the Catala language."
  :link '(url-link "https://catala-lang.org/")
  :group 'languages)

(defvar catala-mode-hook nil
  "Hook to be run when Catala mode loads")

(defcustom catala-default-indent 2
  "Default indentation."
  :group 'catala :type 'integer)

(defgroup catala-faces nil
  "Special faces for the Catala mode."
  :group 'catala)

(require 'tree-sitter-hl)

(defface catala-font-lock-law-text-face
  '((t (:family "DejaVu Serif" :height 1.15)))
  "Face description for Catala law."
  :group 'catala-faces)

(defface catala-font-lock-law-heading-face
  '((t (:inherit catala-font-lock-law-text-face :weight bold :foreground "LightSkyBlue" :height 1.05)))
  "Face description for Catala law."
  :group 'catala-faces)

(defface catala-font-lock-directive-face
  '((t (:inherit font-lock-preprocessor-face)))
  "Face description for Catala directives."
  :group 'catala-faces)

(defface catala-font-lock-code-block-face
  '((t (:extend t :background "grey15")))
  "Face description for Catala code blocks."
  :group 'catala-faces)

(defface catala-font-lock-code-delimiter-face
  '((t (:extend t :overline t :underline t)))
  "Face description for Catala code blocks."
  :group 'catala-faces)

(defface catala-font-lock-verbatim-face
  '((t (:inherit tree-sitter-hl-face:comment :extend t :background "grey15")))
  "Face description for Catala verbatim blocks."
  :group 'catala-faces)

(defface catala-font-lock-comment-face
  '((t (:inherit tree-sitter-hl-face:comment)))
  "Face description for Catala comments."
  :group 'catala-faces)

(defface catala-font-lock-attribute-face
  '((t (:inherit tree-sitter-hl-face:doc)))
  "Face description for Catala attributes."
  :group 'catala-faces)

(defface catala-font-lock-scope-face
  '((t (:inherit tree-sitter-hl-face:function)))
  "Face description for Catala scope names."
  :group 'catala-faces)

(defface catala-font-lock-expression-face
  '((t (:foreground "turquoise")))
  "Face description for base Catala expression structures."
  :group 'catala-faces)

(defface catala-font-lock-builtin-face
  '((t (:inherit tree-sitter-hl-face:function.builtin)))
  "Face description for Catala builtins."
  :group 'catala-faces)

(defface catala-font-lock-constructor-face
  '((t (:foreground "LightSeaGreen")))
  "Face description for Catala constructors."
  :group 'catala-faces)

(defface catala-font-lock-label-face
  '((t (:inherit tree-sitter-hl-face:label :underline t)))
  "Face description for Catala labels."
  :group 'catala-faces)

(defface catala-font-lock-state-face
  '((t (:inherit tree-sitter-hl-face:variable :slant italic)))
  "Face description for Catala state labels."
  :group 'catala-faces)

(defface catala-font-lock-punctuation-face
  '((t (:inherit tree-sitter-hl-face:punctuation)))
  "Face description for Catala punctuation."
  :group 'catala-faces)

(defface catala-font-lock-operator-face
  '((t (:foreground "DeepSkyBlue" :weight bold)))
  "Face description for Catala operators."
  :group 'catala-faces)

(defface catala-font-lock-literal-face
  '((t (:inherit tree-sitter-hl-face:constant)))
  "Face description for Catala literals."
  :group 'catala-faces)

(defface catala-font-lock-keyword-face
  '((t (:weight bold)))
  "Face description for Catala keywords."
  :group 'catala-faces)

(defface catala-font-lock-variable-face
  '((t (:inherit tree-sitter-hl-face:variable)))
  "Face description for Catala variables."
  :group 'catala-faces)

(defface catala-font-lock-type-face
  '((t (:foreground "PaleGreen")))
  "Face description for Catala types."
  :group 'catala-faces)

(defface catala-font-lock-module-face
  '((t (:inherit tree-sitter-hl-face:doc)))
  "Face description for Catala modules."
  :group 'catala-faces)

(defface catala-font-lock-declaration-face
  '((t (:foreground "plum")))
  "Face description for Catala declarations (top-level structure)."
  :group 'catala-faces)

(defface catala-font-lock-definition-face
  '((t (:foreground "orange" :weight normal)))
  "Face description for Catala definitionss (scope elements, etc.)."
  :group 'catala-faces)

(defface catala-font-lock-field-face
  '((t (:foreground "LightSeaGreen" :slant italic)))
  "Face description for Catala fields."
  :group 'catala-faces)

(defface catala-font-lock-error-face
  `((t (:foreground ,(face-attribute 'default :foreground))))
  "Face description for Catala parse errors."
  :group 'catala-faces)

(defface catala-font-lock-x-face
  '((t (:inherit tree-sitter-hl-face:x)))
  "Face description for Catala xs."
  :group 'catala-faces)


(defun catala--treesit-font-lock-settings (lang)
  "Tree-sitter Catala font-lock settings."
  (treesit-font-lock-rules
   :language lang :feature 'all :override t
     "(law_text) @catala-font-lock-law-text-face"
   :language lang :feature 'all :override t
     "(law_heading
        (LAW_HEADING) @catala-font-lock-law-heading-face
        (LAW_LABEL)? @catala-font-lock-label-face)"
   :language lang :feature 'all :override t
     "(directive) @catala-font-lock-directive-face"
   :language lang :feature 'all :override t
     "(literal) @catala-font-lock-literal-face"
   ;; :language lang :feature 'all :override t
   ;;   "(path_dot) @catala-font-lock-punctuation-face"
   :language lang :feature 'all :override t
     "(variable) @catala-font-lock-variable-face"
   :language lang :feature 'all :override t
     "(field_name) @catala-font-lock-field-face"
   :language lang :feature 'all :override t
     "(constructor_name) @catala-font-lock-constructor-face"
   :language lang :feature 'all :override t
     "(typ) @catala-font-lock-type-face"
   :language lang :feature 'all :override t
     "(module_name) @catala-font-lock-module-face"
     :language lang :feature 'all :override t
     "(scope_name) @catala-font-lock-scope-face"
   :language lang :feature 'all :override t
     "(enum_struct_name) @catala-font-lock-type-face"
   :language lang :feature 'all :override t
     "(label) @catala-font-lock-label-face"
   :language lang :feature 'all :override t
     "(state_label) @catala-font-lock-state-face"
   :language lang :feature 'all :override t
     "[(LBRACE) (RBRACE) (LPAREN) (RPAREN) (LBRACKET) (RBRACKET)] @catala-font-lock-punctuation-face"
   :language lang :feature 'all :override t
     "(e_fieldaccess (DOT)* @catala-font-lock-operator-face)"
   :language lang :feature 'all :override t
     "(e_apply (OF) @catala-font-lock-operator-face)"
   :language lang :feature 'all :override t
     "[(YEAR) (MONTH) (DAY)] @catala-font-lock-type-face"
   :language lang :feature 'all :override t
     "(builtin) @catala-font-lock-builtin-face"
   :language lang :feature 'all :override t
     "(e_unop . (_) @catala-font-lock-operator-face)"
   :language lang :feature 'all :override t
     "(e_binop [(MULT) (DIV) (PLUS) (MINUS) (PLUSPLUS) (LESSER) (LESSER_EQUAL) (GREATER) (GREATER_EQUAL) (EQUAL) (NOT_EQUAL) (AND) (OR) (XOR)] @catala-font-lock-operator-face)"
   :language lang :feature 'all :override t
     "[(begin_metadata_fence) (begin_code_fence) (end_block_fence)] @catala-font-lock-code-delimiter-face"
  :language lang :feature 'all :override 'keep
    "(ERROR) @catala-font-lock-error-face"
   :language lang :feature 'all :override 'keep
     "(expression) @catala-font-lock-expression-face"
   :language lang :feature 'all :override 'keep
     "[(scope_decl_item)] @catala-font-lock-expression-face"
   :language lang :feature 'all :override 'keep
     "[(struct_decl_item) (enum_decl_item) (rule) (definition) (assertion) (rounding_mode)] @catala-font-lock-definition-face"
   :language lang :feature 'all :override 'keep
     "[(scope) (scope_decl) (struct_decl) (enum_decl) (toplevel_def)] @catala-font-lock-declaration-face"
   :language lang :feature 'all :override 'prepend
     "[(SCOPE) (CONSEQUENCE) (DATA) (DEPENDS) (DECLARATION) (CONTEXT) (DECREASING) (INCREASING) (OF) (LIST) (OPTION) (CONTAINS) (ENUM) (INTEGER) (MONEY) (TEXT) (DECIMAL) (DATE) (DURATION) (BOOLEAN) (POSITION) (SUM) (FILLED) (DEFINITION) (STATE) (LABEL) (EXCEPTION) (DEFINED_AS) (MATCH) (WILDCARD) (WITH_PATT) (BUT_REPLACE) (UNDER_CONDITION) (IF) (THEN) (ELSE) (CONDITION) (CONTENT) (STRUCT) (ASSERTION) (VARIES) (WITH) (FOR) (ALL) (WE_HAVE) (FIXED) (BY) (RULE) (LET) (EXISTS) (IN) (AMONG) (SUCH) (THAT) (NOT) (MAXIMUM) (MINIMUM) (COMBINE) (INITIALLY) (IMPOSSIBLE) (IS) (EMPTY) (CARDINAL) (YEAR) (MONTH) (DAY) (TRUE) (FALSE) (INPUT) (OUTPUT) (INTERNAL)] @catala-font-lock-keyword-face"
   :language lang :feature 'all :override t
     '((COMMENT) @catala-font-lock-comment-face)
   :language lang :feature 'all :override t
     '((ATTRIBUTE) @catala-font-lock-attribute-face)
   :language lang :feature 'all :override 'prepend
     "(code_block) @catala-font-lock-code-block-face"
   :language lang :feature 'all :override t
     "(verb_block) @catala-font-lock-verbatim-face"
   :language lang :feature 'all :override 'prepend
     "(ERROR . [(BEGIN_METADATA) (BEGIN_CODE)])  @catala-font-lock-code-block-face"
))

(defun catala--treesit-indent-rules (lang)
  `((,lang
     (no-node parent-bol catala-default-indent)
     ((query "(law_heading) @indent") parent-bol 0)
     ((query "(law_text (LAW_WORD) @indent) @indent") prev-sibling 0)
     ((query "(code_block (_) @indent) @indent") column-0 0)
     ((query "(e_binop op: (_) @indent)") first-sibling 0)
     ((query "(e_binop op: [(AND) (OR) (XOR)] rhs: (_)? @indent)") first-sibling 0)
     ((query "(e_binop rhs: (_) @ident)") first-sibling catala-default-indent)
     ((query "((_) (DOT) @indent)") first-sibling 0)
     ((query "(e_fieldaccess (_) @indent)") first-sibling 2)
     ((query "(e_ifthenelse [(THEN) (ELSE)] @indent)") parent-bol 0)
     ((query "([(RPAREN) (RBRACKET) (RBRACE)] @indent)") parent-bol 0)
     ((query "(e_letin (binder) @indent def: (_) @indent)") first-sibling catala-default-indent)
     ((query "(e_letin [(DEFINED_AS) (IN)] @indent body: (_) @indent)") first-sibling 0)
     ((query "(var_list (_) @indent)") first-sibling 0)
     ((query "(typ_list (_) @indent)") first-sibling 0)
     ((query "(collection_elements (_) @indent)") first-sibling 0)
     ((query "(tuple_contents (_) @indent)") first-sibling 0)
     ((query "(params_decl) @indent") parent-bol ,(* 2 catala-default-indent))
     ((query "(param_decl) @indent") first-sibling 0)
     ((query "(e_match arg: (_) @indent)") first-sibling catala-default-indent)
     ((query "(e_match (_) @indent)") first-sibling 0)
     ((query "(match_case (_) @indent)") first-sibling 0)
     ((query "(enum_decl_item (_) @indent)") first-sibling 0)
     ((query "(struct_content_fields (ALT) @indent)") first-sibling 0)
     ((query "(e_apply (_) @indent)") first-sibling catala-default-indent)
     ((query "(fun_arguments (_) @indent)") first-sibling 0)
     ((query "(e_coll_fold [(COMBINE) (WITH) (AMONG) (FOR)] @indent)") first-sibling 0)
     ((query "(e_coll_fold acc: (_) @indent)") first-sibling ,(* 2 catala-default-indent))
     ((query "(e_coll_fold (_) @indent)") first-sibling catala-default-indent)
     ((query "(_ condition: (_) @indent)") first-sibling ,(* 2 catala-default-indent))
     ((query "(rule [(RULE) (EXCEPTION) (LABEL) (CONSEQUENCE) (DEFINED_AS)] @indent)") first-sibling 0)
     ((query "(rule (UNDER_CONDITION) @indent)") first-sibling catala-default-indent)
     ((query "(rule (_) @indent)") first-sibling ,(* 2 catala-default-indent))
     ((query "(definition [(DEFINITION) (EXCEPTION) (LABEL)] @indent)") first-sibling 0)
     ((query "(definition [(UNDER_CONDITION) (CONSEQUENCE) (DEFINED_AS)] @indent)") first-sibling 0)
     ((query "(definition [(OF) (STATE)] @indent)") first-sibling catala-default-indent)
     ((query "(definition body: (_) @indent)") first-sibling catala-default-indent)
     ((query "(definition (_) @indent)") first-sibling ,(* 2 catala-default-indent))
     ((query "(toplevel_def name: (_) @indent (typ) @indent)") first-sibling ,(* 2 catala-default-indent))
     ((query "(_ (_) @indent)") parent-bol catala-default-indent)
)))

;;;###autoload
(define-derived-mode catala-ts-mode markdown-mode "Catala"
  "Major mode for editing Catala syntax

\\<catala-ts-mode-map>"
  :group 'catala
  (let*
      ((name (buffer-file-name (current-buffer)))
       (lang (if (and name (string-match-p "\\.catala_fr" name))
                 'catala_fr
               'catala_en)))
    (when (treesit-ready-p lang)
      ;; Tree-sitter setup.
      (treesit-parser-create lang)

      (setq-local treesit-font-lock-settings (catala--treesit-font-lock-settings lang))
      (setq-local treesit-font-lock-feature-list '((all)))
      (setq-local treesit-simple-indent-rules (catala--treesit-indent-rules lang))

      ;; The following are WIP, not sure yet how treesit handles navigation
      (setq-local treesit-defun-type-regexp "(scope|(scope|struct|enum)_decl|toplevel_def|definition|rule)")
      (setq-local treesit-block-type-regexp "(code_block)")
      (setq-local treesit-sexp-type-regexp "(e_.*)")
      (setq-local treesit-sentence-type-regexp "(expression)")
      (setq-local treesit-text-type-regexp "(COMMENT)")
      (setq-local
       treesit-defun-name-function
       (lambda (node)
         (treesit-node-text
          (treesit-node-child-by-field-name node "name"))))

      (treesit-major-mode-setup)))

  (setq-local comment-start "#")
  (setq-local comment-end "")
  (setq-local word-wrap t)
  (setq-local markdown-asymmetric-header t)
  (setq-local markdown-indent-on-enter nil)
  (setq-local markdown-command "catala typecheck")
  (setq-local markdown-command-needs-filename t)

  (define-skeleton catala-insert-code-block
    "Insert a Catala code block"
    nil
    "\n```catala\n" _ "\n```\n" \n)

  (define-skeleton catala-insert-metadata-block
    "Insert a Catala code block"
    nil
    "\n```catala-metadata\n" _ "\n```\n" \n)

  (define-skeleton catala-insert-test-block
    "Insert a Catala code block"
    nil
    "\n```catala-test-cli\n$ catala " _ "\n```\n" \n)

  (define-key catala-ts-mode-map "\C-c.c" 'catala-insert-code-block)
  (define-key catala-ts-mode-map "\C-c.m" 'catala-insert-metadata-block)
  (define-key catala-ts-mode-map "\C-c.t" 'catala-insert-test-block)

  ; activate prettify-symbols-mode to use. Note: affects indentation
  ; You can use: (add-hook 'catala-mode-hook 'prettify-symbols-mode)
  (setq-local prettify-symbols-alist
              '((">=" . ?≥)
                ("<=" . ?≤)
                ("!=" . ?≠)
                ("--" . ?—)
                ))


  (run-mode-hooks 'catala-mode-hook)
)

(provide 'catala-ts-mode)

(with-eval-after-load 'eglot
  (add-to-list 'eglot-server-programs
               '(catala-ts-mode . ("catala-lsp"))))

(add-hook 'catala-mode-hook 'eglot-ensure)

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.catala_\\(fr\\|en\\|pl\\)" . catala-ts-mode))


;; Debugging
;(setq treesit--font-lock-verbose t)
;(setq treesit--indent-verbose t)
;(add-hook 'catala-mode-hook 'prettify-symbols-mode)
