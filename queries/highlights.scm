; highlights.scm

(COMMENT) @comment
(LAW_HEADING) @property
; (law_text) @string
; (expression) @attribute

;(expression) @string

(literal) @constant

;(IDENT) @variable.builtin

(qident) @module
(qident (ident) .) @module

(label) @tag

[(LBRACKET) (RBRACKET) (LPAREN) (RPAREN) (LSQUARE) (RSQUARE)] @punctuation.bracket

[(SCOPE) (CONSEQUENCE) (DATA) (DEPENDS) (DECLARATION) (CONTEXT) (DECREASING) (INCREASING) (OF) (COLLECTION) (ENUM) (SUM) (FILLED) (DEFINITION) (STATE) (LABEL) (EXCEPTION) (DEFINED_AS) (MATCH) (WILDCARD) (WITH) (UNDER_CONDITION) (IF) (THEN) (ELSE) (CONDITION) (CONTENT) (STRUCT) (ASSERTION) (VARIES) (WITH_V) (FOR) (ALL) (WE_HAVE) (FIXED) (BY) (RULE) (EXISTS) (IN) (SUCH) (THAT) (AND) (OR) (XOR) (NOT) (MAXIMUM) (MINIMUM) (FILTER) (MAP) (INIT) (CARDINAL) (YEAR) (MONTH) (DAY) (INPUT) (OUTPUT) (INTERNAL)] @keyword

[(logical_and_op) (logical_or_op)] @operator.logical

(compare_op) @operator.compare

[(mult_op) (sum_op)] @operator.arith

(unop) @operator.arith

(enum_decl_line
 (constructor) @property)
(maybe_qualified_constructor
 (constructor) @property)

(code_item
 (constructor) @module)

(typ) @type


[(BEGIN_METADATA) (BEGIN_CODE) (END_CODE)] @punctuation.delimiter

(code_item
  (
    (DECLARATION) @keyword.struct
    [((ENUM) (constructor) @type)
     ((STRUCT) (constructor) @type)
     ((SCOPE) (constructor) @module)]
    (COLON) @keyword.struct
  )
)

(code_item
  (
    (SCOPE) @keyword.struct
    (constructor) @module
    (scope_use_condition)?
    (COLON) @keyword.struct
  )
)

;(match_arm

;; (assertion)
;; (code)
;; (code_item)
;; (condition)
;; (condition_consequence)
;; (constructor_binding)
;; (definition)
;; (definition_parameters)
;; (enum_decl_line)
;; (enum_decl_line_payload)
;; (enum_inject_content)
;; (exception_to)
;; (exists_prefix)
;; (expression)
;; (for_all_marked)
;; (forall_prefix)
;; (label)
;; (law_text)
;; (literal)
;; (match_arm)
;; (match_arms)
;; (maybe_qualified_constructor)
;; (metadata_block)
;; (optional_binding)
;; (qident)
;; (rule)
;; (rule_consequence)
;; (rule_expr) @
;; (scope_decl_item)
;; (scope_decl_item_attribute)
;; (scope_use_condition)
;; (state)
;; (struct_content_field)
;; (struct_inject_content)
;; (struct_or_enum_inject)
;; (struct_scope)
;; (struct_scope_base)
;; (struct_scope_func)
