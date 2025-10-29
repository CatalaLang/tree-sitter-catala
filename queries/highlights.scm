; highlights.scm

(COMMENT) @comment
(law_heading) @property


; (law_text) @string
; (expression) @attribute

;(expression) @string

(literal) @constant

;(IDENT) @variable.builtin

;(path ((DOT) @punctuation.delimiter)*) @module
((variable) @variable)

(typ) @type

(module_name) @type
(scope_name) @keyword.def
[(constructor_name) (enum_struct_name)] @type

(label) @tag

[(LBRACE) (RBRACE) (LPAREN) (RPAREN) (LBRACKET) (RBRACKET)] @punctuation.bracket

[(scope) (scope_decl) (struct_decl) (enum_decl) (toplevel_def)] @keyword.def

[(rule) (definition)] @keyword.struct
[(struct_decl_item) (enum_decl_item) (scope_decl_item)] @keyword.struct

(expression) @keyword

(e_fieldaccess (DOT)* @operator)

;;(typ) @type

;; (scope_decl_item
;;  (scope_decl_item_attribute) @keyword
;;  (LIDENT) @variable) @keyword.struct

[(YEAR) (MONTH) (DAY)] @keyword

(builtin) @function.builtin
(literal) @constant
(e_unop . (_) @operator)
(e_binop . _ . (_) @operator)
  ;;   (PLUS) (MINUS) (MULT) (DIV)
  ;;   (EQUAL) (NOT_EQUAL) (GREATER) (GREATER_EQUAL) (LESSER) (LESSER_EQUAL)
  ;;   (AND) (OR) (XOR)
  ;; ] @operator)

[(BEGIN_METADATA) (BEGIN_CODE) (END_CODE)] @punctuation.delimiter

(code_block) @block

(law_text) @law_text

;(code_block) @keyword.def
;(ERROR) @error
