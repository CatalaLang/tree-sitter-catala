; highlights.scm

(COMMENT) @comment
(LAW_HEADING) @property


; (law_text) @string
; (expression) @attribute

;(expression) @string

(literal) @constant

;(IDENT) @variable.builtin

(qlident ((DOT) @punctuation.delimiter)* ) @module
((variable) @error (#is-not? local))

(typ (_ (quident (UIDENT) @type))*) @type

(UIDENT) @module

(label) @tag

[(LBRACE) (RBRACE) (LPAREN) (RPAREN) (LBRACKET) (RBRACKET)] @punctuation.bracket

[(scope) (scope_decl) (struct_decl) (enum_decl) (toplevel_def)] @keyword.def

[(rule) (definition)] @keyword.struct
[(struct_decl_item) (enum_decl_item) (scope_decl_item)] @keyword.struct

(expression) @keyword

(expr_compound (DOT)* @operator)

;;(typ) @type

;; (scope_decl_item
;;  (scope_decl_item_attribute) @keyword
;;  (LIDENT) @variable) @keyword.struct

[(YEAR) (MONTH) (DAY)] @keyword

(builtin) @function.builtin
(literal) @constant
(expr_unop . (_) @operator)
(expr_binop [
    (PLUS) (MINUS) (MULT) (DIV)
    (EQUAL) (NOT_EQUAL) (GREATER) (GREATER_EQUAL) (LESSER) (LESSER_EQUAL)
    (AND) (OR) (XOR)
  ] @operator)

[(BEGIN_METADATA) (BEGIN_CODE) (END_CODE)] @punctuation.delimiter

(code_block) @block

(law_text) @law_text

;(code_block) @keyword.def
;(ERROR) @error
