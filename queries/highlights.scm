; highlights.scm

(COMMENT) @comment
(LAW_HEADING) @property

(typ) @type

; (law_text) @string
; (expression) @attribute

;(expression) @string

(literal) @constant

;(IDENT) @variable.builtin

(qlident (LIDENT) @variable) @module

(label) @tag

[(LBRACE) (RBRACE) (LPAREN) (RPAREN) (LBRACKET) (RBRACKET)] @punctuation.bracket

[(INPUT) (OUTPUT) (INTERNAL)] @keyword

[(YEAR) (MONTH) (DAY)] @keyword

(builtin) @function.builtin
(literal) @constant
(expr_unop _ @operator)
(expr_binop _ _ @operator _)

[(BEGIN_METADATA) (BEGIN_CODE) (END_CODE)] @punctuation.delimiter

;; (code_item
;;   (
;;     (DECLARATION) @keyword.struct
;;     [((ENUM) (constructor) @type)
;;      ((STRUCT) (constructor) @type)
;;      ((SCOPE) (constructor) @module)]
;;     (COLON) @keyword.struct
;;   )
;; )

;; (code_item
;;   (
;;     (SCOPE) @keyword.struct
;;     (constructor) @module
;;     (scope_use_condition)?
;;     (COLON) @keyword.struct
;;   )
;; )

