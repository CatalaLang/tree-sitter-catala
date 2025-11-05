; highlights.scm

(COMMENT) @comment
(law_heading) @module
(verb_block) @comment

(literal) @constant

(variable) @variable

(module_name) @module
(scope_name) @keyword.def
(constructor_name) @constructor
(enum_struct_name) @type

(label) @tag

[(LBRACE) (RBRACE) (LPAREN) (RPAREN) (LBRACKET) (RBRACKET)] @punctuation.bracket

(toplevel_def [(DECLARATION) (CONTENT) (DEFINED_AS)]* @keyword.def)

[(SCOPE) (CONSEQUENCE) (DATA) (DEPENDS) (DECLARATION) (CONTEXT) (OF) (CONTAINS) (ENUM) (SUM) (DEFINITION) (STATE) (LABEL) (EXCEPTION) (DEFINED_AS) (MATCH) (WITH_PATT) (BUT_REPLACE) (UNDER_CONDITION) (IF) (THEN) (ELSE) (CONDITION) (CONTENT) (STRUCT) (ASSERTION) (WITH) (RULE) (LET) (IN) (NOT) (INPUT) (OUTPUT) (INTERNAL) (TO)] @keyword

[(DECREASING) (INCREASING)] @constant

(rule (NOT)? @constant (FILLED) @constant)

(rounding_mode (_)* @keyword . (_) @constant .)

(primitive_typ (WILDCARD) @type (OF)? @type)

(type_variable) @variable.parameter

(match_case (WILDCARD) @constructor)

(e_fieldaccess (DOT)* @operator)

[(field_name) (TUPLE_INDEX)] @constructor

(state_label) @string

[(primitive_typ)] @type.builtin
(typ [(OPTION) (LIST)] @type.builtin)

(builtin) @function.builtin

(e_coll_filter [(LIST) (OF) (AMONG) (SUCH) (THAT)] @function.builtin)
(e_coll_sum [(SUM) (primitive_typ)] @function.builtin)
(e_coll_contains (CONTAINS) @operator)
(e_coll_map [(MAP_EACH) (AMONG) (TO)] @function.builtin)
(e_coll_fold [(COMBINE) (ALL) (AMONG) (IN) (INITIALLY) (WITH)] @function.builtin)
(e_coll_extremum [(MINIMUM) (MAXIMUM) (OF) (OR_EMPTY) (THEN)] @function.builtin)
(e_coll_exists [(EXISTS) (AMONG) (SUCH) (THAT)] @function.builtin)
(e_coll_forall [(FOR) (ALL) (AMONG) (WE_HAVE)] @function.builtin)
(e_coll_filter_map [(MAP_EACH) (AMONG) (SUCH) (THAT) (TO)] @function.builtin)
(e_coll_arg_extremum [(CONTENT) (OF) (AMONG) (SUCH) (THAT) (IS) (MINIMUM) (MAXIMUM) (OR_EMPTY) (THEN)] @function.builtin)

(literal) @number
[(YEAR) (MONTH) (DAY)] @constant.builtin
(e_unop . (_) @operator)
(e_binop . _ . (_) @operator)

(ATTRIBUTE) @attribute

[(BEGIN_METADATA) (BEGIN_CODE) (END_CODE)] @punctuation.delimiter

[(COMMA) (DOT) (SEMICOLON)] @punctuation

[(ALT) (COLON)] @punctuation

(law_text) @law_text
