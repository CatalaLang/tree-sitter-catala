#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 654
#define LARGE_STATE_COUNT 106
#define SYMBOL_COUNT 206
#define ALIAS_COUNT 0
#define TOKEN_COUNT 119
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 16

enum {
  sym_LIDENT = 1,
  anon_sym_POUND = 2,
  aux_sym_COMMENT_token1 = 3,
  sym__newline = 4,
  sym_SCOPE = 5,
  sym_CONSEQUENCE = 6,
  sym_DATA = 7,
  sym_DEPENDS = 8,
  sym_DECLARATION = 9,
  sym_CONTEXT = 10,
  sym_DECREASING = 11,
  sym_INCREASING = 12,
  sym_OF = 13,
  sym_COLLECTION = 14,
  sym_CONTAINS = 15,
  sym_ENUM = 16,
  sym_INTEGER = 17,
  sym_MONEY = 18,
  sym_TEXT = 19,
  sym_DECIMAL = 20,
  sym_DATE = 21,
  sym_DURATION = 22,
  sym_BOOLEAN = 23,
  sym_SUM = 24,
  sym_FILLED = 25,
  sym_DEFINITION = 26,
  sym_STATE = 27,
  sym_LABEL = 28,
  sym_EXCEPTION = 29,
  sym_DEFINED_AS = 30,
  sym_MATCH = 31,
  sym_WILDCARD = 32,
  sym_WITH_PATT = 33,
  sym_UNDER_CONDITION = 34,
  sym_IF = 35,
  sym_THEN = 36,
  sym_ELSE = 37,
  sym_CONDITION = 38,
  sym_CONTENT = 39,
  sym_STRUCT = 40,
  sym_ASSERTION = 41,
  sym_VARIES = 42,
  sym_WITH = 43,
  sym_FOR = 44,
  sym_ALL = 45,
  sym_WE_HAVE = 46,
  sym_FIXED = 47,
  sym_BY = 48,
  sym_RULE = 49,
  sym_LET = 50,
  sym_EXISTS = 51,
  sym_IN = 52,
  sym_AMONG = 53,
  sym_SUCH = 54,
  sym_THAT = 55,
  sym_NOT = 56,
  sym_MAXIMUM = 57,
  sym_MINIMUM = 58,
  sym_IS = 59,
  sym_EMPTY = 60,
  sym_CARDINAL = 61,
  sym_YEAR = 62,
  sym_MONTH = 63,
  sym_DAY = 64,
  sym_TRUE = 65,
  sym_FALSE = 66,
  sym_INPUT = 67,
  sym_OUTPUT = 68,
  sym_INTERNAL = 69,
  sym_Round = 70,
  sym_GetDay = 71,
  sym_GetMonth = 72,
  sym_GetYear = 73,
  sym_FirstDayOfMonth = 74,
  sym_LastDayOfMonth = 75,
  sym_DECIMAL_LITERAL = 76,
  sym_MONEY_AMOUNT = 77,
  sym_LAW_INCLUDE = 78,
  sym_ALT = 79,
  sym_AT_PAGE = 80,
  sym_BEGIN_CODE = 81,
  sym_BEGIN_DIRECTIVE = 82,
  sym_BEGIN_METADATA = 83,
  sym_COLON = 84,
  sym_UIDENT = 85,
  sym_DIRECTIVE_ARG = 86,
  sym_DOT = 87,
  sym_COMMA = 88,
  sym_END_CODE = 89,
  sym_END_DIRECTIVE = 90,
  sym_INT_LITERAL = 91,
  sym_DATE_LITERAL = 92,
  sym_LAW_HEADING = 93,
  sym_LAW_LABEL = 94,
  sym_LAW_TEXT = 95,
  sym_LBRACE = 96,
  sym_LPAREN = 97,
  sym_LBRACKET = 98,
  sym_PERCENT = 99,
  sym_PLUSPLUS = 100,
  sym_RBRACE = 101,
  sym_RPAREN = 102,
  sym_RBRACKET = 103,
  sym_SEMICOLON = 104,
  sym_BAR = 105,
  sym_PLUS = 106,
  sym_MINUS = 107,
  sym_MULT = 108,
  sym_DIV = 109,
  sym_EQUAL = 110,
  sym_NOT_EQUAL = 111,
  sym_GREATER = 112,
  sym_GREATER_EQUAL = 113,
  sym_LESSER = 114,
  sym_LESSER_EQUAL = 115,
  sym_AND = 116,
  sym_OR = 117,
  sym_XOR = 118,
  sym_source_file = 119,
  sym_COMMENT = 120,
  sym_law_text = 121,
  sym_primitive_typ = 122,
  sym_typ = 123,
  sym_variable = 124,
  sym_field_name = 125,
  sym_label = 126,
  sym_state_label = 127,
  sym_module_name = 128,
  sym_scope_name = 129,
  sym_enum_struct_name = 130,
  sym_constructor_name = 131,
  sym_scope_var = 132,
  sym_path = 133,
  sym_qscope = 134,
  sym_qenum_struct = 135,
  sym_qconstructor = 136,
  sym_qfield = 137,
  sym__expr = 138,
  sym_e_variable = 139,
  sym_e_paren = 140,
  sym_e_collection = 141,
  sym_fun_argument = 142,
  sym_e_apply = 143,
  sym_e_scope_apply = 144,
  sym_e_test_match = 145,
  sym_e_coll_contains = 146,
  sym_e_coll_sum = 147,
  sym_e_coll_map = 148,
  sym_e_coll_extremum = 149,
  sym_e_unop = 150,
  sym_e_binop = 151,
  sym_e_coll_exists = 152,
  sym_e_coll_forall = 153,
  sym_e_match = 154,
  sym_e_ifthenelse = 155,
  sym_e_letin = 156,
  sym_match_case = 157,
  sym_e_fieldaccess = 158,
  sym_e_struct = 159,
  sym_e_enum = 160,
  sym_e_coll_filter = 161,
  sym_e_coll_filter_map = 162,
  sym_e_coll_arg_extremum = 163,
  sym_struct_content_field = 164,
  sym_unit_literal = 165,
  sym_literal = 166,
  sym_builtin = 167,
  sym_expression = 168,
  sym_rule_parameters = 169,
  sym_rule = 170,
  sym_definition = 171,
  sym_assertion = 172,
  sym_scope = 173,
  sym_scope_decl_item_attribute = 174,
  sym_param_decl = 175,
  sym__params_decl = 176,
  sym__depends_stance = 177,
  sym_scope_decl_item = 178,
  sym_scope_decl = 179,
  sym_struct_decl_item = 180,
  sym_struct_decl = 181,
  sym_enum_decl_item = 182,
  sym_enum_decl = 183,
  sym_toplevel_def = 184,
  aux_sym__code = 185,
  sym_code_block = 186,
  sym_directive = 187,
  sym_law_heading = 188,
  aux_sym_source_file_repeat1 = 189,
  aux_sym_law_text_repeat1 = 190,
  aux_sym_typ_repeat1 = 191,
  aux_sym_scope_var_repeat1 = 192,
  aux_sym_path_repeat1 = 193,
  aux_sym_e_collection_repeat1 = 194,
  aux_sym_e_apply_repeat1 = 195,
  aux_sym_e_scope_apply_repeat1 = 196,
  aux_sym_e_match_repeat1 = 197,
  aux_sym_rule_parameters_repeat1 = 198,
  aux_sym_scope_repeat1 = 199,
  aux_sym__params_decl_repeat1 = 200,
  aux_sym_scope_decl_item_repeat1 = 201,
  aux_sym_scope_decl_repeat1 = 202,
  aux_sym_struct_decl_repeat1 = 203,
  aux_sym_enum_decl_repeat1 = 204,
  aux_sym_directive_repeat1 = 205,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_LIDENT] = "LIDENT",
  [anon_sym_POUND] = "#",
  [aux_sym_COMMENT_token1] = "COMMENT_token1",
  [sym__newline] = "_newline",
  [sym_SCOPE] = "SCOPE",
  [sym_CONSEQUENCE] = "CONSEQUENCE",
  [sym_DATA] = "DATA",
  [sym_DEPENDS] = "DEPENDS",
  [sym_DECLARATION] = "DECLARATION",
  [sym_CONTEXT] = "CONTEXT",
  [sym_DECREASING] = "DECREASING",
  [sym_INCREASING] = "INCREASING",
  [sym_OF] = "OF",
  [sym_COLLECTION] = "COLLECTION",
  [sym_CONTAINS] = "CONTAINS",
  [sym_ENUM] = "ENUM",
  [sym_INTEGER] = "INTEGER",
  [sym_MONEY] = "MONEY",
  [sym_TEXT] = "TEXT",
  [sym_DECIMAL] = "DECIMAL",
  [sym_DATE] = "DATE",
  [sym_DURATION] = "DURATION",
  [sym_BOOLEAN] = "BOOLEAN",
  [sym_SUM] = "SUM",
  [sym_FILLED] = "FILLED",
  [sym_DEFINITION] = "DEFINITION",
  [sym_STATE] = "STATE",
  [sym_LABEL] = "LABEL",
  [sym_EXCEPTION] = "EXCEPTION",
  [sym_DEFINED_AS] = "DEFINED_AS",
  [sym_MATCH] = "MATCH",
  [sym_WILDCARD] = "WILDCARD",
  [sym_WITH_PATT] = "WITH_PATT",
  [sym_UNDER_CONDITION] = "UNDER_CONDITION",
  [sym_IF] = "IF",
  [sym_THEN] = "THEN",
  [sym_ELSE] = "ELSE",
  [sym_CONDITION] = "CONDITION",
  [sym_CONTENT] = "CONTENT",
  [sym_STRUCT] = "STRUCT",
  [sym_ASSERTION] = "ASSERTION",
  [sym_VARIES] = "VARIES",
  [sym_WITH] = "WITH",
  [sym_FOR] = "FOR",
  [sym_ALL] = "ALL",
  [sym_WE_HAVE] = "WE_HAVE",
  [sym_FIXED] = "FIXED",
  [sym_BY] = "BY",
  [sym_RULE] = "RULE",
  [sym_LET] = "LET",
  [sym_EXISTS] = "EXISTS",
  [sym_IN] = "IN",
  [sym_AMONG] = "AMONG",
  [sym_SUCH] = "SUCH",
  [sym_THAT] = "THAT",
  [sym_NOT] = "NOT",
  [sym_MAXIMUM] = "MAXIMUM",
  [sym_MINIMUM] = "MINIMUM",
  [sym_IS] = "IS",
  [sym_EMPTY] = "EMPTY",
  [sym_CARDINAL] = "CARDINAL",
  [sym_YEAR] = "YEAR",
  [sym_MONTH] = "MONTH",
  [sym_DAY] = "DAY",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_INPUT] = "INPUT",
  [sym_OUTPUT] = "OUTPUT",
  [sym_INTERNAL] = "INTERNAL",
  [sym_Round] = "Round",
  [sym_GetDay] = "GetDay",
  [sym_GetMonth] = "GetMonth",
  [sym_GetYear] = "GetYear",
  [sym_FirstDayOfMonth] = "FirstDayOfMonth",
  [sym_LastDayOfMonth] = "LastDayOfMonth",
  [sym_DECIMAL_LITERAL] = "DECIMAL_LITERAL",
  [sym_MONEY_AMOUNT] = "MONEY_AMOUNT",
  [sym_LAW_INCLUDE] = "LAW_INCLUDE",
  [sym_ALT] = "ALT",
  [sym_AT_PAGE] = "AT_PAGE",
  [sym_BEGIN_CODE] = "BEGIN_CODE",
  [sym_BEGIN_DIRECTIVE] = "BEGIN_DIRECTIVE",
  [sym_BEGIN_METADATA] = "BEGIN_METADATA",
  [sym_COLON] = "COLON",
  [sym_UIDENT] = "UIDENT",
  [sym_DIRECTIVE_ARG] = "DIRECTIVE_ARG",
  [sym_DOT] = "DOT",
  [sym_COMMA] = "COMMA",
  [sym_END_CODE] = "END_CODE",
  [sym_END_DIRECTIVE] = "END_DIRECTIVE",
  [sym_INT_LITERAL] = "INT_LITERAL",
  [sym_DATE_LITERAL] = "DATE_LITERAL",
  [sym_LAW_HEADING] = "LAW_HEADING",
  [sym_LAW_LABEL] = "LAW_LABEL",
  [sym_LAW_TEXT] = "LAW_TEXT",
  [sym_LBRACE] = "LBRACE",
  [sym_LPAREN] = "LPAREN",
  [sym_LBRACKET] = "LBRACKET",
  [sym_PERCENT] = "PERCENT",
  [sym_PLUSPLUS] = "PLUSPLUS",
  [sym_RBRACE] = "RBRACE",
  [sym_RPAREN] = "RPAREN",
  [sym_RBRACKET] = "RBRACKET",
  [sym_SEMICOLON] = "SEMICOLON",
  [sym_BAR] = "BAR",
  [sym_PLUS] = "PLUS",
  [sym_MINUS] = "MINUS",
  [sym_MULT] = "MULT",
  [sym_DIV] = "DIV",
  [sym_EQUAL] = "EQUAL",
  [sym_NOT_EQUAL] = "NOT_EQUAL",
  [sym_GREATER] = "GREATER",
  [sym_GREATER_EQUAL] = "GREATER_EQUAL",
  [sym_LESSER] = "LESSER",
  [sym_LESSER_EQUAL] = "LESSER_EQUAL",
  [sym_AND] = "AND",
  [sym_OR] = "OR",
  [sym_XOR] = "XOR",
  [sym_source_file] = "source_file",
  [sym_COMMENT] = "COMMENT",
  [sym_law_text] = "law_text",
  [sym_primitive_typ] = "primitive_typ",
  [sym_typ] = "typ",
  [sym_variable] = "variable",
  [sym_field_name] = "field_name",
  [sym_label] = "label",
  [sym_state_label] = "state_label",
  [sym_module_name] = "module_name",
  [sym_scope_name] = "scope_name",
  [sym_enum_struct_name] = "enum_struct_name",
  [sym_constructor_name] = "constructor_name",
  [sym_scope_var] = "scope_var",
  [sym_path] = "path",
  [sym_qscope] = "qscope",
  [sym_qenum_struct] = "qenum_struct",
  [sym_qconstructor] = "qconstructor",
  [sym_qfield] = "qfield",
  [sym__expr] = "_expr",
  [sym_e_variable] = "e_variable",
  [sym_e_paren] = "e_paren",
  [sym_e_collection] = "e_collection",
  [sym_fun_argument] = "fun_argument",
  [sym_e_apply] = "e_apply",
  [sym_e_scope_apply] = "e_scope_apply",
  [sym_e_test_match] = "e_test_match",
  [sym_e_coll_contains] = "e_coll_contains",
  [sym_e_coll_sum] = "e_coll_sum",
  [sym_e_coll_map] = "e_coll_map",
  [sym_e_coll_extremum] = "e_coll_extremum",
  [sym_e_unop] = "e_unop",
  [sym_e_binop] = "e_binop",
  [sym_e_coll_exists] = "e_coll_exists",
  [sym_e_coll_forall] = "e_coll_forall",
  [sym_e_match] = "e_match",
  [sym_e_ifthenelse] = "e_ifthenelse",
  [sym_e_letin] = "e_letin",
  [sym_match_case] = "match_case",
  [sym_e_fieldaccess] = "e_fieldaccess",
  [sym_e_struct] = "e_struct",
  [sym_e_enum] = "e_enum",
  [sym_e_coll_filter] = "e_coll_filter",
  [sym_e_coll_filter_map] = "e_coll_filter_map",
  [sym_e_coll_arg_extremum] = "e_coll_arg_extremum",
  [sym_struct_content_field] = "struct_content_field",
  [sym_unit_literal] = "unit_literal",
  [sym_literal] = "literal",
  [sym_builtin] = "builtin",
  [sym_expression] = "expression",
  [sym_rule_parameters] = "rule_parameters",
  [sym_rule] = "rule",
  [sym_definition] = "definition",
  [sym_assertion] = "assertion",
  [sym_scope] = "scope",
  [sym_scope_decl_item_attribute] = "scope_decl_item_attribute",
  [sym_param_decl] = "param_decl",
  [sym__params_decl] = "_params_decl",
  [sym__depends_stance] = "_depends_stance",
  [sym_scope_decl_item] = "scope_decl_item",
  [sym_scope_decl] = "scope_decl",
  [sym_struct_decl_item] = "struct_decl_item",
  [sym_struct_decl] = "struct_decl",
  [sym_enum_decl_item] = "enum_decl_item",
  [sym_enum_decl] = "enum_decl",
  [sym_toplevel_def] = "toplevel_def",
  [aux_sym__code] = "_code",
  [sym_code_block] = "code_block",
  [sym_directive] = "directive",
  [sym_law_heading] = "law_heading",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_law_text_repeat1] = "law_text_repeat1",
  [aux_sym_typ_repeat1] = "typ_repeat1",
  [aux_sym_scope_var_repeat1] = "scope_var_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_e_collection_repeat1] = "e_collection_repeat1",
  [aux_sym_e_apply_repeat1] = "e_apply_repeat1",
  [aux_sym_e_scope_apply_repeat1] = "e_scope_apply_repeat1",
  [aux_sym_e_match_repeat1] = "e_match_repeat1",
  [aux_sym_rule_parameters_repeat1] = "rule_parameters_repeat1",
  [aux_sym_scope_repeat1] = "scope_repeat1",
  [aux_sym__params_decl_repeat1] = "_params_decl_repeat1",
  [aux_sym_scope_decl_item_repeat1] = "scope_decl_item_repeat1",
  [aux_sym_scope_decl_repeat1] = "scope_decl_repeat1",
  [aux_sym_struct_decl_repeat1] = "struct_decl_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_LIDENT] = sym_LIDENT,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_COMMENT_token1] = aux_sym_COMMENT_token1,
  [sym__newline] = sym__newline,
  [sym_SCOPE] = sym_SCOPE,
  [sym_CONSEQUENCE] = sym_CONSEQUENCE,
  [sym_DATA] = sym_DATA,
  [sym_DEPENDS] = sym_DEPENDS,
  [sym_DECLARATION] = sym_DECLARATION,
  [sym_CONTEXT] = sym_CONTEXT,
  [sym_DECREASING] = sym_DECREASING,
  [sym_INCREASING] = sym_INCREASING,
  [sym_OF] = sym_OF,
  [sym_COLLECTION] = sym_COLLECTION,
  [sym_CONTAINS] = sym_CONTAINS,
  [sym_ENUM] = sym_ENUM,
  [sym_INTEGER] = sym_INTEGER,
  [sym_MONEY] = sym_MONEY,
  [sym_TEXT] = sym_TEXT,
  [sym_DECIMAL] = sym_DECIMAL,
  [sym_DATE] = sym_DATE,
  [sym_DURATION] = sym_DURATION,
  [sym_BOOLEAN] = sym_BOOLEAN,
  [sym_SUM] = sym_SUM,
  [sym_FILLED] = sym_FILLED,
  [sym_DEFINITION] = sym_DEFINITION,
  [sym_STATE] = sym_STATE,
  [sym_LABEL] = sym_LABEL,
  [sym_EXCEPTION] = sym_EXCEPTION,
  [sym_DEFINED_AS] = sym_DEFINED_AS,
  [sym_MATCH] = sym_MATCH,
  [sym_WILDCARD] = sym_WILDCARD,
  [sym_WITH_PATT] = sym_WITH_PATT,
  [sym_UNDER_CONDITION] = sym_UNDER_CONDITION,
  [sym_IF] = sym_IF,
  [sym_THEN] = sym_THEN,
  [sym_ELSE] = sym_ELSE,
  [sym_CONDITION] = sym_CONDITION,
  [sym_CONTENT] = sym_CONTENT,
  [sym_STRUCT] = sym_STRUCT,
  [sym_ASSERTION] = sym_ASSERTION,
  [sym_VARIES] = sym_VARIES,
  [sym_WITH] = sym_WITH,
  [sym_FOR] = sym_FOR,
  [sym_ALL] = sym_ALL,
  [sym_WE_HAVE] = sym_WE_HAVE,
  [sym_FIXED] = sym_FIXED,
  [sym_BY] = sym_BY,
  [sym_RULE] = sym_RULE,
  [sym_LET] = sym_LET,
  [sym_EXISTS] = sym_EXISTS,
  [sym_IN] = sym_IN,
  [sym_AMONG] = sym_AMONG,
  [sym_SUCH] = sym_SUCH,
  [sym_THAT] = sym_THAT,
  [sym_NOT] = sym_NOT,
  [sym_MAXIMUM] = sym_MAXIMUM,
  [sym_MINIMUM] = sym_MINIMUM,
  [sym_IS] = sym_IS,
  [sym_EMPTY] = sym_EMPTY,
  [sym_CARDINAL] = sym_CARDINAL,
  [sym_YEAR] = sym_YEAR,
  [sym_MONTH] = sym_MONTH,
  [sym_DAY] = sym_DAY,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym_INPUT] = sym_INPUT,
  [sym_OUTPUT] = sym_OUTPUT,
  [sym_INTERNAL] = sym_INTERNAL,
  [sym_Round] = sym_Round,
  [sym_GetDay] = sym_GetDay,
  [sym_GetMonth] = sym_GetMonth,
  [sym_GetYear] = sym_GetYear,
  [sym_FirstDayOfMonth] = sym_FirstDayOfMonth,
  [sym_LastDayOfMonth] = sym_LastDayOfMonth,
  [sym_DECIMAL_LITERAL] = sym_DECIMAL_LITERAL,
  [sym_MONEY_AMOUNT] = sym_MONEY_AMOUNT,
  [sym_LAW_INCLUDE] = sym_LAW_INCLUDE,
  [sym_ALT] = sym_ALT,
  [sym_AT_PAGE] = sym_AT_PAGE,
  [sym_BEGIN_CODE] = sym_BEGIN_CODE,
  [sym_BEGIN_DIRECTIVE] = sym_BEGIN_DIRECTIVE,
  [sym_BEGIN_METADATA] = sym_BEGIN_METADATA,
  [sym_COLON] = sym_COLON,
  [sym_UIDENT] = sym_UIDENT,
  [sym_DIRECTIVE_ARG] = sym_DIRECTIVE_ARG,
  [sym_DOT] = sym_DOT,
  [sym_COMMA] = sym_COMMA,
  [sym_END_CODE] = sym_END_CODE,
  [sym_END_DIRECTIVE] = sym_END_DIRECTIVE,
  [sym_INT_LITERAL] = sym_INT_LITERAL,
  [sym_DATE_LITERAL] = sym_DATE_LITERAL,
  [sym_LAW_HEADING] = sym_LAW_HEADING,
  [sym_LAW_LABEL] = sym_LAW_LABEL,
  [sym_LAW_TEXT] = sym_LAW_TEXT,
  [sym_LBRACE] = sym_LBRACE,
  [sym_LPAREN] = sym_LPAREN,
  [sym_LBRACKET] = sym_LBRACKET,
  [sym_PERCENT] = sym_PERCENT,
  [sym_PLUSPLUS] = sym_PLUSPLUS,
  [sym_RBRACE] = sym_RBRACE,
  [sym_RPAREN] = sym_RPAREN,
  [sym_RBRACKET] = sym_RBRACKET,
  [sym_SEMICOLON] = sym_SEMICOLON,
  [sym_BAR] = sym_BAR,
  [sym_PLUS] = sym_PLUS,
  [sym_MINUS] = sym_MINUS,
  [sym_MULT] = sym_MULT,
  [sym_DIV] = sym_DIV,
  [sym_EQUAL] = sym_EQUAL,
  [sym_NOT_EQUAL] = sym_NOT_EQUAL,
  [sym_GREATER] = sym_GREATER,
  [sym_GREATER_EQUAL] = sym_GREATER_EQUAL,
  [sym_LESSER] = sym_LESSER,
  [sym_LESSER_EQUAL] = sym_LESSER_EQUAL,
  [sym_AND] = sym_AND,
  [sym_OR] = sym_OR,
  [sym_XOR] = sym_XOR,
  [sym_source_file] = sym_source_file,
  [sym_COMMENT] = sym_COMMENT,
  [sym_law_text] = sym_law_text,
  [sym_primitive_typ] = sym_primitive_typ,
  [sym_typ] = sym_typ,
  [sym_variable] = sym_variable,
  [sym_field_name] = sym_field_name,
  [sym_label] = sym_label,
  [sym_state_label] = sym_state_label,
  [sym_module_name] = sym_module_name,
  [sym_scope_name] = sym_scope_name,
  [sym_enum_struct_name] = sym_enum_struct_name,
  [sym_constructor_name] = sym_constructor_name,
  [sym_scope_var] = sym_scope_var,
  [sym_path] = sym_path,
  [sym_qscope] = sym_qscope,
  [sym_qenum_struct] = sym_qenum_struct,
  [sym_qconstructor] = sym_qconstructor,
  [sym_qfield] = sym_qfield,
  [sym__expr] = sym__expr,
  [sym_e_variable] = sym_e_variable,
  [sym_e_paren] = sym_e_paren,
  [sym_e_collection] = sym_e_collection,
  [sym_fun_argument] = sym_fun_argument,
  [sym_e_apply] = sym_e_apply,
  [sym_e_scope_apply] = sym_e_scope_apply,
  [sym_e_test_match] = sym_e_test_match,
  [sym_e_coll_contains] = sym_e_coll_contains,
  [sym_e_coll_sum] = sym_e_coll_sum,
  [sym_e_coll_map] = sym_e_coll_map,
  [sym_e_coll_extremum] = sym_e_coll_extremum,
  [sym_e_unop] = sym_e_unop,
  [sym_e_binop] = sym_e_binop,
  [sym_e_coll_exists] = sym_e_coll_exists,
  [sym_e_coll_forall] = sym_e_coll_forall,
  [sym_e_match] = sym_e_match,
  [sym_e_ifthenelse] = sym_e_ifthenelse,
  [sym_e_letin] = sym_e_letin,
  [sym_match_case] = sym_match_case,
  [sym_e_fieldaccess] = sym_e_fieldaccess,
  [sym_e_struct] = sym_e_struct,
  [sym_e_enum] = sym_e_enum,
  [sym_e_coll_filter] = sym_e_coll_filter,
  [sym_e_coll_filter_map] = sym_e_coll_filter_map,
  [sym_e_coll_arg_extremum] = sym_e_coll_arg_extremum,
  [sym_struct_content_field] = sym_struct_content_field,
  [sym_unit_literal] = sym_unit_literal,
  [sym_literal] = sym_literal,
  [sym_builtin] = sym_builtin,
  [sym_expression] = sym_expression,
  [sym_rule_parameters] = sym_rule_parameters,
  [sym_rule] = sym_rule,
  [sym_definition] = sym_definition,
  [sym_assertion] = sym_assertion,
  [sym_scope] = sym_scope,
  [sym_scope_decl_item_attribute] = sym_scope_decl_item_attribute,
  [sym_param_decl] = sym_param_decl,
  [sym__params_decl] = sym__params_decl,
  [sym__depends_stance] = sym__depends_stance,
  [sym_scope_decl_item] = sym_scope_decl_item,
  [sym_scope_decl] = sym_scope_decl,
  [sym_struct_decl_item] = sym_struct_decl_item,
  [sym_struct_decl] = sym_struct_decl,
  [sym_enum_decl_item] = sym_enum_decl_item,
  [sym_enum_decl] = sym_enum_decl,
  [sym_toplevel_def] = sym_toplevel_def,
  [aux_sym__code] = aux_sym__code,
  [sym_code_block] = sym_code_block,
  [sym_directive] = sym_directive,
  [sym_law_heading] = sym_law_heading,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_law_text_repeat1] = aux_sym_law_text_repeat1,
  [aux_sym_typ_repeat1] = aux_sym_typ_repeat1,
  [aux_sym_scope_var_repeat1] = aux_sym_scope_var_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_e_collection_repeat1] = aux_sym_e_collection_repeat1,
  [aux_sym_e_apply_repeat1] = aux_sym_e_apply_repeat1,
  [aux_sym_e_scope_apply_repeat1] = aux_sym_e_scope_apply_repeat1,
  [aux_sym_e_match_repeat1] = aux_sym_e_match_repeat1,
  [aux_sym_rule_parameters_repeat1] = aux_sym_rule_parameters_repeat1,
  [aux_sym_scope_repeat1] = aux_sym_scope_repeat1,
  [aux_sym__params_decl_repeat1] = aux_sym__params_decl_repeat1,
  [aux_sym_scope_decl_item_repeat1] = aux_sym_scope_decl_item_repeat1,
  [aux_sym_scope_decl_repeat1] = aux_sym_scope_decl_repeat1,
  [aux_sym_struct_decl_repeat1] = aux_sym_struct_decl_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_LIDENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_COMMENT_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_SCOPE] = {
    .visible = true,
    .named = true,
  },
  [sym_CONSEQUENCE] = {
    .visible = true,
    .named = true,
  },
  [sym_DATA] = {
    .visible = true,
    .named = true,
  },
  [sym_DEPENDS] = {
    .visible = true,
    .named = true,
  },
  [sym_DECLARATION] = {
    .visible = true,
    .named = true,
  },
  [sym_CONTEXT] = {
    .visible = true,
    .named = true,
  },
  [sym_DECREASING] = {
    .visible = true,
    .named = true,
  },
  [sym_INCREASING] = {
    .visible = true,
    .named = true,
  },
  [sym_OF] = {
    .visible = true,
    .named = true,
  },
  [sym_COLLECTION] = {
    .visible = true,
    .named = true,
  },
  [sym_CONTAINS] = {
    .visible = true,
    .named = true,
  },
  [sym_ENUM] = {
    .visible = true,
    .named = true,
  },
  [sym_INTEGER] = {
    .visible = true,
    .named = true,
  },
  [sym_MONEY] = {
    .visible = true,
    .named = true,
  },
  [sym_TEXT] = {
    .visible = true,
    .named = true,
  },
  [sym_DECIMAL] = {
    .visible = true,
    .named = true,
  },
  [sym_DATE] = {
    .visible = true,
    .named = true,
  },
  [sym_DURATION] = {
    .visible = true,
    .named = true,
  },
  [sym_BOOLEAN] = {
    .visible = true,
    .named = true,
  },
  [sym_SUM] = {
    .visible = true,
    .named = true,
  },
  [sym_FILLED] = {
    .visible = true,
    .named = true,
  },
  [sym_DEFINITION] = {
    .visible = true,
    .named = true,
  },
  [sym_STATE] = {
    .visible = true,
    .named = true,
  },
  [sym_LABEL] = {
    .visible = true,
    .named = true,
  },
  [sym_EXCEPTION] = {
    .visible = true,
    .named = true,
  },
  [sym_DEFINED_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_MATCH] = {
    .visible = true,
    .named = true,
  },
  [sym_WILDCARD] = {
    .visible = true,
    .named = true,
  },
  [sym_WITH_PATT] = {
    .visible = true,
    .named = true,
  },
  [sym_UNDER_CONDITION] = {
    .visible = true,
    .named = true,
  },
  [sym_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_THEN] = {
    .visible = true,
    .named = true,
  },
  [sym_ELSE] = {
    .visible = true,
    .named = true,
  },
  [sym_CONDITION] = {
    .visible = true,
    .named = true,
  },
  [sym_CONTENT] = {
    .visible = true,
    .named = true,
  },
  [sym_STRUCT] = {
    .visible = true,
    .named = true,
  },
  [sym_ASSERTION] = {
    .visible = true,
    .named = true,
  },
  [sym_VARIES] = {
    .visible = true,
    .named = true,
  },
  [sym_WITH] = {
    .visible = true,
    .named = true,
  },
  [sym_FOR] = {
    .visible = true,
    .named = true,
  },
  [sym_ALL] = {
    .visible = true,
    .named = true,
  },
  [sym_WE_HAVE] = {
    .visible = true,
    .named = true,
  },
  [sym_FIXED] = {
    .visible = true,
    .named = true,
  },
  [sym_BY] = {
    .visible = true,
    .named = true,
  },
  [sym_RULE] = {
    .visible = true,
    .named = true,
  },
  [sym_LET] = {
    .visible = true,
    .named = true,
  },
  [sym_EXISTS] = {
    .visible = true,
    .named = true,
  },
  [sym_IN] = {
    .visible = true,
    .named = true,
  },
  [sym_AMONG] = {
    .visible = true,
    .named = true,
  },
  [sym_SUCH] = {
    .visible = true,
    .named = true,
  },
  [sym_THAT] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_MAXIMUM] = {
    .visible = true,
    .named = true,
  },
  [sym_MINIMUM] = {
    .visible = true,
    .named = true,
  },
  [sym_IS] = {
    .visible = true,
    .named = true,
  },
  [sym_EMPTY] = {
    .visible = true,
    .named = true,
  },
  [sym_CARDINAL] = {
    .visible = true,
    .named = true,
  },
  [sym_YEAR] = {
    .visible = true,
    .named = true,
  },
  [sym_MONTH] = {
    .visible = true,
    .named = true,
  },
  [sym_DAY] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_INTERNAL] = {
    .visible = true,
    .named = true,
  },
  [sym_Round] = {
    .visible = true,
    .named = true,
  },
  [sym_GetDay] = {
    .visible = true,
    .named = true,
  },
  [sym_GetMonth] = {
    .visible = true,
    .named = true,
  },
  [sym_GetYear] = {
    .visible = true,
    .named = true,
  },
  [sym_FirstDayOfMonth] = {
    .visible = true,
    .named = true,
  },
  [sym_LastDayOfMonth] = {
    .visible = true,
    .named = true,
  },
  [sym_DECIMAL_LITERAL] = {
    .visible = true,
    .named = true,
  },
  [sym_MONEY_AMOUNT] = {
    .visible = true,
    .named = true,
  },
  [sym_LAW_INCLUDE] = {
    .visible = true,
    .named = true,
  },
  [sym_ALT] = {
    .visible = true,
    .named = true,
  },
  [sym_AT_PAGE] = {
    .visible = true,
    .named = true,
  },
  [sym_BEGIN_CODE] = {
    .visible = true,
    .named = true,
  },
  [sym_BEGIN_DIRECTIVE] = {
    .visible = true,
    .named = true,
  },
  [sym_BEGIN_METADATA] = {
    .visible = true,
    .named = true,
  },
  [sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [sym_UIDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_DIRECTIVE_ARG] = {
    .visible = true,
    .named = true,
  },
  [sym_DOT] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMA] = {
    .visible = true,
    .named = true,
  },
  [sym_END_CODE] = {
    .visible = true,
    .named = true,
  },
  [sym_END_DIRECTIVE] = {
    .visible = true,
    .named = true,
  },
  [sym_INT_LITERAL] = {
    .visible = true,
    .named = true,
  },
  [sym_DATE_LITERAL] = {
    .visible = true,
    .named = true,
  },
  [sym_LAW_HEADING] = {
    .visible = true,
    .named = true,
  },
  [sym_LAW_LABEL] = {
    .visible = true,
    .named = true,
  },
  [sym_LAW_TEXT] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRACKET] = {
    .visible = true,
    .named = true,
  },
  [sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [sym_PLUSPLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym_RBRACKET] = {
    .visible = true,
    .named = true,
  },
  [sym_SEMICOLON] = {
    .visible = true,
    .named = true,
  },
  [sym_BAR] = {
    .visible = true,
    .named = true,
  },
  [sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_MINUS] = {
    .visible = true,
    .named = true,
  },
  [sym_MULT] = {
    .visible = true,
    .named = true,
  },
  [sym_DIV] = {
    .visible = true,
    .named = true,
  },
  [sym_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_GREATER] = {
    .visible = true,
    .named = true,
  },
  [sym_GREATER_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_LESSER] = {
    .visible = true,
    .named = true,
  },
  [sym_LESSER_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_XOR] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_law_text] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_typ] = {
    .visible = true,
    .named = true,
  },
  [sym_typ] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_label] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_struct_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_name] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_var] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_qscope] = {
    .visible = true,
    .named = true,
  },
  [sym_qenum_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_qconstructor] = {
    .visible = true,
    .named = true,
  },
  [sym_qfield] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_e_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_e_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_e_collection] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_e_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_e_scope_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_e_test_match] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_map] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_extremum] = {
    .visible = true,
    .named = true,
  },
  [sym_e_unop] = {
    .visible = true,
    .named = true,
  },
  [sym_e_binop] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_e_match] = {
    .visible = true,
    .named = true,
  },
  [sym_e_ifthenelse] = {
    .visible = true,
    .named = true,
  },
  [sym_e_letin] = {
    .visible = true,
    .named = true,
  },
  [sym_match_case] = {
    .visible = true,
    .named = true,
  },
  [sym_e_fieldaccess] = {
    .visible = true,
    .named = true,
  },
  [sym_e_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_e_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_filter_map] = {
    .visible = true,
    .named = true,
  },
  [sym_e_coll_arg_extremum] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_content_field] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_decl_item_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_param_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__params_decl] = {
    .visible = false,
    .named = true,
  },
  [sym__depends_stance] = {
    .visible = false,
    .named = true,
  },
  [sym_scope_decl_item] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl_item] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl_item] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__code] = {
    .visible = false,
    .named = false,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_law_heading] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_law_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typ_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_var_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_e_collection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_e_apply_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_e_scope_apply_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_e_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__params_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_decl_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_body = 2,
  field_coll = 3,
  field_cond = 4,
  field_def = 5,
  field_dft = 6,
  field_else = 7,
  field_elt = 8,
  field_fun = 9,
  field_lhs = 10,
  field_mapf = 11,
  field_rhs = 12,
  field_then = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_body] = "body",
  [field_coll] = "coll",
  [field_cond] = "cond",
  [field_def] = "def",
  [field_dft] = "dft",
  [field_else] = "else",
  [field_elt] = "elt",
  [field_fun] = "fun",
  [field_lhs] = "lhs",
  [field_mapf] = "mapf",
  [field_rhs] = "rhs",
  [field_then] = "then",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fun, 0},
  [1] =
    {field_coll, 0},
    {field_elt, 2},
  [3] =
    {field_arg, 0},
  [4] =
    {field_lhs, 0},
    {field_rhs, 2},
  [6] =
    {field_coll, 3},
  [7] =
    {field_arg, 1},
  [8] =
    {field_coll, 4},
    {field_mapf, 0},
  [10] =
    {field_cond, 1},
    {field_else, 5},
    {field_then, 3},
  [13] =
    {field_body, 5},
    {field_def, 3},
  [15] =
    {field_coll, 2},
    {field_cond, 5},
  [17] =
    {field_coll, 4},
    {field_cond, 6},
  [19] =
    {field_coll, 3},
    {field_cond, 6},
  [21] =
    {field_coll, 4},
    {field_cond, 7},
    {field_mapf, 0},
  [24] =
    {field_coll, 2},
    {field_dft, 8},
  [26] =
    {field_coll, 2},
    {field_dft, 13},
    {field_mapf, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_UIDENT_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_UIDENT_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '\''
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_LIDENT_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym_LIDENT_character_set_2(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= 'a' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym_LIDENT_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '\''
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (sym_UIDENT_character_set_1(lookahead)) ADVANCE(167);
      if (sym_LIDENT_character_set_1(lookahead)) ADVANCE(200);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(174);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '@') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 8364) ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_UIDENT_character_set_1(lookahead)) ADVANCE(167);
      if (sym_LIDENT_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 233) ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (sym_UIDENT_character_set_1(lookahead)) ADVANCE(167);
      if (sym_LIDENT_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == 233) ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 233) ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 233) ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_LIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 233) ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_UIDENT_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 37:
      if (lookahead == '`') ADVANCE(3);
      END_STATE();
    case 38:
      if (lookahead == '`') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 104:
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 105:
      if (lookahead == 224) ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 233) ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 121:
      if (eof) ADVANCE(125);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 122:
      if (eof) ADVANCE(125);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (sym_UIDENT_character_set_1(lookahead)) ADVANCE(167);
      if (sym_LIDENT_character_set_1(lookahead)) ADVANCE(200);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (sym_UIDENT_character_set_1(lookahead)) ADVANCE(167);
      if (sym_LIDENT_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_COMMENT_token1);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_COMMENT_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_SCOPE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_DEPENDS);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_DEFINED_AS);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_WILDCARD);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_WITH_PATT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_UNDER_CONDITION);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_WE_HAVE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_DECIMAL_LITERAL);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_DECIMAL_LITERAL);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_DECIMAL_LITERAL);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_DECIMAL_LITERAL);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_MONEY_AMOUNT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_LAW_INCLUDE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_LAW_INCLUDE);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ALT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_AT_PAGE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_AT_PAGE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_BEGIN_CODE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_BEGIN_DIRECTIVE);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(256);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_BEGIN_DIRECTIVE);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_BEGIN_DIRECTIVE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_BEGIN_METADATA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'c') ADVANCE(161);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'i') ADVANCE(164);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'l') ADVANCE(166);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'n') ADVANCE(159);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'n') ADVANCE(149);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'o') ADVANCE(163);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 's') ADVANCE(160);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_UIDENT);
      if (lookahead == 'u') ADVANCE(165);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_UIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_DIRECTIVE_ARG);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_DIRECTIVE_ARG);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_DIRECTIVE_ARG);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_DIRECTIVE_ARG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_END_CODE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_END_DIRECTIVE);
      if (lookahead == '\n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'a') ADVANCE(183);
      if (sym_LIDENT_character_set_3(lookahead)) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'a') ADVANCE(182);
      if (sym_LIDENT_character_set_3(lookahead)) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'd') ADVANCE(207);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'e') ADVANCE(184);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'g') ADVANCE(177);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'h') ADVANCE(176);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'l') ADVANCE(204);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'm') ADVANCE(190);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'n') ADVANCE(178);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(266);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'o') ADVANCE(195);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'o') ADVANCE(197);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'o') ADVANCE(198);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'p') ADVANCE(179);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'p') ADVANCE(205);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 's') ADVANCE(201);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 's') ADVANCE(203);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 's') ADVANCE(206);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'u') ADVANCE(265);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'u') ADVANCE(191);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'u') ADVANCE(266);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'u') ADVANCE(192);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 'u') ADVANCE(193);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_LIDENT);
      if (lookahead == 233) ADVANCE(189);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_LIDENT);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_INT_LITERAL);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == 8364) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_INT_LITERAL);
      if (lookahead == ',') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_DATE_LITERAL);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_LAW_HEADING);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_LAW_HEADING);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_LAW_HEADING);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_LAW_LABEL);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_LAW_TEXT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_PLUSPLUS);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_BAR);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_PLUS);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_MINUS);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_MINUS);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_MULT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_MULT);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_DIV);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_DIV);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_EQUAL);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_NOT_EQUAL);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_GREATER);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_GREATER);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_GREATER_EQUAL);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_GREATER_EQUAL);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_LESSER);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_LESSER);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_LESSER_EQUAL);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_LESSER_EQUAL);
      if (lookahead == '!' ||
          lookahead == '.' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == 8364) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_OR);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_OR);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_OR);
      if (sym_UIDENT_character_set_2(lookahead)) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_XOR);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'j') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 233) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 233) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 232) ADVANCE(49);
      if (lookahead == 233) ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_YEAR);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_OF);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_AND);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_IF);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 232) ADVANCE(113);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 233) ADVANCE(129);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_IS);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 83:
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 84:
      if (lookahead == 233) ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_NOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_BY);
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_THAT);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_SUCH);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'q') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_WITH);
      END_STATE();
    case 119:
      if (lookahead == 233) ADVANCE(170);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 233) ADVANCE(173);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_IN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_DATE);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 233) ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 135:
      if (lookahead == 233) ADVANCE(185);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_FIXED);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_DAY);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_MONTH);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_FOR);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_LET);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ALL);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_EMPTY);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 162:
      if (lookahead == 233) ADVANCE(203);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_STATE);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_THEN);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 173:
      if (lookahead == 'q') ADVANCE(212);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_DURATION);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_AMONG);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_RULE);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_MATCH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ELSE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_SUM);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_TEXT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_VARIES);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_MONEY);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_DATA);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_INTEGER);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_INPUT);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_EXISTS);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_CARDINAL);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_FILLED);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_Round);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_BOOLEAN);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_CONTENT);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 250:
      if (lookahead == '_') ADVANCE(274);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_DECIMAL);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_INTERNAL);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_MAXIMUM);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_MINIMUM);
      END_STATE();
    case 259:
      if (lookahead == '_') ADVANCE(279);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_CONTEXT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_CONTAINS);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 274:
      if (lookahead == 'j') ADVANCE(292);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 279:
      if (lookahead == 'j') ADVANCE(297);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 284:
      if (lookahead == 233) ADVANCE(301);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ASSERTION);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_CONDITION);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_INCREASING);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_EXCEPTION);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_STRUCT);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_LABEL);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_GetDay);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_GetMonth);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_COLLECTION);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_DEFINITION);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_GetYear);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_CONSEQUENCE);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_DECLARATION);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_DECREASING);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ENUM);
      END_STATE();
    case 319:
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 320:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 323:
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 324:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 325:
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 326:
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_LastDayOfMonth);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_FirstDayOfMonth);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 121},
  [2] = {.lex_state = 124},
  [3] = {.lex_state = 124},
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 124},
  [9] = {.lex_state = 124},
  [10] = {.lex_state = 124},
  [11] = {.lex_state = 124},
  [12] = {.lex_state = 124},
  [13] = {.lex_state = 124},
  [14] = {.lex_state = 124},
  [15] = {.lex_state = 124},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 124},
  [19] = {.lex_state = 124},
  [20] = {.lex_state = 124},
  [21] = {.lex_state = 124},
  [22] = {.lex_state = 124},
  [23] = {.lex_state = 124},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 124},
  [28] = {.lex_state = 124},
  [29] = {.lex_state = 124},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 124},
  [36] = {.lex_state = 124},
  [37] = {.lex_state = 124},
  [38] = {.lex_state = 124},
  [39] = {.lex_state = 124},
  [40] = {.lex_state = 124},
  [41] = {.lex_state = 124},
  [42] = {.lex_state = 124},
  [43] = {.lex_state = 124},
  [44] = {.lex_state = 124},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 124},
  [47] = {.lex_state = 124},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 124},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 124},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 124},
  [60] = {.lex_state = 124},
  [61] = {.lex_state = 124},
  [62] = {.lex_state = 124},
  [63] = {.lex_state = 124},
  [64] = {.lex_state = 124},
  [65] = {.lex_state = 124},
  [66] = {.lex_state = 124},
  [67] = {.lex_state = 124},
  [68] = {.lex_state = 124},
  [69] = {.lex_state = 124},
  [70] = {.lex_state = 124},
  [71] = {.lex_state = 124},
  [72] = {.lex_state = 124},
  [73] = {.lex_state = 124},
  [74] = {.lex_state = 124},
  [75] = {.lex_state = 124},
  [76] = {.lex_state = 124},
  [77] = {.lex_state = 124},
  [78] = {.lex_state = 124},
  [79] = {.lex_state = 124},
  [80] = {.lex_state = 124},
  [81] = {.lex_state = 124},
  [82] = {.lex_state = 124},
  [83] = {.lex_state = 124},
  [84] = {.lex_state = 124},
  [85] = {.lex_state = 124},
  [86] = {.lex_state = 124},
  [87] = {.lex_state = 124},
  [88] = {.lex_state = 124},
  [89] = {.lex_state = 124},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 124},
  [92] = {.lex_state = 124},
  [93] = {.lex_state = 124},
  [94] = {.lex_state = 124},
  [95] = {.lex_state = 124},
  [96] = {.lex_state = 124},
  [97] = {.lex_state = 124},
  [98] = {.lex_state = 124},
  [99] = {.lex_state = 124},
  [100] = {.lex_state = 124},
  [101] = {.lex_state = 124},
  [102] = {.lex_state = 124},
  [103] = {.lex_state = 124},
  [104] = {.lex_state = 124},
  [105] = {.lex_state = 124},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 14},
  [217] = {.lex_state = 124},
  [218] = {.lex_state = 124},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 124},
  [245] = {.lex_state = 124},
  [246] = {.lex_state = 124},
  [247] = {.lex_state = 124},
  [248] = {.lex_state = 124},
  [249] = {.lex_state = 124},
  [250] = {.lex_state = 124},
  [251] = {.lex_state = 124},
  [252] = {.lex_state = 124},
  [253] = {.lex_state = 124},
  [254] = {.lex_state = 23},
  [255] = {.lex_state = 124},
  [256] = {.lex_state = 121},
  [257] = {.lex_state = 121},
  [258] = {.lex_state = 25},
  [259] = {.lex_state = 23},
  [260] = {.lex_state = 25},
  [261] = {.lex_state = 25},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 25},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 25},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 23},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 25},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 25},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 25},
  [285] = {.lex_state = 25},
  [286] = {.lex_state = 25},
  [287] = {.lex_state = 25},
  [288] = {.lex_state = 25},
  [289] = {.lex_state = 25},
  [290] = {.lex_state = 124},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 25},
  [293] = {.lex_state = 25},
  [294] = {.lex_state = 25},
  [295] = {.lex_state = 25},
  [296] = {.lex_state = 25},
  [297] = {.lex_state = 25},
  [298] = {.lex_state = 124},
  [299] = {.lex_state = 25},
  [300] = {.lex_state = 25},
  [301] = {.lex_state = 25},
  [302] = {.lex_state = 124},
  [303] = {.lex_state = 124},
  [304] = {.lex_state = 25},
  [305] = {.lex_state = 124},
  [306] = {.lex_state = 25},
  [307] = {.lex_state = 25},
  [308] = {.lex_state = 25},
  [309] = {.lex_state = 25},
  [310] = {.lex_state = 25},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 25},
  [313] = {.lex_state = 25},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 25},
  [316] = {.lex_state = 25},
  [317] = {.lex_state = 25},
  [318] = {.lex_state = 121},
  [319] = {.lex_state = 25},
  [320] = {.lex_state = 25},
  [321] = {.lex_state = 25},
  [322] = {.lex_state = 25},
  [323] = {.lex_state = 25},
  [324] = {.lex_state = 121},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 25},
  [327] = {.lex_state = 25},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 25},
  [330] = {.lex_state = 25},
  [331] = {.lex_state = 24},
  [332] = {.lex_state = 25},
  [333] = {.lex_state = 25},
  [334] = {.lex_state = 25},
  [335] = {.lex_state = 24},
  [336] = {.lex_state = 25},
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 25},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 25},
  [341] = {.lex_state = 25},
  [342] = {.lex_state = 122},
  [343] = {.lex_state = 25},
  [344] = {.lex_state = 121},
  [345] = {.lex_state = 25},
  [346] = {.lex_state = 121},
  [347] = {.lex_state = 13},
  [348] = {.lex_state = 25},
  [349] = {.lex_state = 121},
  [350] = {.lex_state = 27},
  [351] = {.lex_state = 27},
  [352] = {.lex_state = 121},
  [353] = {.lex_state = 26},
  [354] = {.lex_state = 121},
  [355] = {.lex_state = 26},
  [356] = {.lex_state = 121},
  [357] = {.lex_state = 121},
  [358] = {.lex_state = 26},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 26},
  [361] = {.lex_state = 26},
  [362] = {.lex_state = 124},
  [363] = {.lex_state = 124},
  [364] = {.lex_state = 25},
  [365] = {.lex_state = 124},
  [366] = {.lex_state = 24},
  [367] = {.lex_state = 124},
  [368] = {.lex_state = 25},
  [369] = {.lex_state = 24},
  [370] = {.lex_state = 25},
  [371] = {.lex_state = 124},
  [372] = {.lex_state = 22},
  [373] = {.lex_state = 22},
  [374] = {.lex_state = 22},
  [375] = {.lex_state = 124},
  [376] = {.lex_state = 22},
  [377] = {.lex_state = 124},
  [378] = {.lex_state = 25},
  [379] = {.lex_state = 25},
  [380] = {.lex_state = 25},
  [381] = {.lex_state = 25},
  [382] = {.lex_state = 25},
  [383] = {.lex_state = 124},
  [384] = {.lex_state = 22},
  [385] = {.lex_state = 28},
  [386] = {.lex_state = 124},
  [387] = {.lex_state = 124},
  [388] = {.lex_state = 22},
  [389] = {.lex_state = 124},
  [390] = {.lex_state = 5},
  [391] = {.lex_state = 124},
  [392] = {.lex_state = 22},
  [393] = {.lex_state = 13},
  [394] = {.lex_state = 124},
  [395] = {.lex_state = 124},
  [396] = {.lex_state = 26},
  [397] = {.lex_state = 124},
  [398] = {.lex_state = 124},
  [399] = {.lex_state = 124},
  [400] = {.lex_state = 124},
  [401] = {.lex_state = 22},
  [402] = {.lex_state = 26},
  [403] = {.lex_state = 26},
  [404] = {.lex_state = 26},
  [405] = {.lex_state = 124},
  [406] = {.lex_state = 124},
  [407] = {.lex_state = 124},
  [408] = {.lex_state = 124},
  [409] = {.lex_state = 26},
  [410] = {.lex_state = 124},
  [411] = {.lex_state = 5},
  [412] = {.lex_state = 124},
  [413] = {.lex_state = 124},
  [414] = {.lex_state = 22},
  [415] = {.lex_state = 13},
  [416] = {.lex_state = 124},
  [417] = {.lex_state = 13},
  [418] = {.lex_state = 124},
  [419] = {.lex_state = 124},
  [420] = {.lex_state = 22},
  [421] = {.lex_state = 13},
  [422] = {.lex_state = 26},
  [423] = {.lex_state = 25},
  [424] = {.lex_state = 13},
  [425] = {.lex_state = 13},
  [426] = {.lex_state = 25},
  [427] = {.lex_state = 124},
  [428] = {.lex_state = 124},
  [429] = {.lex_state = 13},
  [430] = {.lex_state = 22},
  [431] = {.lex_state = 124},
  [432] = {.lex_state = 13},
  [433] = {.lex_state = 124},
  [434] = {.lex_state = 124},
  [435] = {.lex_state = 26},
  [436] = {.lex_state = 124},
  [437] = {.lex_state = 124},
  [438] = {.lex_state = 22},
  [439] = {.lex_state = 124},
  [440] = {.lex_state = 25},
  [441] = {.lex_state = 22},
  [442] = {.lex_state = 124},
  [443] = {.lex_state = 124},
  [444] = {.lex_state = 5},
  [445] = {.lex_state = 26},
  [446] = {.lex_state = 25},
  [447] = {.lex_state = 13},
  [448] = {.lex_state = 22},
  [449] = {.lex_state = 124},
  [450] = {.lex_state = 124},
  [451] = {.lex_state = 26},
  [452] = {.lex_state = 124},
  [453] = {.lex_state = 124},
  [454] = {.lex_state = 22},
  [455] = {.lex_state = 25},
  [456] = {.lex_state = 26},
  [457] = {.lex_state = 22},
  [458] = {.lex_state = 26},
  [459] = {.lex_state = 124},
  [460] = {.lex_state = 124},
  [461] = {.lex_state = 28},
  [462] = {.lex_state = 22},
  [463] = {.lex_state = 124},
  [464] = {.lex_state = 124},
  [465] = {.lex_state = 124},
  [466] = {.lex_state = 124},
  [467] = {.lex_state = 124},
  [468] = {.lex_state = 124},
  [469] = {.lex_state = 124},
  [470] = {.lex_state = 124},
  [471] = {.lex_state = 124},
  [472] = {.lex_state = 124},
  [473] = {.lex_state = 124},
  [474] = {.lex_state = 124},
  [475] = {.lex_state = 124},
  [476] = {.lex_state = 124},
  [477] = {.lex_state = 124},
  [478] = {.lex_state = 13},
  [479] = {.lex_state = 28},
  [480] = {.lex_state = 124},
  [481] = {.lex_state = 124},
  [482] = {.lex_state = 124},
  [483] = {.lex_state = 124},
  [484] = {.lex_state = 124},
  [485] = {.lex_state = 124},
  [486] = {.lex_state = 124},
  [487] = {.lex_state = 124},
  [488] = {.lex_state = 124},
  [489] = {.lex_state = 124},
  [490] = {.lex_state = 124},
  [491] = {.lex_state = 28},
  [492] = {.lex_state = 124},
  [493] = {.lex_state = 124},
  [494] = {.lex_state = 28},
  [495] = {.lex_state = 124},
  [496] = {.lex_state = 124},
  [497] = {.lex_state = 124},
  [498] = {.lex_state = 124},
  [499] = {.lex_state = 124},
  [500] = {.lex_state = 124},
  [501] = {.lex_state = 124},
  [502] = {.lex_state = 124},
  [503] = {.lex_state = 124},
  [504] = {.lex_state = 124},
  [505] = {.lex_state = 124},
  [506] = {.lex_state = 124},
  [507] = {.lex_state = 124},
  [508] = {.lex_state = 124},
  [509] = {.lex_state = 124},
  [510] = {.lex_state = 124},
  [511] = {.lex_state = 124},
  [512] = {.lex_state = 28},
  [513] = {.lex_state = 22},
  [514] = {.lex_state = 124},
  [515] = {.lex_state = 124},
  [516] = {.lex_state = 124},
  [517] = {.lex_state = 124},
  [518] = {.lex_state = 124},
  [519] = {.lex_state = 124},
  [520] = {.lex_state = 124},
  [521] = {.lex_state = 29},
  [522] = {.lex_state = 124},
  [523] = {.lex_state = 28},
  [524] = {.lex_state = 124},
  [525] = {.lex_state = 124},
  [526] = {.lex_state = 124},
  [527] = {.lex_state = 124},
  [528] = {.lex_state = 124},
  [529] = {.lex_state = 124},
  [530] = {.lex_state = 28},
  [531] = {.lex_state = 124},
  [532] = {.lex_state = 28},
  [533] = {.lex_state = 124},
  [534] = {.lex_state = 124},
  [535] = {.lex_state = 124},
  [536] = {.lex_state = 124},
  [537] = {.lex_state = 124},
  [538] = {.lex_state = 124},
  [539] = {.lex_state = 124},
  [540] = {.lex_state = 124},
  [541] = {.lex_state = 124},
  [542] = {.lex_state = 124},
  [543] = {.lex_state = 124},
  [544] = {.lex_state = 124},
  [545] = {.lex_state = 124},
  [546] = {.lex_state = 124},
  [547] = {.lex_state = 124},
  [548] = {.lex_state = 124},
  [549] = {.lex_state = 124},
  [550] = {.lex_state = 124},
  [551] = {.lex_state = 124},
  [552] = {.lex_state = 124},
  [553] = {.lex_state = 28},
  [554] = {.lex_state = 28},
  [555] = {.lex_state = 124},
  [556] = {.lex_state = 124},
  [557] = {.lex_state = 124},
  [558] = {.lex_state = 124},
  [559] = {.lex_state = 124},
  [560] = {.lex_state = 28},
  [561] = {.lex_state = 124},
  [562] = {.lex_state = 124},
  [563] = {.lex_state = 124},
  [564] = {.lex_state = 131},
  [565] = {.lex_state = 124},
  [566] = {.lex_state = 124},
  [567] = {.lex_state = 124},
  [568] = {.lex_state = 124},
  [569] = {.lex_state = 124},
  [570] = {.lex_state = 28},
  [571] = {.lex_state = 124},
  [572] = {.lex_state = 124},
  [573] = {.lex_state = 28},
  [574] = {.lex_state = 4},
  [575] = {.lex_state = 124},
  [576] = {.lex_state = 28},
  [577] = {.lex_state = 30},
  [578] = {.lex_state = 124},
  [579] = {.lex_state = 124},
  [580] = {.lex_state = 124},
  [581] = {.lex_state = 28},
  [582] = {.lex_state = 124},
  [583] = {.lex_state = 124},
  [584] = {.lex_state = 124},
  [585] = {.lex_state = 28},
  [586] = {.lex_state = 124},
  [587] = {.lex_state = 124},
  [588] = {.lex_state = 124},
  [589] = {.lex_state = 124},
  [590] = {.lex_state = 124},
  [591] = {.lex_state = 124},
  [592] = {.lex_state = 124},
  [593] = {.lex_state = 124},
  [594] = {.lex_state = 124},
  [595] = {.lex_state = 124},
  [596] = {.lex_state = 124},
  [597] = {.lex_state = 124},
  [598] = {.lex_state = 124},
  [599] = {.lex_state = 124},
  [600] = {.lex_state = 124},
  [601] = {.lex_state = 124},
  [602] = {.lex_state = 124},
  [603] = {.lex_state = 124},
  [604] = {.lex_state = 124},
  [605] = {.lex_state = 124},
  [606] = {.lex_state = 124},
  [607] = {.lex_state = 28},
  [608] = {.lex_state = 124},
  [609] = {.lex_state = 124},
  [610] = {.lex_state = 124},
  [611] = {.lex_state = 124},
  [612] = {.lex_state = 124},
  [613] = {.lex_state = 15},
  [614] = {.lex_state = 124},
  [615] = {.lex_state = 124},
  [616] = {.lex_state = 124},
  [617] = {.lex_state = 124},
  [618] = {.lex_state = 124},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 124},
  [621] = {.lex_state = 124},
  [622] = {.lex_state = 124},
  [623] = {.lex_state = 124},
  [624] = {.lex_state = 124},
  [625] = {.lex_state = 124},
  [626] = {.lex_state = 124},
  [627] = {.lex_state = 124},
  [628] = {.lex_state = 124},
  [629] = {.lex_state = 124},
  [630] = {.lex_state = 124},
  [631] = {.lex_state = 124},
  [632] = {.lex_state = 124},
  [633] = {.lex_state = 124},
  [634] = {.lex_state = 28},
  [635] = {.lex_state = 28},
  [636] = {.lex_state = 124},
  [637] = {.lex_state = 124},
  [638] = {.lex_state = 7},
  [639] = {.lex_state = 124},
  [640] = {.lex_state = 124},
  [641] = {.lex_state = 15},
  [642] = {.lex_state = 124},
  [643] = {.lex_state = 124},
  [644] = {.lex_state = 124},
  [645] = {.lex_state = 124},
  [646] = {.lex_state = 124},
  [647] = {.lex_state = 124},
  [648] = {.lex_state = 124},
  [649] = {.lex_state = 28},
  [650] = {.lex_state = 28},
  [651] = {.lex_state = 124},
  [652] = {.lex_state = 124},
  [653] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_COMMENT] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_LIDENT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_CONSEQUENCE] = ACTIONS(1),
    [sym_DATA] = ACTIONS(1),
    [sym_DECLARATION] = ACTIONS(1),
    [sym_CONTEXT] = ACTIONS(1),
    [sym_DECREASING] = ACTIONS(1),
    [sym_INCREASING] = ACTIONS(1),
    [sym_OF] = ACTIONS(1),
    [sym_COLLECTION] = ACTIONS(1),
    [sym_CONTAINS] = ACTIONS(1),
    [sym_ENUM] = ACTIONS(1),
    [sym_INTEGER] = ACTIONS(1),
    [sym_MONEY] = ACTIONS(1),
    [sym_TEXT] = ACTIONS(1),
    [sym_DECIMAL] = ACTIONS(1),
    [sym_DATE] = ACTIONS(1),
    [sym_DURATION] = ACTIONS(1),
    [sym_BOOLEAN] = ACTIONS(1),
    [sym_SUM] = ACTIONS(1),
    [sym_FILLED] = ACTIONS(1),
    [sym_DEFINITION] = ACTIONS(1),
    [sym_STATE] = ACTIONS(1),
    [sym_LABEL] = ACTIONS(1),
    [sym_EXCEPTION] = ACTIONS(1),
    [sym_MATCH] = ACTIONS(1),
    [sym_IF] = ACTIONS(1),
    [sym_THEN] = ACTIONS(1),
    [sym_ELSE] = ACTIONS(1),
    [sym_CONDITION] = ACTIONS(1),
    [sym_CONTENT] = ACTIONS(1),
    [sym_STRUCT] = ACTIONS(1),
    [sym_ASSERTION] = ACTIONS(1),
    [sym_VARIES] = ACTIONS(1),
    [sym_WITH] = ACTIONS(1),
    [sym_FOR] = ACTIONS(1),
    [sym_ALL] = ACTIONS(1),
    [sym_FIXED] = ACTIONS(1),
    [sym_BY] = ACTIONS(1),
    [sym_RULE] = ACTIONS(1),
    [sym_LET] = ACTIONS(1),
    [sym_EXISTS] = ACTIONS(1),
    [sym_IN] = ACTIONS(1),
    [sym_AMONG] = ACTIONS(1),
    [sym_SUCH] = ACTIONS(1),
    [sym_THAT] = ACTIONS(1),
    [sym_NOT] = ACTIONS(1),
    [sym_MAXIMUM] = ACTIONS(1),
    [sym_MINIMUM] = ACTIONS(1),
    [sym_IS] = ACTIONS(1),
    [sym_EMPTY] = ACTIONS(1),
    [sym_CARDINAL] = ACTIONS(1),
    [sym_YEAR] = ACTIONS(1),
    [sym_MONTH] = ACTIONS(1),
    [sym_DAY] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym_INPUT] = ACTIONS(1),
    [sym_OUTPUT] = ACTIONS(1),
    [sym_INTERNAL] = ACTIONS(1),
    [sym_Round] = ACTIONS(1),
    [sym_GetDay] = ACTIONS(1),
    [sym_GetMonth] = ACTIONS(1),
    [sym_GetYear] = ACTIONS(1),
    [sym_FirstDayOfMonth] = ACTIONS(1),
    [sym_LastDayOfMonth] = ACTIONS(1),
    [sym_DECIMAL_LITERAL] = ACTIONS(1),
    [sym_LAW_INCLUDE] = ACTIONS(1),
    [sym_ALT] = ACTIONS(1),
    [sym_BEGIN_CODE] = ACTIONS(1),
    [sym_BEGIN_DIRECTIVE] = ACTIONS(1),
    [sym_BEGIN_METADATA] = ACTIONS(1),
    [sym_COLON] = ACTIONS(1),
    [sym_UIDENT] = ACTIONS(1),
    [sym_DOT] = ACTIONS(1),
    [sym_COMMA] = ACTIONS(1),
    [sym_INT_LITERAL] = ACTIONS(1),
    [sym_LAW_HEADING] = ACTIONS(1),
    [sym_LAW_TEXT] = ACTIONS(1),
    [sym_LBRACE] = ACTIONS(1),
    [sym_LPAREN] = ACTIONS(1),
    [sym_LBRACKET] = ACTIONS(1),
    [sym_PERCENT] = ACTIONS(1),
    [sym_PLUSPLUS] = ACTIONS(1),
    [sym_RBRACE] = ACTIONS(1),
    [sym_RPAREN] = ACTIONS(1),
    [sym_RBRACKET] = ACTIONS(1),
    [sym_SEMICOLON] = ACTIONS(1),
    [sym_BAR] = ACTIONS(1),
    [sym_PLUS] = ACTIONS(1),
    [sym_MINUS] = ACTIONS(1),
    [sym_MULT] = ACTIONS(1),
    [sym_DIV] = ACTIONS(1),
    [sym_EQUAL] = ACTIONS(1),
    [sym_NOT_EQUAL] = ACTIONS(1),
    [sym_GREATER] = ACTIONS(1),
    [sym_GREATER_EQUAL] = ACTIONS(1),
    [sym_LESSER] = ACTIONS(1),
    [sym_LESSER_EQUAL] = ACTIONS(1),
    [sym_AND] = ACTIONS(1),
    [sym_OR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(636),
    [sym_COMMENT] = STATE(1),
    [sym_law_text] = STATE(346),
    [sym_code_block] = STATE(346),
    [sym_directive] = STATE(346),
    [sym_law_heading] = STATE(346),
    [aux_sym_source_file_repeat1] = STATE(256),
    [aux_sym_law_text_repeat1] = STATE(324),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(3),
    [sym__newline] = ACTIONS(7),
    [sym_BEGIN_CODE] = ACTIONS(9),
    [sym_BEGIN_DIRECTIVE] = ACTIONS(11),
    [sym_BEGIN_METADATA] = ACTIONS(9),
    [sym_LAW_HEADING] = ACTIONS(13),
    [sym_LAW_TEXT] = ACTIONS(15),
  },
  [2] = {
    [sym_COMMENT] = STATE(2),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(189),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_fun_argument] = STATE(190),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_apply_repeat1] = STATE(8),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [3] = {
    [sym_COMMENT] = STATE(3),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(220),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_collection_repeat1] = STATE(21),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_RBRACKET] = ACTIONS(55),
    [sym_MINUS] = ACTIONS(53),
  },
  [4] = {
    [sym_COMMENT] = STATE(4),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(128),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_fun_argument] = STATE(153),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_apply_repeat1] = STATE(7),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [5] = {
    [sym_COMMENT] = STATE(5),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(340),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_UNDER_CONDITION] = ACTIONS(91),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [6] = {
    [sym_COMMENT] = STATE(6),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(128),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_fun_argument] = STATE(139),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_apply_repeat1] = STATE(4),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [7] = {
    [sym_COMMENT] = STATE(7),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(230),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_fun_argument] = STATE(544),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_apply_repeat1] = STATE(7),
    [sym_LIDENT] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(96),
    [sym_DECIMAL] = ACTIONS(96),
    [sym_SUM] = ACTIONS(99),
    [sym_MATCH] = ACTIONS(102),
    [sym_IF] = ACTIONS(105),
    [sym_FOR] = ACTIONS(108),
    [sym_LET] = ACTIONS(111),
    [sym_EXISTS] = ACTIONS(114),
    [sym_NOT] = ACTIONS(117),
    [sym_MAXIMUM] = ACTIONS(120),
    [sym_MINIMUM] = ACTIONS(120),
    [sym_CARDINAL] = ACTIONS(96),
    [sym_TRUE] = ACTIONS(123),
    [sym_FALSE] = ACTIONS(123),
    [sym_OUTPUT] = ACTIONS(126),
    [sym_Round] = ACTIONS(96),
    [sym_GetDay] = ACTIONS(96),
    [sym_GetMonth] = ACTIONS(96),
    [sym_GetYear] = ACTIONS(96),
    [sym_FirstDayOfMonth] = ACTIONS(96),
    [sym_LastDayOfMonth] = ACTIONS(96),
    [sym_DECIMAL_LITERAL] = ACTIONS(129),
    [sym_MONEY_AMOUNT] = ACTIONS(132),
    [sym_UIDENT] = ACTIONS(135),
    [sym_INT_LITERAL] = ACTIONS(129),
    [sym_DATE_LITERAL] = ACTIONS(132),
    [sym_LPAREN] = ACTIONS(138),
    [sym_LBRACKET] = ACTIONS(141),
    [sym_MINUS] = ACTIONS(144),
  },
  [8] = {
    [sym_COMMENT] = STATE(8),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(189),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_fun_argument] = STATE(195),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_apply_repeat1] = STATE(7),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [9] = {
    [sym_COMMENT] = STATE(9),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(223),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_collection_repeat1] = STATE(14),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_RBRACKET] = ACTIONS(147),
    [sym_MINUS] = ACTIONS(53),
  },
  [10] = {
    [sym_COMMENT] = STATE(10),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(566),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [11] = {
    [sym_COMMENT] = STATE(11),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(316),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [12] = {
    [sym_COMMENT] = STATE(12),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(556),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [13] = {
    [sym_COMMENT] = STATE(13),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(562),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [14] = {
    [sym_COMMENT] = STATE(14),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(224),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_collection_repeat1] = STATE(42),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [15] = {
    [sym_COMMENT] = STATE(15),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(341),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [16] = {
    [sym_COMMENT] = STATE(16),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(588),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [17] = {
    [sym_COMMENT] = STATE(17),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(648),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [18] = {
    [sym_COMMENT] = STATE(18),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(643),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [19] = {
    [sym_COMMENT] = STATE(19),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(313),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [20] = {
    [sym_COMMENT] = STATE(20),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(629),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [21] = {
    [sym_COMMENT] = STATE(21),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(222),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_collection_repeat1] = STATE(42),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [22] = {
    [sym_COMMENT] = STATE(22),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(627),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [23] = {
    [sym_COMMENT] = STATE(23),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(651),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [24] = {
    [sym_COMMENT] = STATE(24),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(322),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [25] = {
    [sym_COMMENT] = STATE(25),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(539),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [26] = {
    [sym_COMMENT] = STATE(26),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(332),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [27] = {
    [sym_COMMENT] = STATE(27),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(319),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [28] = {
    [sym_COMMENT] = STATE(28),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(330),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [29] = {
    [sym_COMMENT] = STATE(29),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(309),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [30] = {
    [sym_COMMENT] = STATE(30),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(583),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [31] = {
    [sym_COMMENT] = STATE(31),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(546),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [32] = {
    [sym_COMMENT] = STATE(32),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(572),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [33] = {
    [sym_COMMENT] = STATE(33),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(540),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [34] = {
    [sym_COMMENT] = STATE(34),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(455),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [35] = {
    [sym_COMMENT] = STATE(35),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(555),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [36] = {
    [sym_COMMENT] = STATE(36),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(338),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [37] = {
    [sym_COMMENT] = STATE(37),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(593),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [38] = {
    [sym_COMMENT] = STATE(38),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(226),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_COLLECTION] = ACTIONS(149),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [39] = {
    [sym_COMMENT] = STATE(39),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(584),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [40] = {
    [sym_COMMENT] = STATE(40),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(594),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [41] = {
    [sym_COMMENT] = STATE(41),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(333),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [42] = {
    [sym_COMMENT] = STATE(42),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(231),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [aux_sym_e_collection_repeat1] = STATE(42),
    [sym_LIDENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(154),
    [sym_DECIMAL] = ACTIONS(154),
    [sym_SUM] = ACTIONS(157),
    [sym_MATCH] = ACTIONS(160),
    [sym_IF] = ACTIONS(163),
    [sym_FOR] = ACTIONS(166),
    [sym_LET] = ACTIONS(169),
    [sym_EXISTS] = ACTIONS(172),
    [sym_NOT] = ACTIONS(175),
    [sym_MAXIMUM] = ACTIONS(178),
    [sym_MINIMUM] = ACTIONS(178),
    [sym_CARDINAL] = ACTIONS(154),
    [sym_TRUE] = ACTIONS(181),
    [sym_FALSE] = ACTIONS(181),
    [sym_OUTPUT] = ACTIONS(184),
    [sym_Round] = ACTIONS(154),
    [sym_GetDay] = ACTIONS(154),
    [sym_GetMonth] = ACTIONS(154),
    [sym_GetYear] = ACTIONS(154),
    [sym_FirstDayOfMonth] = ACTIONS(154),
    [sym_LastDayOfMonth] = ACTIONS(154),
    [sym_DECIMAL_LITERAL] = ACTIONS(187),
    [sym_MONEY_AMOUNT] = ACTIONS(190),
    [sym_UIDENT] = ACTIONS(193),
    [sym_INT_LITERAL] = ACTIONS(187),
    [sym_DATE_LITERAL] = ACTIONS(190),
    [sym_LPAREN] = ACTIONS(196),
    [sym_LBRACKET] = ACTIONS(199),
    [sym_MINUS] = ACTIONS(202),
  },
  [43] = {
    [sym_COMMENT] = STATE(43),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(321),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [44] = {
    [sym_COMMENT] = STATE(44),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(312),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [45] = {
    [sym_COMMENT] = STATE(45),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(598),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [46] = {
    [sym_COMMENT] = STATE(46),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(226),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_COLLECTION] = ACTIONS(205),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [47] = {
    [sym_COMMENT] = STATE(47),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(606),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [48] = {
    [sym_COMMENT] = STATE(48),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(446),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [49] = {
    [sym_COMMENT] = STATE(49),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(219),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [sym_expression] = STATE(334),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [50] = {
    [sym_COMMENT] = STATE(50),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(235),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [51] = {
    [sym_COMMENT] = STATE(51),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(168),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [52] = {
    [sym_COMMENT] = STATE(52),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(241),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [53] = {
    [sym_COMMENT] = STATE(53),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(226),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [54] = {
    [sym_COMMENT] = STATE(54),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(202),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(207),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [55] = {
    [sym_COMMENT] = STATE(55),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(183),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [56] = {
    [sym_COMMENT] = STATE(56),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(126),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [57] = {
    [sym_COMMENT] = STATE(57),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(212),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [58] = {
    [sym_COMMENT] = STATE(58),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(193),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [59] = {
    [sym_COMMENT] = STATE(59),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(238),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [60] = {
    [sym_COMMENT] = STATE(60),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(196),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [61] = {
    [sym_COMMENT] = STATE(61),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(215),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [62] = {
    [sym_COMMENT] = STATE(62),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(221),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [63] = {
    [sym_COMMENT] = STATE(63),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(242),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [64] = {
    [sym_COMMENT] = STATE(64),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(155),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [65] = {
    [sym_COMMENT] = STATE(65),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(130),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [66] = {
    [sym_COMMENT] = STATE(66),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(228),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [67] = {
    [sym_COMMENT] = STATE(67),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(227),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [68] = {
    [sym_COMMENT] = STATE(68),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(216),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [69] = {
    [sym_COMMENT] = STATE(69),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(210),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [70] = {
    [sym_COMMENT] = STATE(70),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(232),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [71] = {
    [sym_COMMENT] = STATE(71),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(157),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [72] = {
    [sym_COMMENT] = STATE(72),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(202),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [73] = {
    [sym_COMMENT] = STATE(73),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(201),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [74] = {
    [sym_COMMENT] = STATE(74),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(151),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [75] = {
    [sym_COMMENT] = STATE(75),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(150),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [76] = {
    [sym_COMMENT] = STATE(76),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(149),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [77] = {
    [sym_COMMENT] = STATE(77),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(148),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [78] = {
    [sym_COMMENT] = STATE(78),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(147),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [79] = {
    [sym_COMMENT] = STATE(79),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(140),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [80] = {
    [sym_COMMENT] = STATE(80),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(158),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [81] = {
    [sym_COMMENT] = STATE(81),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(138),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [82] = {
    [sym_COMMENT] = STATE(82),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(160),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [83] = {
    [sym_COMMENT] = STATE(83),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(229),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [84] = {
    [sym_COMMENT] = STATE(84),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(206),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [85] = {
    [sym_COMMENT] = STATE(85),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(161),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [86] = {
    [sym_COMMENT] = STATE(86),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(213),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [87] = {
    [sym_COMMENT] = STATE(87),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(200),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [88] = {
    [sym_COMMENT] = STATE(88),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(199),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [89] = {
    [sym_COMMENT] = STATE(89),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(240),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [90] = {
    [sym_COMMENT] = STATE(90),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(239),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [91] = {
    [sym_COMMENT] = STATE(91),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(234),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [92] = {
    [sym_COMMENT] = STATE(92),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(191),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [93] = {
    [sym_COMMENT] = STATE(93),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(131),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [94] = {
    [sym_COMMENT] = STATE(94),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(243),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [95] = {
    [sym_COMMENT] = STATE(95),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(233),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [96] = {
    [sym_COMMENT] = STATE(96),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(162),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [97] = {
    [sym_COMMENT] = STATE(97),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(236),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [98] = {
    [sym_COMMENT] = STATE(98),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(185),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [99] = {
    [sym_COMMENT] = STATE(99),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(179),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [100] = {
    [sym_COMMENT] = STATE(100),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(237),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [101] = {
    [sym_COMMENT] = STATE(101),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(209),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [102] = {
    [sym_COMMENT] = STATE(102),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(225),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(27),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
  [103] = {
    [sym_COMMENT] = STATE(103),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(166),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [104] = {
    [sym_COMMENT] = STATE(104),
    [sym_variable] = STATE(115),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(486),
    [sym_constructor_name] = STATE(116),
    [sym_path] = STATE(413),
    [sym_qenum_struct] = STATE(633),
    [sym_qconstructor] = STATE(117),
    [sym__expr] = STATE(167),
    [sym_e_variable] = STATE(129),
    [sym_e_paren] = STATE(129),
    [sym_e_collection] = STATE(129),
    [sym_e_apply] = STATE(129),
    [sym_e_scope_apply] = STATE(129),
    [sym_e_test_match] = STATE(129),
    [sym_e_coll_contains] = STATE(129),
    [sym_e_coll_sum] = STATE(129),
    [sym_e_coll_map] = STATE(129),
    [sym_e_coll_extremum] = STATE(129),
    [sym_e_unop] = STATE(129),
    [sym_e_binop] = STATE(129),
    [sym_e_coll_exists] = STATE(129),
    [sym_e_coll_forall] = STATE(129),
    [sym_e_match] = STATE(129),
    [sym_e_ifthenelse] = STATE(129),
    [sym_e_letin] = STATE(129),
    [sym_e_fieldaccess] = STATE(129),
    [sym_e_struct] = STATE(129),
    [sym_e_enum] = STATE(129),
    [sym_e_coll_filter] = STATE(129),
    [sym_e_coll_filter_map] = STATE(129),
    [sym_e_coll_arg_extremum] = STATE(129),
    [sym_literal] = STATE(129),
    [sym_builtin] = STATE(129),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(59),
    [sym_DECIMAL] = ACTIONS(59),
    [sym_SUM] = ACTIONS(61),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(63),
    [sym_FOR] = ACTIONS(65),
    [sym_LET] = ACTIONS(67),
    [sym_EXISTS] = ACTIONS(69),
    [sym_NOT] = ACTIONS(71),
    [sym_MAXIMUM] = ACTIONS(73),
    [sym_MINIMUM] = ACTIONS(73),
    [sym_CARDINAL] = ACTIONS(59),
    [sym_TRUE] = ACTIONS(75),
    [sym_FALSE] = ACTIONS(75),
    [sym_OUTPUT] = ACTIONS(77),
    [sym_Round] = ACTIONS(59),
    [sym_GetDay] = ACTIONS(59),
    [sym_GetMonth] = ACTIONS(59),
    [sym_GetYear] = ACTIONS(59),
    [sym_FirstDayOfMonth] = ACTIONS(59),
    [sym_LastDayOfMonth] = ACTIONS(59),
    [sym_DECIMAL_LITERAL] = ACTIONS(79),
    [sym_MONEY_AMOUNT] = ACTIONS(81),
    [sym_UIDENT] = ACTIONS(83),
    [sym_INT_LITERAL] = ACTIONS(79),
    [sym_DATE_LITERAL] = ACTIONS(81),
    [sym_LPAREN] = ACTIONS(85),
    [sym_LBRACKET] = ACTIONS(87),
    [sym_MINUS] = ACTIONS(89),
  },
  [105] = {
    [sym_COMMENT] = STATE(105),
    [sym_variable] = STATE(173),
    [sym_module_name] = STATE(545),
    [sym_enum_struct_name] = STATE(537),
    [sym_constructor_name] = STATE(172),
    [sym_path] = STATE(394),
    [sym_qenum_struct] = STATE(543),
    [sym_qconstructor] = STATE(171),
    [sym__expr] = STATE(202),
    [sym_e_variable] = STATE(186),
    [sym_e_paren] = STATE(186),
    [sym_e_collection] = STATE(186),
    [sym_e_apply] = STATE(186),
    [sym_e_scope_apply] = STATE(186),
    [sym_e_test_match] = STATE(186),
    [sym_e_coll_contains] = STATE(186),
    [sym_e_coll_sum] = STATE(186),
    [sym_e_coll_map] = STATE(186),
    [sym_e_coll_extremum] = STATE(186),
    [sym_e_unop] = STATE(186),
    [sym_e_binop] = STATE(186),
    [sym_e_coll_exists] = STATE(186),
    [sym_e_coll_forall] = STATE(186),
    [sym_e_match] = STATE(186),
    [sym_e_ifthenelse] = STATE(186),
    [sym_e_letin] = STATE(186),
    [sym_e_fieldaccess] = STATE(186),
    [sym_e_struct] = STATE(186),
    [sym_e_enum] = STATE(186),
    [sym_e_coll_filter] = STATE(186),
    [sym_e_coll_filter_map] = STATE(186),
    [sym_e_coll_arg_extremum] = STATE(186),
    [sym_literal] = STATE(186),
    [sym_builtin] = STATE(186),
    [aux_sym_path_repeat1] = STATE(397),
    [sym_LIDENT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_MONEY] = ACTIONS(21),
    [sym_DECIMAL] = ACTIONS(21),
    [sym_SUM] = ACTIONS(23),
    [sym_MATCH] = ACTIONS(25),
    [sym_IF] = ACTIONS(209),
    [sym_FOR] = ACTIONS(29),
    [sym_LET] = ACTIONS(31),
    [sym_EXISTS] = ACTIONS(33),
    [sym_NOT] = ACTIONS(35),
    [sym_MAXIMUM] = ACTIONS(37),
    [sym_MINIMUM] = ACTIONS(37),
    [sym_CARDINAL] = ACTIONS(21),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym_OUTPUT] = ACTIONS(41),
    [sym_Round] = ACTIONS(21),
    [sym_GetDay] = ACTIONS(21),
    [sym_GetMonth] = ACTIONS(21),
    [sym_GetYear] = ACTIONS(21),
    [sym_FirstDayOfMonth] = ACTIONS(21),
    [sym_LastDayOfMonth] = ACTIONS(21),
    [sym_DECIMAL_LITERAL] = ACTIONS(43),
    [sym_MONEY_AMOUNT] = ACTIONS(45),
    [sym_UIDENT] = ACTIONS(47),
    [sym_INT_LITERAL] = ACTIONS(43),
    [sym_DATE_LITERAL] = ACTIONS(45),
    [sym_LPAREN] = ACTIONS(49),
    [sym_LBRACKET] = ACTIONS(51),
    [sym_MINUS] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_COMMENT,
    ACTIONS(213), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(211), 43,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_FILLED,
      sym_DEFINITION,
      sym_STATE,
      sym_LABEL,
      sym_EXCEPTION,
      sym_DEFINED_AS,
      sym_WITH_PATT,
      sym_UNDER_CONDITION,
      sym_THEN,
      sym_ELSE,
      sym_CONDITION,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_AMONG,
      sym_SUCH,
      sym_NOT,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [58] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_COMMENT,
    STATE(133), 1,
      sym_unit_literal,
    ACTIONS(217), 4,
      sym_YEAR,
      sym_MONTH,
      sym_DAY,
      sym_PERCENT,
    ACTIONS(219), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(215), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [119] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_COMMENT,
    STATE(184), 1,
      sym_unit_literal,
    ACTIONS(219), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(221), 4,
      sym_YEAR,
      sym_MONTH,
      sym_DAY,
      sym_PERCENT,
    ACTIONS(215), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [178] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      sym_ALT,
    STATE(109), 1,
      sym_COMMENT,
    STATE(112), 1,
      aux_sym_e_match_repeat1,
    STATE(165), 1,
      sym_match_case,
    ACTIONS(227), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(223), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [238] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    ACTIONS(233), 1,
      sym_LBRACE,
    STATE(110), 1,
      sym_COMMENT,
    ACTIONS(235), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(229), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [296] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_COMMENT,
    ACTIONS(239), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(237), 39,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONDITION,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [350] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      sym_ALT,
    STATE(165), 1,
      sym_match_case,
    STATE(112), 2,
      sym_COMMENT,
      aux_sym_e_match_repeat1,
    ACTIONS(246), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(241), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [408] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_COMMENT,
    ACTIONS(250), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(248), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [461] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_COMMENT,
    ACTIONS(213), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(211), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_AMONG,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [514] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      sym_AMONG,
    STATE(115), 1,
      sym_COMMENT,
    ACTIONS(256), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(252), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [569] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_COMMENT,
    ACTIONS(260), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(258), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [622] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      sym_CONTENT,
    STATE(117), 1,
      sym_COMMENT,
    ACTIONS(266), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(262), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [677] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    STATE(118), 1,
      sym_COMMENT,
    ACTIONS(250), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(248), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [732] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_COMMENT,
    ACTIONS(270), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(268), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [785] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      sym_WITH,
    STATE(120), 1,
      sym_COMMENT,
    ACTIONS(276), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(272), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [840] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_COMMENT,
    ACTIONS(235), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(229), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [893] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_COMMENT,
    ACTIONS(280), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(278), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [946] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_COMMENT,
    ACTIONS(284), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(282), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [999] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_COMMENT,
    ACTIONS(288), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(286), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1051] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_COMMENT,
    ACTIONS(292), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(290), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1103] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(126), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(294), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [1177] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym_COMMENT,
    ACTIONS(219), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(215), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1229] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(128), 1,
      sym_COMMENT,
    ACTIONS(322), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(320), 31,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1291] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_COMMENT,
    ACTIONS(326), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(324), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1343] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(130), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(328), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [1417] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(131), 1,
      sym_COMMENT,
    ACTIONS(332), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(330), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1471] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_COMMENT,
    ACTIONS(336), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(334), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1523] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_COMMENT,
    ACTIONS(340), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(338), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1575] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_COMMENT,
    ACTIONS(344), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(342), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1627] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_COMMENT,
    ACTIONS(348), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(346), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1679] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_COMMENT,
    ACTIONS(352), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(350), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1731] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_COMMENT,
    ACTIONS(356), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(354), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1783] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(138), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(358), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [1857] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_COMMA,
    STATE(139), 1,
      sym_COMMENT,
    ACTIONS(364), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(360), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1911] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(140), 1,
      sym_COMMENT,
    ACTIONS(368), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(366), 31,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [1973] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      sym_DOT,
    STATE(141), 1,
      sym_COMMENT,
    ACTIONS(235), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(229), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2027] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      sym_OF,
    STATE(142), 1,
      sym_COMMENT,
    ACTIONS(374), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(370), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2081] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_COMMENT,
    ACTIONS(239), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(237), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2133] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_COMMENT,
    ACTIONS(378), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(376), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2185] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_COMMENT,
    ACTIONS(382), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(380), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2237] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    ACTIONS(233), 1,
      sym_LBRACE,
    STATE(146), 1,
      sym_COMMENT,
    ACTIONS(235), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(229), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2293] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(147), 1,
      sym_COMMENT,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(386), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(384), 29,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2357] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(148), 1,
      sym_COMMENT,
    ACTIONS(386), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(384), 31,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2419] = 12,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    STATE(149), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(386), 3,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(384), 28,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2487] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(150), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(384), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [2561] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(151), 1,
      sym_COMMENT,
    ACTIONS(390), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(388), 31,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2623] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_COMMENT,
    ACTIONS(394), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(392), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2675] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_COMMA,
    STATE(153), 1,
      sym_COMMENT,
    ACTIONS(398), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(396), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2729] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym_COMMENT,
    ACTIONS(402), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(400), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2781] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(406), 1,
      sym_SUCH,
    STATE(155), 1,
      sym_COMMENT,
    ACTIONS(408), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(404), 30,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2845] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_COMMENT,
    ACTIONS(412), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(410), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [2897] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(157), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(414), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [2971] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(158), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(416), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [3045] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_COMMENT,
    ACTIONS(420), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(418), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3097] = 16,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    ACTIONS(424), 1,
      sym_IS,
    STATE(160), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(422), 21,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [3173] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(161), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(426), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [3247] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(162), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(428), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [3321] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_COMMENT,
    ACTIONS(432), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(430), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3373] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_COMMENT,
    ACTIONS(250), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(248), 37,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_UNDER_CONDITION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3425] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_COMMENT,
    ACTIONS(436), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(434), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3477] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(166), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(438), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [3551] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    STATE(167), 1,
      sym_COMMENT,
    ACTIONS(442), 5,
      sym_PLUS,
      sym_MINUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(440), 31,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3613] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(168), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(444), 22,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_ALT,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RBRACE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [3687] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(446), 1,
      sym_WITH,
    STATE(169), 1,
      sym_COMMENT,
    ACTIONS(276), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(272), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3740] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_COMMENT,
    ACTIONS(280), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(278), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3791] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(448), 1,
      sym_CONTENT,
    STATE(171), 1,
      sym_COMMENT,
    ACTIONS(266), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(262), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3844] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_COMMENT,
    ACTIONS(260), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(258), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3895] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(450), 1,
      sym_AMONG,
    STATE(173), 1,
      sym_COMMENT,
    ACTIONS(256), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(252), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3948] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_COMMENT,
    ACTIONS(284), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(282), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [3999] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    STATE(175), 1,
      sym_COMMENT,
    ACTIONS(250), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(248), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4052] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym_COMMENT,
    ACTIONS(270), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(268), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WITH,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4103] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_COMMENT,
    ACTIONS(235), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(229), 36,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_CONTENT,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4154] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_COMMENT,
    ACTIONS(378), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(376), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4204] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(179), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(358), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [4276] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_COMMENT,
    ACTIONS(352), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(350), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4326] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_COMMENT,
    ACTIONS(356), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(354), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4376] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_COMMENT,
    ACTIONS(336), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(334), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4426] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(183), 1,
      sym_COMMENT,
    ACTIONS(332), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(330), 34,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4478] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_COMMENT,
    ACTIONS(340), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(338), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4528] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(185), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(444), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [4600] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_COMMENT,
    ACTIONS(326), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(324), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4650] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_COMMENT,
    ACTIONS(432), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(430), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4700] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_COMMENT,
    ACTIONS(412), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(410), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4750] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(189), 1,
      sym_COMMENT,
    ACTIONS(322), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(320), 30,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4810] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_COMMA,
    STATE(190), 1,
      sym_COMMENT,
    ACTIONS(364), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(360), 34,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4862] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(191), 1,
      sym_COMMENT,
    ACTIONS(368), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(366), 30,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4922] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      sym_DOT,
    STATE(192), 1,
      sym_COMMENT,
    ACTIONS(235), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(229), 34,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [4974] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(193), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(414), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [5046] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      sym_OF,
    STATE(194), 1,
      sym_COMMENT,
    ACTIONS(374), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(370), 34,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5098] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_COMMA,
    STATE(195), 1,
      sym_COMMENT,
    ACTIONS(398), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(396), 34,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5150] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(196), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(416), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [5222] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_COMMENT,
    ACTIONS(288), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(286), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5272] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_COMMENT,
    ACTIONS(348), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(346), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5322] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(199), 1,
      sym_COMMENT,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(386), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(384), 28,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5384] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(200), 1,
      sym_COMMENT,
    ACTIONS(386), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(384), 30,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5444] = 12,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    STATE(201), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(386), 3,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(384), 26,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5510] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(202), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(384), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [5582] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_COMMENT,
    ACTIONS(219), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(215), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5632] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(204), 1,
      sym_COMMENT,
    ACTIONS(394), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(392), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5682] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(205), 1,
      sym_COMMENT,
    ACTIONS(344), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(342), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5732] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(206), 1,
      sym_COMMENT,
    ACTIONS(390), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(388), 30,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5792] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_COMMENT,
    ACTIONS(292), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(290), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5842] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym_COMMENT,
    ACTIONS(402), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(400), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5892] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(478), 1,
      sym_SUCH,
    STATE(209), 1,
      sym_COMMENT,
    ACTIONS(408), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(404), 29,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [5954] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(210), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(428), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [6026] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym_COMMENT,
    ACTIONS(382), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(380), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [6076] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    STATE(212), 1,
      sym_COMMENT,
    ACTIONS(442), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(440), 30,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [6136] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(213), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(438), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [6208] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_COMMENT,
    ACTIONS(420), 4,
      sym_PLUS,
      sym_GREATER,
      sym_LESSER,
      sym_OR,
    ACTIONS(418), 35,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_OF,
      sym_CONTAINS,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_WITH_PATT,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_FOR,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_PLUSPLUS,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
      sym_MINUS,
      sym_MULT,
      sym_DIV,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
      sym_AND,
      sym_XOR,
  [6258] = 16,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(480), 1,
      sym_IS,
    STATE(215), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(422), 19,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [6332] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(216), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(426), 20,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_THEN,
      sym_ELSE,
      sym_ASSERTION,
      sym_WE_HAVE,
      sym_RULE,
      sym_IN,
      sym_SUCH,
      sym_IS,
      sym_COLON,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
      sym_RBRACKET,
      sym_SEMICOLON,
  [6404] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(217), 1,
      sym_COMMENT,
    ACTIONS(484), 6,
      sym_MONEY_AMOUNT,
      sym_UIDENT,
      sym_DATE_LITERAL,
      sym_LPAREN,
      sym_LBRACKET,
      sym_MINUS,
    ACTIONS(482), 24,
      sym_MONEY,
      sym_DECIMAL,
      sym_SUM,
      sym_MATCH,
      sym_IF,
      sym_FOR,
      sym_LET,
      sym_EXISTS,
      sym_NOT,
      sym_MAXIMUM,
      sym_MINIMUM,
      sym_CARDINAL,
      sym_TRUE,
      sym_FALSE,
      sym_OUTPUT,
      sym_Round,
      sym_GetDay,
      sym_GetMonth,
      sym_GetYear,
      sym_FirstDayOfMonth,
      sym_LastDayOfMonth,
      sym_DECIMAL_LITERAL,
      sym_LIDENT,
      sym_INT_LITERAL,
  [6445] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_COMMENT,
    ACTIONS(488), 6,
      sym_MONEY_AMOUNT,
      sym_UIDENT,
      sym_DATE_LITERAL,
      sym_LPAREN,
      sym_LBRACKET,
      sym_MINUS,
    ACTIONS(486), 24,
      sym_MONEY,
      sym_DECIMAL,
      sym_SUM,
      sym_MATCH,
      sym_IF,
      sym_FOR,
      sym_LET,
      sym_EXISTS,
      sym_NOT,
      sym_MAXIMUM,
      sym_MINIMUM,
      sym_CARDINAL,
      sym_TRUE,
      sym_FALSE,
      sym_OUTPUT,
      sym_Round,
      sym_GetDay,
      sym_GetMonth,
      sym_GetYear,
      sym_FirstDayOfMonth,
      sym_LastDayOfMonth,
      sym_DECIMAL_LITERAL,
      sym_LIDENT,
      sym_INT_LITERAL,
  [6486] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(219), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
    ACTIONS(490), 10,
      sym_SCOPE,
      sym_CONSEQUENCE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_COLON,
      sym_END_CODE,
  [6548] = 16,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(492), 1,
      sym_RBRACKET,
    ACTIONS(494), 1,
      sym_SEMICOLON,
    STATE(220), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6604] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_OF,
    ACTIONS(298), 1,
      sym_CONTAINS,
    ACTIONS(300), 1,
      sym_WITH_PATT,
    ACTIONS(302), 1,
      sym_FOR,
    ACTIONS(304), 1,
      sym_DOT,
    ACTIONS(306), 1,
      sym_PLUSPLUS,
    ACTIONS(318), 1,
      sym_OR,
    STATE(221), 1,
      sym_COMMENT,
    ACTIONS(308), 2,
      sym_PLUS,
      sym_MINUS,
    ACTIONS(310), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(314), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(316), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(496), 2,
      sym_ALT,
      sym_RBRACE,
    ACTIONS(312), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6658] = 16,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(494), 1,
      sym_SEMICOLON,
    ACTIONS(498), 1,
      sym_RBRACKET,
    STATE(222), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6714] = 16,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(494), 1,
      sym_SEMICOLON,
    ACTIONS(500), 1,
      sym_RBRACKET,
    STATE(223), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6770] = 16,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(494), 1,
      sym_SEMICOLON,
    ACTIONS(502), 1,
      sym_RBRACKET,
    STATE(224), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6826] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(504), 1,
      sym_SUCH,
    STATE(225), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6879] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(506), 1,
      sym_THEN,
    STATE(226), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6932] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(508), 1,
      sym_SUCH,
    STATE(227), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [6985] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(510), 1,
      sym_THEN,
    STATE(228), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7038] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(512), 1,
      sym_WE_HAVE,
    STATE(229), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7091] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(320), 1,
      sym_COMMA,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    STATE(230), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7144] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(494), 1,
      sym_SEMICOLON,
    STATE(231), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7197] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(514), 1,
      sym_SUCH,
    STATE(232), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7250] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(516), 1,
      sym_RPAREN,
    STATE(233), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7303] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(518), 1,
      sym_ELSE,
    STATE(234), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7356] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(520), 1,
      sym_ELSE,
    STATE(235), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7409] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(522), 1,
      sym_IN,
    STATE(236), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7462] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(524), 1,
      sym_SUCH,
    STATE(237), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7515] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(526), 1,
      sym_RPAREN,
    STATE(238), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7568] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(528), 1,
      sym_IN,
    STATE(239), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7621] = 15,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(530), 1,
      sym_WE_HAVE,
    STATE(240), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7674] = 14,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(474), 1,
      sym_OR,
    ACTIONS(532), 1,
      sym_WITH_PATT,
    STATE(241), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7724] = 14,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(534), 1,
      sym_OR,
    STATE(242), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7774] = 14,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_OF,
    ACTIONS(454), 1,
      sym_CONTAINS,
    ACTIONS(456), 1,
      sym_WITH_PATT,
    ACTIONS(458), 1,
      sym_FOR,
    ACTIONS(460), 1,
      sym_DOT,
    ACTIONS(464), 1,
      sym_PLUS,
    ACTIONS(536), 1,
      sym_OR,
    STATE(243), 1,
      sym_COMMENT,
    ACTIONS(462), 2,
      sym_PLUSPLUS,
      sym_MINUS,
    ACTIONS(466), 2,
      sym_MULT,
      sym_DIV,
    ACTIONS(470), 2,
      sym_GREATER,
      sym_LESSER,
    ACTIONS(472), 2,
      sym_AND,
      sym_XOR,
    ACTIONS(468), 4,
      sym_EQUAL,
      sym_NOT_EQUAL,
      sym_GREATER_EQUAL,
      sym_LESSER_EQUAL,
  [7824] = 13,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(542), 1,
      sym_UIDENT,
    STATE(244), 1,
      sym_COMMENT,
    STATE(251), 1,
      aux_sym_typ_repeat1,
    STATE(271), 1,
      sym_enum_struct_name,
    STATE(287), 1,
      sym_primitive_typ,
    STATE(288), 1,
      sym_qenum_struct,
    STATE(293), 1,
      sym_typ,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(500), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(540), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [7870] = 13,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(245), 1,
      sym_COMMENT,
    STATE(252), 1,
      aux_sym_typ_repeat1,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(274), 1,
      sym_primitive_typ,
    STATE(335), 1,
      sym_typ,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [7916] = 13,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(246), 1,
      sym_COMMENT,
    STATE(252), 1,
      aux_sym_typ_repeat1,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(274), 1,
      sym_primitive_typ,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(426), 1,
      sym_typ,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [7962] = 13,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(550), 1,
      sym_UIDENT,
    STATE(247), 1,
      sym_COMMENT,
    STATE(250), 1,
      aux_sym_typ_repeat1,
    STATE(265), 1,
      sym_typ,
    STATE(278), 1,
      sym_enum_struct_name,
    STATE(280), 1,
      sym_primitive_typ,
    STATE(283), 1,
      sym_qenum_struct,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(511), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(548), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8008] = 13,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(248), 1,
      sym_COMMENT,
    STATE(252), 1,
      aux_sym_typ_repeat1,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(274), 1,
      sym_primitive_typ,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(461), 1,
      sym_typ,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8054] = 13,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(249), 1,
      sym_COMMENT,
    STATE(252), 1,
      aux_sym_typ_repeat1,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(274), 1,
      sym_primitive_typ,
    STATE(351), 1,
      sym_typ,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8100] = 12,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(550), 1,
      sym_UIDENT,
    STATE(250), 1,
      sym_COMMENT,
    STATE(278), 1,
      sym_enum_struct_name,
    STATE(283), 1,
      sym_qenum_struct,
    STATE(290), 1,
      aux_sym_typ_repeat1,
    STATE(291), 1,
      sym_primitive_typ,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(511), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(548), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8143] = 12,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(542), 1,
      sym_UIDENT,
    STATE(251), 1,
      sym_COMMENT,
    STATE(271), 1,
      sym_enum_struct_name,
    STATE(273), 1,
      sym_primitive_typ,
    STATE(288), 1,
      sym_qenum_struct,
    STATE(290), 1,
      aux_sym_typ_repeat1,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(500), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(540), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8186] = 12,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_COLLECTION,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(252), 1,
      sym_COMMENT,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(277), 1,
      sym_primitive_typ,
    STATE(290), 1,
      aux_sym_typ_repeat1,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8229] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(253), 1,
      sym_COMMENT,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    STATE(591), 1,
      sym_primitive_typ,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8266] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_COMMENT,
    ACTIONS(233), 14,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_OF,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COLON,
      sym_DOT,
      sym_COMMA,
      sym_END_CODE,
      sym_LBRACE,
      sym_RPAREN,
  [8289] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      sym_UIDENT,
    STATE(255), 1,
      sym_COMMENT,
    STATE(268), 1,
      sym_qenum_struct,
    STATE(269), 1,
      sym_enum_struct_name,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(515), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
    STATE(582), 1,
      sym_primitive_typ,
    ACTIONS(544), 7,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
  [8326] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(11), 1,
      sym_BEGIN_DIRECTIVE,
    ACTIONS(13), 1,
      sym_LAW_HEADING,
    ACTIONS(15), 1,
      sym_LAW_TEXT,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    STATE(256), 1,
      sym_COMMENT,
    STATE(257), 1,
      aux_sym_source_file_repeat1,
    STATE(324), 1,
      aux_sym_law_text_repeat1,
    ACTIONS(9), 2,
      sym_BEGIN_CODE,
      sym_BEGIN_METADATA,
    STATE(346), 4,
      sym_law_text,
      sym_code_block,
      sym_directive,
      sym_law_heading,
  [8364] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 1,
      sym__newline,
    ACTIONS(562), 1,
      sym_BEGIN_DIRECTIVE,
    ACTIONS(565), 1,
      sym_LAW_HEADING,
    ACTIONS(568), 1,
      sym_LAW_TEXT,
    STATE(324), 1,
      aux_sym_law_text_repeat1,
    ACTIONS(559), 2,
      sym_BEGIN_CODE,
      sym_BEGIN_METADATA,
    STATE(257), 2,
      sym_COMMENT,
      aux_sym_source_file_repeat1,
    STATE(346), 4,
      sym_law_text,
      sym_code_block,
      sym_directive,
      sym_law_heading,
  [8400] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym_DEFINITION,
    ACTIONS(575), 1,
      sym_LABEL,
    ACTIONS(577), 1,
      sym_EXCEPTION,
    ACTIONS(579), 1,
      sym_ASSERTION,
    ACTIONS(581), 1,
      sym_RULE,
    STATE(258), 1,
      sym_COMMENT,
    STATE(266), 1,
      aux_sym_scope_repeat1,
    ACTIONS(571), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
    STATE(329), 3,
      sym_rule,
      sym_definition,
      sym_assertion,
  [8435] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    STATE(259), 1,
      sym_COMMENT,
    ACTIONS(233), 11,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_OF,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
  [8458] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym_DEFINITION,
    ACTIONS(575), 1,
      sym_LABEL,
    ACTIONS(577), 1,
      sym_EXCEPTION,
    ACTIONS(579), 1,
      sym_ASSERTION,
    ACTIONS(581), 1,
      sym_RULE,
    STATE(260), 1,
      sym_COMMENT,
    STATE(266), 1,
      aux_sym_scope_repeat1,
    ACTIONS(583), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
    STATE(329), 3,
      sym_rule,
      sym_definition,
      sym_assertion,
  [8493] = 10,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      sym_LIDENT,
    ACTIONS(590), 1,
      sym_DECLARATION,
    STATE(317), 1,
      sym_scope_decl_item,
    STATE(481), 1,
      sym_scope_decl_item_attribute,
    STATE(613), 1,
      sym_variable,
    ACTIONS(588), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(592), 2,
      sym_CONTEXT,
      sym_INPUT,
    ACTIONS(595), 2,
      sym_OUTPUT,
      sym_INTERNAL,
    STATE(261), 2,
      sym_COMMENT,
      aux_sym_scope_decl_repeat1,
  [8528] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(262), 1,
      sym_COMMENT,
    ACTIONS(598), 12,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_OF,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COMMA,
      sym_END_CODE,
      sym_LBRACE,
      sym_RPAREN,
  [8549] = 11,
    ACTIONS(17), 1,
      sym_LIDENT,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      sym_DECLARATION,
    STATE(261), 1,
      aux_sym_scope_decl_repeat1,
    STATE(263), 1,
      sym_COMMENT,
    STATE(317), 1,
      sym_scope_decl_item,
    STATE(481), 1,
      sym_scope_decl_item_attribute,
    STATE(613), 1,
      sym_variable,
    ACTIONS(600), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(604), 2,
      sym_CONTEXT,
      sym_INPUT,
    ACTIONS(606), 2,
      sym_OUTPUT,
      sym_INTERNAL,
  [8586] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      sym_DEPENDS,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(264), 1,
      sym_COMMENT,
    STATE(285), 1,
      aux_sym_scope_decl_item_repeat1,
    STATE(286), 1,
      sym__depends_stance,
    ACTIONS(610), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(608), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8617] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      sym_DEPENDS,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(265), 1,
      sym_COMMENT,
    STATE(276), 1,
      sym__depends_stance,
    STATE(282), 1,
      aux_sym_scope_decl_item_repeat1,
    ACTIONS(618), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(616), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8648] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      sym_DEFINITION,
    ACTIONS(625), 1,
      sym_LABEL,
    ACTIONS(628), 1,
      sym_EXCEPTION,
    ACTIONS(631), 1,
      sym_ASSERTION,
    ACTIONS(634), 1,
      sym_RULE,
    STATE(266), 2,
      sym_COMMENT,
      aux_sym_scope_repeat1,
    ACTIONS(620), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
    STATE(329), 3,
      sym_rule,
      sym_definition,
      sym_assertion,
  [8681] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    STATE(267), 1,
      sym_COMMENT,
    ACTIONS(233), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(637), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8705] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(268), 1,
      sym_COMMENT,
    ACTIONS(639), 11,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_OF,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
  [8725] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym_COMMENT,
    ACTIONS(641), 11,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_OF,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
  [8745] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    STATE(270), 1,
      sym_COMMENT,
    ACTIONS(233), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(637), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8769] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_COMMENT,
    ACTIONS(641), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(643), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8790] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      sym_COMMA,
    STATE(272), 1,
      sym_COMMENT,
    ACTIONS(647), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(645), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8813] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_COMMENT,
    ACTIONS(653), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(651), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8834] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(274), 1,
      sym_COMMENT,
    ACTIONS(655), 10,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
  [8853] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_COMMENT,
    ACTIONS(233), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(637), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8874] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(276), 1,
      sym_COMMENT,
    STATE(292), 1,
      aux_sym_scope_decl_item_repeat1,
    ACTIONS(659), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(657), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8899] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_COMMENT,
    ACTIONS(653), 10,
      sym_SCOPE,
      sym_DATA,
      sym_DEPENDS,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_ALT,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
  [8918] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_COMMENT,
    ACTIONS(641), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(643), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8939] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_STATE,
    ACTIONS(663), 2,
      sym_SCOPE,
      sym_END_CODE,
    STATE(279), 2,
      sym_COMMENT,
      aux_sym_scope_decl_item_repeat1,
    ACTIONS(661), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8962] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_COMMENT,
    ACTIONS(655), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(668), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [8983] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_COMMENT,
    ACTIONS(598), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(670), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9004] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(279), 1,
      aux_sym_scope_decl_item_repeat1,
    STATE(282), 1,
      sym_COMMENT,
    ACTIONS(659), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(657), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9029] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_COMMENT,
    ACTIONS(639), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(672), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9050] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_COMMENT,
    ACTIONS(598), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(670), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9071] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(279), 1,
      aux_sym_scope_decl_item_repeat1,
    STATE(285), 1,
      sym_COMMENT,
    ACTIONS(618), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(616), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9096] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(282), 1,
      aux_sym_scope_decl_item_repeat1,
    STATE(286), 1,
      sym_COMMENT,
    ACTIONS(618), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(616), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9121] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(287), 1,
      sym_COMMENT,
    ACTIONS(655), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(668), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9142] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(288), 1,
      sym_COMMENT,
    ACTIONS(639), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(672), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9163] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(289), 1,
      sym_COMMENT,
    ACTIONS(233), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(637), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9184] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      sym_COLLECTION,
    STATE(290), 2,
      sym_COMMENT,
      aux_sym_typ_repeat1,
    ACTIONS(677), 8,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
      sym_UIDENT,
  [9205] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_COMMENT,
    ACTIONS(653), 3,
      sym_SCOPE,
      sym_DEPENDS,
      sym_END_CODE,
    ACTIONS(651), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9226] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      sym_STATE,
    STATE(279), 1,
      aux_sym_scope_decl_item_repeat1,
    STATE(292), 1,
      sym_COMMENT,
    ACTIONS(681), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(679), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9251] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(293), 1,
      sym_COMMENT,
    ACTIONS(685), 3,
      sym_SCOPE,
      sym_COMMA,
      sym_END_CODE,
    ACTIONS(683), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9272] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      sym_COMMA,
    STATE(294), 1,
      sym_COMMENT,
    ACTIONS(689), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(687), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9295] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      sym_SCOPE,
    ACTIONS(693), 1,
      sym_DECLARATION,
    ACTIONS(695), 1,
      sym_END_CODE,
    STATE(295), 1,
      sym_COMMENT,
    STATE(299), 1,
      aux_sym__code,
    STATE(440), 5,
      sym_scope,
      sym_scope_decl,
      sym_struct_decl,
      sym_enum_decl,
      sym_toplevel_def,
  [9321] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      sym_SCOPE,
    ACTIONS(693), 1,
      sym_DECLARATION,
    ACTIONS(697), 1,
      sym_END_CODE,
    STATE(295), 1,
      aux_sym__code,
    STATE(296), 1,
      sym_COMMENT,
    STATE(440), 5,
      sym_scope,
      sym_scope_decl,
      sym_struct_decl,
      sym_enum_decl,
      sym_toplevel_def,
  [9347] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(297), 1,
      sym_COMMENT,
    ACTIONS(663), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(661), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9367] = 9,
    ACTIONS(17), 1,
      sym_LIDENT,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(263), 1,
      aux_sym_scope_decl_repeat1,
    STATE(298), 1,
      sym_COMMENT,
    STATE(317), 1,
      sym_scope_decl_item,
    STATE(481), 1,
      sym_scope_decl_item_attribute,
    STATE(613), 1,
      sym_variable,
    ACTIONS(604), 2,
      sym_CONTEXT,
      sym_INPUT,
    ACTIONS(606), 2,
      sym_OUTPUT,
      sym_INTERNAL,
  [9397] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      sym_SCOPE,
    ACTIONS(702), 1,
      sym_DECLARATION,
    ACTIONS(705), 1,
      sym_END_CODE,
    STATE(299), 2,
      sym_COMMENT,
      aux_sym__code,
    STATE(440), 5,
      sym_scope,
      sym_scope_decl,
      sym_struct_decl,
      sym_enum_decl,
      sym_toplevel_def,
  [9421] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(300), 1,
      sym_COMMENT,
    ACTIONS(709), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(707), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9441] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(301), 1,
      sym_COMMENT,
    ACTIONS(713), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(711), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9461] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym_DEFINITION,
    ACTIONS(575), 1,
      sym_LABEL,
    ACTIONS(577), 1,
      sym_EXCEPTION,
    ACTIONS(579), 1,
      sym_ASSERTION,
    ACTIONS(581), 1,
      sym_RULE,
    STATE(260), 1,
      aux_sym_scope_repeat1,
    STATE(302), 1,
      sym_COMMENT,
    STATE(329), 3,
      sym_rule,
      sym_definition,
      sym_assertion,
  [9491] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym_DEFINITION,
    ACTIONS(575), 1,
      sym_LABEL,
    ACTIONS(577), 1,
      sym_EXCEPTION,
    ACTIONS(579), 1,
      sym_ASSERTION,
    ACTIONS(581), 1,
      sym_RULE,
    STATE(258), 1,
      aux_sym_scope_repeat1,
    STATE(303), 1,
      sym_COMMENT,
    STATE(329), 3,
      sym_rule,
      sym_definition,
      sym_assertion,
  [9521] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(304), 1,
      sym_COMMENT,
    ACTIONS(717), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(715), 7,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_STATE,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9541] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(305), 1,
      sym_COMMENT,
    ACTIONS(719), 9,
      sym_COLLECTION,
      sym_INTEGER,
      sym_MONEY,
      sym_TEXT,
      sym_DECIMAL,
      sym_DATE,
      sym_DURATION,
      sym_BOOLEAN,
      sym_UIDENT,
  [9559] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(306), 1,
      sym_COMMENT,
    ACTIONS(721), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9576] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(307), 1,
      sym_COMMENT,
    ACTIONS(723), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9593] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(308), 1,
      sym_COMMENT,
    ACTIONS(725), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9610] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(309), 1,
      sym_COMMENT,
    ACTIONS(727), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9627] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(310), 1,
      sym_COMMENT,
    ACTIONS(729), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9644] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      sym_COMMA,
    STATE(311), 1,
      sym_COMMENT,
    ACTIONS(689), 7,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_END_CODE,
      sym_RPAREN,
  [9663] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(312), 1,
      sym_COMMENT,
    ACTIONS(731), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9680] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(313), 1,
      sym_COMMENT,
    ACTIONS(733), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9697] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_COMMENT,
    ACTIONS(735), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9714] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(315), 1,
      sym_COMMENT,
    ACTIONS(737), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9731] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_COMMENT,
    ACTIONS(739), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9748] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(317), 1,
      sym_COMMENT,
    ACTIONS(743), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(741), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [9767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      sym_LAW_TEXT,
    STATE(318), 2,
      sym_COMMENT,
      aux_sym_law_text_repeat1,
    ACTIONS(745), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [9786] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(319), 1,
      sym_COMMENT,
    ACTIONS(750), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9803] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(320), 1,
      sym_COMMENT,
    ACTIONS(752), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9820] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym_COMMENT,
    ACTIONS(754), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9837] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(322), 1,
      sym_COMMENT,
    ACTIONS(756), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9854] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(323), 1,
      sym_COMMENT,
    ACTIONS(758), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_LAW_TEXT,
    STATE(318), 1,
      aux_sym_law_text_repeat1,
    STATE(324), 1,
      sym_COMMENT,
    ACTIONS(760), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [9892] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_COMMENT,
    ACTIONS(762), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9909] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(326), 1,
      sym_COMMENT,
    ACTIONS(764), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9926] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_COMMENT,
    ACTIONS(766), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9943] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(328), 1,
      sym_COMMENT,
    ACTIONS(768), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9960] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_COMMENT,
    ACTIONS(770), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9977] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(330), 1,
      sym_COMMENT,
    ACTIONS(772), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [9994] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      sym_COMMA,
    STATE(331), 1,
      sym_COMMENT,
    ACTIONS(647), 7,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_END_CODE,
      sym_RPAREN,
  [10013] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(332), 1,
      sym_COMMENT,
    ACTIONS(774), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10030] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_COMMENT,
    ACTIONS(776), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10047] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(334), 1,
      sym_COMMENT,
    ACTIONS(778), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10064] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_COMMENT,
    ACTIONS(685), 8,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_COMMA,
      sym_END_CODE,
      sym_RPAREN,
  [10081] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_COMMENT,
    ACTIONS(248), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(250), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [10100] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(337), 1,
      sym_COMMENT,
    ACTIONS(780), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10117] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(338), 1,
      sym_COMMENT,
    ACTIONS(782), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10134] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(339), 1,
      sym_COMMENT,
    ACTIONS(610), 2,
      sym_SCOPE,
      sym_END_CODE,
    ACTIONS(608), 6,
      sym_DECLARATION,
      sym_CONTEXT,
      sym_INPUT,
      sym_OUTPUT,
      sym_INTERNAL,
      sym_LIDENT,
  [10153] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(340), 1,
      sym_COMMENT,
    ACTIONS(784), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10170] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(341), 1,
      sym_COMMENT,
    ACTIONS(786), 8,
      sym_SCOPE,
      sym_DECLARATION,
      sym_DEFINITION,
      sym_LABEL,
      sym_EXCEPTION,
      sym_ASSERTION,
      sym_RULE,
      sym_END_CODE,
  [10187] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      sym_LAW_TEXT,
    ACTIONS(792), 1,
      sym_BAR,
    STATE(342), 1,
      sym_COMMENT,
    ACTIONS(788), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10208] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      sym_DATA,
    ACTIONS(798), 1,
      sym_CONDITION,
    STATE(343), 1,
      sym_COMMENT,
    STATE(348), 1,
      aux_sym_struct_decl_repeat1,
    STATE(381), 1,
      sym_struct_decl_item,
    ACTIONS(794), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [10232] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      sym_LAW_TEXT,
    STATE(344), 1,
      sym_COMMENT,
    ACTIONS(800), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10250] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      sym_DATA,
    ACTIONS(798), 1,
      sym_CONDITION,
    STATE(343), 1,
      aux_sym_struct_decl_repeat1,
    STATE(345), 1,
      sym_COMMENT,
    STATE(381), 1,
      sym_struct_decl_item,
    ACTIONS(804), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [10274] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym_LAW_TEXT,
    STATE(346), 1,
      sym_COMMENT,
    ACTIONS(806), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10292] = 9,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      sym_ALT,
    ACTIONS(810), 1,
      sym_UIDENT,
    STATE(109), 1,
      aux_sym_e_match_repeat1,
    STATE(165), 1,
      sym_match_case,
    STATE(172), 1,
      sym_constructor_name,
    STATE(194), 1,
      sym_qconstructor,
    STATE(347), 1,
      sym_COMMENT,
    STATE(626), 1,
      sym_enum_struct_name,
  [10320] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      sym_DATA,
    ACTIONS(817), 1,
      sym_CONDITION,
    STATE(381), 1,
      sym_struct_decl_item,
    STATE(348), 2,
      sym_COMMENT,
      aux_sym_struct_decl_repeat1,
    ACTIONS(812), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [10342] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(822), 1,
      sym_LAW_TEXT,
    STATE(349), 1,
      sym_COMMENT,
    ACTIONS(820), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10360] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_DEPENDS,
    STATE(350), 1,
      sym_COMMENT,
    STATE(378), 1,
      sym__depends_stance,
    ACTIONS(824), 5,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_CONDITION,
      sym_END_CODE,
  [10380] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_DEPENDS,
    STATE(351), 1,
      sym_COMMENT,
    STATE(380), 1,
      sym__depends_stance,
    ACTIONS(828), 5,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_CONDITION,
      sym_END_CODE,
  [10400] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      sym_LAW_TEXT,
    STATE(352), 1,
      sym_COMMENT,
    ACTIONS(830), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10418] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym_COMMA,
    STATE(353), 1,
      sym_COMMENT,
    STATE(355), 1,
      aux_sym_rule_parameters_repeat1,
    ACTIONS(834), 5,
      sym_FILLED,
      sym_STATE,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
  [10438] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      sym_LAW_TEXT,
    STATE(354), 1,
      sym_COMMENT,
    ACTIONS(838), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10456] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym_COMMA,
    STATE(355), 1,
      sym_COMMENT,
    STATE(358), 1,
      aux_sym_rule_parameters_repeat1,
    ACTIONS(842), 5,
      sym_FILLED,
      sym_STATE,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
  [10476] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(846), 1,
      sym_LAW_TEXT,
    STATE(356), 1,
      sym_COMMENT,
    ACTIONS(844), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(848), 1,
      sym_LAW_TEXT,
    STATE(357), 1,
      sym_COMMENT,
    ACTIONS(745), 6,
      ts_builtin_sym_end,
      sym__newline,
      sym_BEGIN_CODE,
      sym_BEGIN_DIRECTIVE,
      sym_BEGIN_METADATA,
      sym_LAW_HEADING,
  [10512] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(852), 1,
      sym_COMMA,
    STATE(358), 2,
      sym_COMMENT,
      aux_sym_rule_parameters_repeat1,
    ACTIONS(850), 5,
      sym_FILLED,
      sym_STATE,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
  [10530] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      sym_DOT,
    STATE(359), 1,
      sym_COMMENT,
    ACTIONS(855), 6,
      sym_OF,
      sym_FILLED,
      sym_STATE,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
  [10548] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      sym_DOT,
    STATE(360), 1,
      sym_COMMENT,
    ACTIONS(859), 6,
      sym_OF,
      sym_FILLED,
      sym_STATE,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
  [10566] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(361), 1,
      sym_COMMENT,
    ACTIONS(850), 6,
      sym_FILLED,
      sym_STATE,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
      sym_COMMA,
  [10581] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      sym_UIDENT,
    STATE(169), 1,
      sym_qscope,
    STATE(176), 1,
      sym_scope_name,
    STATE(362), 1,
      sym_COMMENT,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(472), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
  [10606] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    ACTIONS(865), 1,
      sym_LPAREN,
    STATE(294), 1,
      sym_param_decl,
    STATE(300), 1,
      sym__params_decl,
    STATE(363), 1,
      sym_COMMENT,
    STATE(419), 1,
      aux_sym__params_decl_repeat1,
    STATE(604), 1,
      sym_variable,
  [10631] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      sym_ALT,
    STATE(423), 1,
      sym_enum_decl_item,
    STATE(364), 2,
      sym_COMMENT,
      aux_sym_enum_decl_repeat1,
    ACTIONS(867), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [10650] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    ACTIONS(872), 1,
      sym_LPAREN,
    STATE(311), 1,
      sym_param_decl,
    STATE(365), 1,
      sym_COMMENT,
    STATE(369), 1,
      sym__params_decl,
    STATE(389), 1,
      aux_sym__params_decl_repeat1,
    STATE(557), 1,
      sym_variable,
  [10675] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(366), 1,
      sym_COMMENT,
    ACTIONS(717), 6,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_END_CODE,
  [10690] = 8,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(874), 1,
      sym_UIDENT,
    STATE(119), 1,
      sym_scope_name,
    STATE(120), 1,
      sym_qscope,
    STATE(367), 1,
      sym_COMMENT,
    STATE(397), 1,
      aux_sym_path_repeat1,
    STATE(524), 1,
      sym_path,
    STATE(545), 1,
      sym_module_name,
  [10715] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(878), 1,
      sym_ALT,
    STATE(364), 1,
      aux_sym_enum_decl_repeat1,
    STATE(368), 1,
      sym_COMMENT,
    STATE(423), 1,
      sym_enum_decl_item,
    ACTIONS(876), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [10736] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(369), 1,
      sym_COMMENT,
    ACTIONS(709), 6,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_DEFINED_AS,
      sym_CONDITION,
      sym_END_CODE,
  [10751] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(878), 1,
      sym_ALT,
    STATE(368), 1,
      aux_sym_enum_decl_repeat1,
    STATE(370), 1,
      sym_COMMENT,
    STATE(423), 1,
      sym_enum_decl_item,
    ACTIONS(880), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [10772] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      sym_LIDENT,
    ACTIONS(884), 1,
      sym_UIDENT,
    STATE(144), 1,
      sym_field_name,
    STATE(145), 1,
      sym_qfield,
    STATE(371), 1,
      sym_COMMENT,
    STATE(603), 1,
      sym_enum_struct_name,
  [10794] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(886), 1,
      sym_OF,
    ACTIONS(888), 1,
      sym_FILLED,
    ACTIONS(890), 1,
      sym_STATE,
    ACTIONS(892), 1,
      sym_UNDER_CONDITION,
    ACTIONS(894), 1,
      sym_NOT,
    STATE(372), 1,
      sym_COMMENT,
  [10816] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(896), 1,
      sym_OF,
    ACTIONS(898), 1,
      sym_FILLED,
    ACTIONS(900), 1,
      sym_STATE,
    ACTIONS(902), 1,
      sym_UNDER_CONDITION,
    ACTIONS(904), 1,
      sym_NOT,
    STATE(373), 1,
      sym_COMMENT,
  [10838] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(906), 1,
      sym_OF,
    ACTIONS(908), 1,
      sym_FILLED,
    ACTIONS(910), 1,
      sym_STATE,
    ACTIONS(912), 1,
      sym_UNDER_CONDITION,
    ACTIONS(914), 1,
      sym_NOT,
    STATE(374), 1,
      sym_COMMENT,
  [10860] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_UIDENT,
    ACTIONS(916), 1,
      sym_LIDENT,
    STATE(178), 1,
      sym_field_name,
    STATE(211), 1,
      sym_qfield,
    STATE(375), 1,
      sym_COMMENT,
    STATE(617), 1,
      sym_enum_struct_name,
  [10882] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(918), 1,
      sym_OF,
    ACTIONS(920), 1,
      sym_FILLED,
    ACTIONS(922), 1,
      sym_STATE,
    ACTIONS(924), 1,
      sym_UNDER_CONDITION,
    ACTIONS(926), 1,
      sym_NOT,
    STATE(376), 1,
      sym_COMMENT,
  [10904] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(311), 1,
      sym_param_decl,
    STATE(377), 1,
      sym_COMMENT,
    STATE(389), 1,
      aux_sym__params_decl_repeat1,
    STATE(557), 1,
      sym_variable,
    STATE(592), 1,
      sym__params_decl,
  [10926] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(378), 1,
      sym_COMMENT,
    ACTIONS(928), 5,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_CONDITION,
      sym_END_CODE,
  [10940] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(932), 1,
      sym_CONTENT,
    STATE(379), 1,
      sym_COMMENT,
    ACTIONS(930), 4,
      sym_SCOPE,
      sym_DECLARATION,
      sym_ALT,
      sym_END_CODE,
  [10956] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(380), 1,
      sym_COMMENT,
    ACTIONS(934), 5,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_CONDITION,
      sym_END_CODE,
  [10970] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_COMMENT,
    ACTIONS(936), 5,
      sym_SCOPE,
      sym_DATA,
      sym_DECLARATION,
      sym_CONDITION,
      sym_END_CODE,
  [10984] = 7,
    ACTIONS(17), 1,
      sym_LIDENT,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(938), 1,
      sym_SCOPE,
    ACTIONS(940), 1,
      sym_ENUM,
    ACTIONS(942), 1,
      sym_STRUCT,
    STATE(382), 1,
      sym_COMMENT,
    STATE(569), 1,
      sym_variable,
  [11006] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(311), 1,
      sym_param_decl,
    STATE(383), 1,
      sym_COMMENT,
    STATE(389), 1,
      aux_sym__params_decl_repeat1,
    STATE(557), 1,
      sym_variable,
    STATE(609), 1,
      sym__params_decl,
  [11028] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(944), 1,
      sym_OF,
    ACTIONS(946), 1,
      sym_FILLED,
    ACTIONS(948), 1,
      sym_STATE,
    ACTIONS(950), 1,
      sym_UNDER_CONDITION,
    ACTIONS(952), 1,
      sym_NOT,
    STATE(384), 1,
      sym_COMMENT,
  [11050] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      sym_UIDENT,
    ACTIONS(954), 1,
      sym_WILDCARD,
    STATE(172), 1,
      sym_constructor_name,
    STATE(385), 1,
      sym_COMMENT,
    STATE(492), 1,
      sym_qconstructor,
    STATE(626), 1,
      sym_enum_struct_name,
  [11072] = 7,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_UIDENT,
    ACTIONS(916), 1,
      sym_LIDENT,
    STATE(178), 1,
      sym_field_name,
    STATE(386), 1,
      sym_COMMENT,
    STATE(548), 1,
      sym_qfield,
    STATE(617), 1,
      sym_enum_struct_name,
  [11094] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(956), 1,
      sym_UIDENT,
    STATE(116), 1,
      sym_constructor_name,
    STATE(142), 1,
      sym_qconstructor,
    STATE(387), 1,
      sym_COMMENT,
    STATE(601), 1,
      sym_enum_struct_name,
  [11113] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym_FILLED,
    ACTIONS(948), 1,
      sym_STATE,
    ACTIONS(950), 1,
      sym_UNDER_CONDITION,
    ACTIONS(952), 1,
      sym_NOT,
    STATE(388), 1,
      sym_COMMENT,
  [11132] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(331), 1,
      sym_param_decl,
    STATE(389), 1,
      sym_COMMENT,
    STATE(418), 1,
      aux_sym__params_decl_repeat1,
    STATE(557), 1,
      sym_variable,
  [11151] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      sym_AT_PAGE,
    ACTIONS(960), 1,
      sym_DIRECTIVE_ARG,
    ACTIONS(962), 1,
      sym_END_DIRECTIVE,
    STATE(390), 1,
      sym_COMMENT,
    STATE(411), 1,
      aux_sym_directive_repeat1,
  [11170] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(391), 1,
      sym_COMMENT,
    STATE(404), 1,
      sym_scope_var,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11189] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      sym_FILLED,
    ACTIONS(966), 1,
      sym_STATE,
    ACTIONS(968), 1,
      sym_UNDER_CONDITION,
    ACTIONS(970), 1,
      sym_NOT,
    STATE(392), 1,
      sym_COMMENT,
  [11208] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(972), 1,
      sym_ALT,
    ACTIONS(975), 1,
      sym_RBRACE,
    STATE(478), 1,
      sym_struct_content_field,
    STATE(393), 2,
      sym_COMMENT,
      aux_sym_e_scope_apply_repeat1,
  [11225] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    ACTIONS(884), 1,
      sym_UIDENT,
    STATE(198), 1,
      sym_variable,
    STATE(262), 1,
      sym_enum_struct_name,
    STATE(394), 1,
      sym_COMMENT,
  [11244] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(376), 1,
      sym_scope_var,
    STATE(395), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11263] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(396), 1,
      sym_COMMENT,
    ACTIONS(713), 4,
      sym_FILLED,
      sym_DEFINED_AS,
      sym_UNDER_CONDITION,
      sym_NOT,
  [11276] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(397), 1,
      sym_COMMENT,
    STATE(416), 1,
      aux_sym_path_repeat1,
    STATE(545), 1,
      sym_module_name,
    ACTIONS(977), 2,
      sym_UIDENT,
      sym_LIDENT,
  [11293] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(398), 1,
      sym_COMMENT,
    STATE(409), 1,
      sym_scope_var,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11312] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(373), 1,
      sym_scope_var,
    STATE(399), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11331] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      sym_LIDENT,
    ACTIONS(981), 1,
      sym_DEFINITION,
    ACTIONS(983), 1,
      sym_RULE,
    STATE(400), 1,
      sym_COMMENT,
    STATE(509), 1,
      sym_label,
  [11350] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym_FILLED,
    ACTIONS(910), 1,
      sym_STATE,
    ACTIONS(912), 1,
      sym_UNDER_CONDITION,
    ACTIONS(914), 1,
      sym_NOT,
    STATE(401), 1,
      sym_COMMENT,
  [11369] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(985), 1,
      sym_OF,
    ACTIONS(987), 1,
      sym_STATE,
    ACTIONS(989), 1,
      sym_DEFINED_AS,
    ACTIONS(991), 1,
      sym_UNDER_CONDITION,
    STATE(402), 1,
      sym_COMMENT,
  [11388] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(993), 1,
      sym_OF,
    ACTIONS(995), 1,
      sym_STATE,
    ACTIONS(997), 1,
      sym_DEFINED_AS,
    ACTIONS(999), 1,
      sym_UNDER_CONDITION,
    STATE(403), 1,
      sym_COMMENT,
  [11407] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_OF,
    ACTIONS(1003), 1,
      sym_STATE,
    ACTIONS(1005), 1,
      sym_DEFINED_AS,
    ACTIONS(1007), 1,
      sym_UNDER_CONDITION,
    STATE(404), 1,
      sym_COMMENT,
  [11426] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(405), 1,
      sym_COMMENT,
    STATE(422), 1,
      sym_scope_var,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11445] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(384), 1,
      sym_scope_var,
    STATE(406), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11464] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(372), 1,
      sym_scope_var,
    STATE(407), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11483] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      sym_LIDENT,
    ACTIONS(1009), 1,
      sym_DEFINITION,
    ACTIONS(1011), 1,
      sym_RULE,
    STATE(408), 1,
      sym_COMMENT,
    STATE(518), 1,
      sym_label,
  [11502] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      sym_OF,
    ACTIONS(1015), 1,
      sym_STATE,
    ACTIONS(1017), 1,
      sym_DEFINED_AS,
    ACTIONS(1019), 1,
      sym_UNDER_CONDITION,
    STATE(409), 1,
      sym_COMMENT,
  [11521] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(402), 1,
      sym_scope_var,
    STATE(410), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11540] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1021), 1,
      sym_AT_PAGE,
    ACTIONS(1023), 1,
      sym_DIRECTIVE_ARG,
    ACTIONS(1026), 1,
      sym_END_DIRECTIVE,
    STATE(411), 2,
      sym_COMMENT,
      aux_sym_directive_repeat1,
  [11557] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      sym_UIDENT,
    STATE(172), 1,
      sym_constructor_name,
    STATE(194), 1,
      sym_qconstructor,
    STATE(412), 1,
      sym_COMMENT,
    STATE(626), 1,
      sym_enum_struct_name,
  [11576] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_UIDENT,
    ACTIONS(1028), 1,
      sym_LIDENT,
    STATE(135), 1,
      sym_variable,
    STATE(262), 1,
      sym_enum_struct_name,
    STATE(413), 1,
      sym_COMMENT,
  [11595] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      sym_FILLED,
    ACTIONS(890), 1,
      sym_STATE,
    ACTIONS(892), 1,
      sym_UNDER_CONDITION,
    ACTIONS(894), 1,
      sym_NOT,
    STATE(414), 1,
      sym_COMMENT,
  [11614] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    ACTIONS(1032), 1,
      sym_RBRACE,
    STATE(393), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(415), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [11633] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1034), 1,
      sym_LIDENT,
    ACTIONS(1036), 1,
      sym_UIDENT,
    STATE(545), 1,
      sym_module_name,
    STATE(416), 2,
      sym_COMMENT,
      aux_sym_path_repeat1,
  [11650] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    ACTIONS(1039), 1,
      sym_RBRACE,
    STATE(393), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(417), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [11669] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      sym_LIDENT,
    STATE(557), 1,
      sym_variable,
    STATE(628), 1,
      sym_param_decl,
    STATE(418), 2,
      sym_COMMENT,
      aux_sym__params_decl_repeat1,
  [11686] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(272), 1,
      sym_param_decl,
    STATE(418), 1,
      aux_sym__params_decl_repeat1,
    STATE(419), 1,
      sym_COMMENT,
    STATE(604), 1,
      sym_variable,
  [11705] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      sym_FILLED,
    ACTIONS(1046), 1,
      sym_STATE,
    ACTIONS(1048), 1,
      sym_UNDER_CONDITION,
    ACTIONS(1050), 1,
      sym_NOT,
    STATE(420), 1,
      sym_COMMENT,
  [11724] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    ACTIONS(1052), 1,
      sym_RBRACE,
    STATE(415), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(421), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [11743] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      sym_OF,
    ACTIONS(1056), 1,
      sym_STATE,
    ACTIONS(1058), 1,
      sym_DEFINED_AS,
    ACTIONS(1060), 1,
      sym_UNDER_CONDITION,
    STATE(422), 1,
      sym_COMMENT,
  [11762] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(423), 1,
      sym_COMMENT,
    ACTIONS(1062), 4,
      sym_SCOPE,
      sym_DECLARATION,
      sym_ALT,
      sym_END_CODE,
  [11775] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    ACTIONS(1064), 1,
      sym_RBRACE,
    STATE(424), 1,
      sym_COMMENT,
    STATE(425), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(478), 1,
      sym_struct_content_field,
  [11794] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    ACTIONS(1066), 1,
      sym_RBRACE,
    STATE(393), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(425), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [11813] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(426), 1,
      sym_COMMENT,
    ACTIONS(1068), 4,
      sym_SCOPE,
      sym_DECLARATION,
      sym_ALT,
      sym_END_CODE,
  [11826] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(374), 1,
      sym_scope_var,
    STATE(427), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11845] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(359), 1,
      sym_variable,
    STATE(403), 1,
      sym_scope_var,
    STATE(428), 1,
      sym_COMMENT,
    STATE(431), 1,
      aux_sym_scope_var_repeat1,
  [11864] = 6,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    ACTIONS(1070), 1,
      sym_RBRACE,
    STATE(393), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(429), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [11883] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      sym_FILLED,
    ACTIONS(1048), 1,
      sym_UNDER_CONDITION,
    ACTIONS(1050), 1,
      sym_NOT,
    STATE(430), 1,
      sym_COMMENT,
  [11899] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(360), 1,
      sym_variable,
    STATE(431), 1,
      sym_COMMENT,
    STATE(436), 1,
      aux_sym_scope_var_repeat1,
  [11915] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    STATE(417), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(432), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [11931] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(401), 1,
      sym_rule_parameters,
    STATE(433), 1,
      sym_COMMENT,
  [11947] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(434), 1,
      sym_COMMENT,
    STATE(451), 1,
      sym_rule_parameters,
  [11963] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      sym_STATE,
    ACTIONS(997), 1,
      sym_DEFINED_AS,
    ACTIONS(999), 1,
      sym_UNDER_CONDITION,
    STATE(435), 1,
      sym_COMMENT,
  [11979] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1072), 1,
      sym_LIDENT,
    STATE(568), 1,
      sym_variable,
    STATE(436), 2,
      sym_COMMENT,
      aux_sym_scope_var_repeat1,
  [11993] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(437), 1,
      sym_COMMENT,
    STATE(445), 1,
      sym_rule_parameters,
  [12009] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1075), 1,
      sym_FILLED,
    ACTIONS(1077), 1,
      sym_UNDER_CONDITION,
    ACTIONS(1079), 1,
      sym_NOT,
    STATE(438), 1,
      sym_COMMENT,
  [12025] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(392), 1,
      sym_rule_parameters,
    STATE(439), 1,
      sym_COMMENT,
  [12041] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(440), 1,
      sym_COMMENT,
    ACTIONS(1081), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [12053] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym_FILLED,
    ACTIONS(912), 1,
      sym_UNDER_CONDITION,
    ACTIONS(914), 1,
      sym_NOT,
    STATE(441), 1,
      sym_COMMENT,
  [12069] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(414), 1,
      sym_rule_parameters,
    STATE(442), 1,
      sym_COMMENT,
  [12085] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1083), 1,
      sym_DEFINITION,
    ACTIONS(1085), 1,
      sym_EXCEPTION,
    ACTIONS(1087), 1,
      sym_RULE,
    STATE(443), 1,
      sym_COMMENT,
  [12101] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1091), 1,
      sym_END_DIRECTIVE,
    STATE(444), 1,
      sym_COMMENT,
    ACTIONS(1089), 2,
      sym_AT_PAGE,
      sym_DIRECTIVE_ARG,
  [12115] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1093), 1,
      sym_STATE,
    ACTIONS(1095), 1,
      sym_DEFINED_AS,
    ACTIONS(1097), 1,
      sym_UNDER_CONDITION,
    STATE(445), 1,
      sym_COMMENT,
  [12131] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(446), 1,
      sym_COMMENT,
    ACTIONS(1099), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [12143] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      sym_ALT,
    STATE(429), 1,
      aux_sym_e_scope_apply_repeat1,
    STATE(447), 1,
      sym_COMMENT,
    STATE(478), 1,
      sym_struct_content_field,
  [12159] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      sym_FILLED,
    ACTIONS(968), 1,
      sym_UNDER_CONDITION,
    ACTIONS(970), 1,
      sym_NOT,
    STATE(448), 1,
      sym_COMMENT,
  [12175] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(435), 1,
      sym_rule_parameters,
    STATE(449), 1,
      sym_COMMENT,
  [12191] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(450), 1,
      sym_COMMENT,
    STATE(456), 1,
      sym_rule_parameters,
  [12207] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      sym_STATE,
    ACTIONS(989), 1,
      sym_DEFINED_AS,
    ACTIONS(991), 1,
      sym_UNDER_CONDITION,
    STATE(451), 1,
      sym_COMMENT,
  [12223] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(420), 1,
      sym_rule_parameters,
    STATE(452), 1,
      sym_COMMENT,
  [12239] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(453), 1,
      sym_COMMENT,
    ACTIONS(1101), 3,
      sym_DEFINITION,
      sym_EXCEPTION,
      sym_RULE,
  [12251] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      sym_FILLED,
    ACTIONS(1105), 1,
      sym_UNDER_CONDITION,
    ACTIONS(1107), 1,
      sym_NOT,
    STATE(454), 1,
      sym_COMMENT,
  [12267] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(455), 1,
      sym_COMMENT,
    ACTIONS(1109), 3,
      sym_SCOPE,
      sym_DECLARATION,
      sym_END_CODE,
  [12279] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1111), 1,
      sym_STATE,
    ACTIONS(1113), 1,
      sym_DEFINED_AS,
    ACTIONS(1115), 1,
      sym_UNDER_CONDITION,
    STATE(456), 1,
      sym_COMMENT,
  [12295] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      sym_FILLED,
    ACTIONS(892), 1,
      sym_UNDER_CONDITION,
    ACTIONS(894), 1,
      sym_NOT,
    STATE(457), 1,
      sym_COMMENT,
  [12311] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1056), 1,
      sym_STATE,
    ACTIONS(1058), 1,
      sym_DEFINED_AS,
    ACTIONS(1060), 1,
      sym_UNDER_CONDITION,
    STATE(458), 1,
      sym_COMMENT,
  [12327] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(458), 1,
      sym_rule_parameters,
    STATE(459), 1,
      sym_COMMENT,
  [12343] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(353), 1,
      sym_variable,
    STATE(388), 1,
      sym_rule_parameters,
    STATE(460), 1,
      sym_COMMENT,
  [12359] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_DEPENDS,
    ACTIONS(1117), 1,
      sym_DEFINED_AS,
    STATE(461), 1,
      sym_COMMENT,
    STATE(573), 1,
      sym__depends_stance,
  [12375] = 5,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym_FILLED,
    ACTIONS(950), 1,
      sym_UNDER_CONDITION,
    ACTIONS(952), 1,
      sym_NOT,
    STATE(462), 1,
      sym_COMMENT,
  [12391] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1119), 1,
      sym_UIDENT,
    STATE(122), 1,
      sym_constructor_name,
    STATE(463), 1,
      sym_COMMENT,
  [12404] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(464), 1,
      sym_COMMENT,
    STATE(586), 1,
      sym_variable,
  [12417] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(465), 1,
      sym_COMMENT,
    ACTIONS(1121), 2,
      sym_MAXIMUM,
      sym_MINIMUM,
  [12428] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym_FILLED,
    ACTIONS(952), 1,
      sym_NOT,
    STATE(466), 1,
      sym_COMMENT,
  [12441] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1119), 1,
      sym_UIDENT,
    STATE(379), 1,
      sym_constructor_name,
    STATE(467), 1,
      sym_COMMENT,
  [12454] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(468), 1,
      sym_COMMENT,
    STATE(644), 1,
      sym_variable,
  [12467] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(469), 1,
      sym_COMMENT,
    STATE(637), 1,
      sym_variable,
  [12480] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(470), 1,
      sym_COMMENT,
    STATE(491), 1,
      sym_state_label,
  [12493] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(471), 1,
      sym_COMMENT,
    STATE(635), 1,
      sym_variable,
  [12506] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1125), 1,
      sym_UIDENT,
    STATE(174), 1,
      sym_scope_name,
    STATE(472), 1,
      sym_COMMENT,
  [12519] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1127), 1,
      sym_UIDENT,
    STATE(170), 1,
      sym_constructor_name,
    STATE(473), 1,
      sym_COMMENT,
  [12532] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(474), 1,
      sym_COMMENT,
    ACTIONS(1034), 2,
      sym_UIDENT,
      sym_LIDENT,
  [12543] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1129), 1,
      sym_FILLED,
    ACTIONS(1131), 1,
      sym_NOT,
    STATE(475), 1,
      sym_COMMENT,
  [12556] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1133), 1,
      sym_LIDENT,
    STATE(297), 1,
      sym_state_label,
    STATE(476), 1,
      sym_COMMENT,
  [12569] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(361), 1,
      sym_variable,
    STATE(477), 1,
      sym_COMMENT,
  [12582] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(478), 1,
      sym_COMMENT,
    ACTIONS(1135), 2,
      sym_ALT,
      sym_RBRACE,
  [12593] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      sym_DEFINED_AS,
    ACTIONS(991), 1,
      sym_UNDER_CONDITION,
    STATE(479), 1,
      sym_COMMENT,
  [12606] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1137), 1,
      sym_FILLED,
    ACTIONS(1139), 1,
      sym_NOT,
    STATE(480), 1,
      sym_COMMENT,
  [12619] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(481), 1,
      sym_COMMENT,
    STATE(508), 1,
      sym_variable,
  [12632] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(482), 1,
      sym_COMMENT,
    STATE(602), 1,
      sym_variable,
  [12645] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1125), 1,
      sym_UIDENT,
    STATE(483), 1,
      sym_COMMENT,
    STATE(513), 1,
      sym_scope_name,
  [12658] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      sym_FILLED,
    ACTIONS(970), 1,
      sym_NOT,
    STATE(484), 1,
      sym_COMMENT,
  [12671] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(916), 1,
      sym_LIDENT,
    STATE(485), 1,
      sym_COMMENT,
    STATE(563), 1,
      sym_field_name,
  [12684] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym_LBRACE,
    ACTIONS(1141), 1,
      sym_DOT,
    STATE(486), 1,
      sym_COMMENT,
  [12697] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(487), 1,
      sym_COMMENT,
    STATE(567), 1,
      sym_variable,
  [12710] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(479), 1,
      sym_state_label,
    STATE(488), 1,
      sym_COMMENT,
  [12723] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1143), 1,
      sym_FILLED,
    ACTIONS(1145), 1,
      sym_NOT,
    STATE(489), 1,
      sym_COMMENT,
  [12736] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(916), 1,
      sym_LIDENT,
    STATE(350), 1,
      sym_field_name,
    STATE(490), 1,
      sym_COMMENT,
  [12749] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      sym_DEFINED_AS,
    ACTIONS(999), 1,
      sym_UNDER_CONDITION,
    STATE(491), 1,
      sym_COMMENT,
  [12762] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1147), 1,
      sym_OF,
    ACTIONS(1149), 1,
      sym_COLON,
    STATE(492), 1,
      sym_COMMENT,
  [12775] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1151), 1,
      sym_LIDENT,
    ACTIONS(1153), 1,
      sym_OUTPUT,
    STATE(493), 1,
      sym_COMMENT,
  [12788] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      sym_DEFINED_AS,
    ACTIONS(1157), 1,
      sym_UNDER_CONDITION,
    STATE(494), 1,
      sym_COMMENT,
  [12801] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(495), 1,
      sym_COMMENT,
    STATE(530), 1,
      sym_state_label,
  [12814] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(496), 1,
      sym_COMMENT,
    STATE(532), 1,
      sym_state_label,
  [12827] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      sym_FILLED,
    ACTIONS(1050), 1,
      sym_NOT,
    STATE(497), 1,
      sym_COMMENT,
  [12840] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(448), 1,
      sym_state_label,
    STATE(498), 1,
      sym_COMMENT,
  [12853] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(454), 1,
      sym_state_label,
    STATE(499), 1,
      sym_COMMENT,
  [12866] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1159), 1,
      sym_UIDENT,
    STATE(284), 1,
      sym_enum_struct_name,
    STATE(500), 1,
      sym_COMMENT,
  [12879] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(501), 1,
      sym_COMMENT,
    STATE(625), 1,
      sym_variable,
  [12892] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(502), 1,
      sym_COMMENT,
    STATE(645), 1,
      sym_variable,
  [12905] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(438), 1,
      sym_state_label,
    STATE(503), 1,
      sym_COMMENT,
  [12918] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(441), 1,
      sym_state_label,
    STATE(504), 1,
      sym_COMMENT,
  [12931] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(457), 1,
      sym_state_label,
    STATE(505), 1,
      sym_COMMENT,
  [12944] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      sym_UIDENT,
    STATE(339), 1,
      sym_scope_name,
    STATE(506), 1,
      sym_COMMENT,
  [12957] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(494), 1,
      sym_state_label,
    STATE(507), 1,
      sym_COMMENT,
  [12970] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_CONDITION,
    ACTIONS(1165), 1,
      sym_CONTENT,
    STATE(508), 1,
      sym_COMMENT,
  [12983] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1083), 1,
      sym_DEFINITION,
    ACTIONS(1087), 1,
      sym_RULE,
    STATE(509), 1,
      sym_COMMENT,
  [12996] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(462), 1,
      sym_state_label,
    STATE(510), 1,
      sym_COMMENT,
  [13009] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      sym_UIDENT,
    STATE(281), 1,
      sym_enum_struct_name,
    STATE(511), 1,
      sym_COMMENT,
  [13022] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1113), 1,
      sym_DEFINED_AS,
    ACTIONS(1115), 1,
      sym_UNDER_CONDITION,
    STATE(512), 1,
      sym_COMMENT,
  [13035] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1169), 1,
      sym_UNDER_CONDITION,
    ACTIONS(1171), 1,
      sym_COLON,
    STATE(513), 1,
      sym_COMMENT,
  [13048] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1125), 1,
      sym_UIDENT,
    STATE(514), 1,
      sym_COMMENT,
    STATE(561), 1,
      sym_scope_name,
  [13061] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_UIDENT,
    STATE(262), 1,
      sym_enum_struct_name,
    STATE(515), 1,
      sym_COMMENT,
  [13074] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(516), 1,
      sym_COMMENT,
    STATE(523), 1,
      sym_state_label,
  [13087] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_UIDENT,
    STATE(517), 1,
      sym_COMMENT,
    STATE(559), 1,
      sym_enum_struct_name,
  [13100] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1173), 1,
      sym_DEFINITION,
    ACTIONS(1175), 1,
      sym_RULE,
    STATE(518), 1,
      sym_COMMENT,
  [13113] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_UIDENT,
    STATE(519), 1,
      sym_COMMENT,
    STATE(538), 1,
      sym_enum_struct_name,
  [13126] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym_FILLED,
    ACTIONS(914), 1,
      sym_NOT,
    STATE(520), 1,
      sym_COMMENT,
  [13139] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(960), 1,
      sym_DIRECTIVE_ARG,
    STATE(390), 1,
      aux_sym_directive_repeat1,
    STATE(521), 1,
      sym_COMMENT,
  [13152] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(522), 1,
      sym_COMMENT,
    ACTIONS(1177), 2,
      sym_MAXIMUM,
      sym_MINIMUM,
  [13163] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1058), 1,
      sym_DEFINED_AS,
    ACTIONS(1060), 1,
      sym_UNDER_CONDITION,
    STATE(523), 1,
      sym_COMMENT,
  [13176] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      sym_UIDENT,
    STATE(123), 1,
      sym_scope_name,
    STATE(524), 1,
      sym_COMMENT,
  [13189] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1075), 1,
      sym_FILLED,
    ACTIONS(1079), 1,
      sym_NOT,
    STATE(525), 1,
      sym_COMMENT,
  [13202] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1181), 1,
      sym_LIDENT,
    STATE(443), 1,
      sym_label,
    STATE(526), 1,
      sym_COMMENT,
  [13215] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(527), 1,
      sym_COMMENT,
    STATE(585), 1,
      sym_variable,
  [13228] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(430), 1,
      sym_state_label,
    STATE(528), 1,
      sym_COMMENT,
  [13241] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      sym_LIDENT,
    STATE(156), 1,
      sym_field_name,
    STATE(529), 1,
      sym_COMMENT,
  [13254] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1095), 1,
      sym_DEFINED_AS,
    ACTIONS(1097), 1,
      sym_UNDER_CONDITION,
    STATE(530), 1,
      sym_COMMENT,
  [13267] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      sym_FILLED,
    ACTIONS(1107), 1,
      sym_NOT,
    STATE(531), 1,
      sym_COMMENT,
  [13280] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1183), 1,
      sym_DEFINED_AS,
    ACTIONS(1185), 1,
      sym_UNDER_CONDITION,
    STATE(532), 1,
      sym_COMMENT,
  [13293] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(916), 1,
      sym_LIDENT,
    STATE(188), 1,
      sym_field_name,
    STATE(533), 1,
      sym_COMMENT,
  [13306] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1028), 1,
      sym_LIDENT,
    STATE(154), 1,
      sym_variable,
    STATE(534), 1,
      sym_COMMENT,
  [13319] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      sym_LIDENT,
    STATE(512), 1,
      sym_state_label,
    STATE(535), 1,
      sym_COMMENT,
  [13332] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_LIDENT,
    STATE(208), 1,
      sym_variable,
    STATE(536), 1,
      sym_COMMENT,
  [13345] = 4,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym_LBRACE,
    ACTIONS(1187), 1,
      sym_DOT,
    STATE(537), 1,
      sym_COMMENT,
  [13358] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1189), 1,
      sym_COLON,
    STATE(538), 1,
      sym_COMMENT,
  [13368] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1191), 1,
      sym_CONSEQUENCE,
    STATE(539), 1,
      sym_COMMENT,
  [13378] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1193), 1,
      sym_COLON,
    STATE(540), 1,
      sym_COMMENT,
  [13388] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym_DOT,
    STATE(541), 1,
      sym_COMMENT,
  [13398] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      sym_FILLED,
    STATE(542), 1,
      sym_COMMENT,
  [13408] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1195), 1,
      sym_LBRACE,
    STATE(543), 1,
      sym_COMMENT,
  [13418] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_COMMA,
    STATE(544), 1,
      sym_COMMENT,
  [13428] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1197), 1,
      sym_DOT,
    STATE(545), 1,
      sym_COMMENT,
  [13438] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1199), 1,
      sym_CONSEQUENCE,
    STATE(546), 1,
      sym_COMMENT,
  [13448] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1201), 1,
      sym_OF,
    STATE(547), 1,
      sym_COMMENT,
  [13458] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1203), 1,
      sym_COLON,
    STATE(548), 1,
      sym_COMMENT,
  [13468] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1205), 1,
      sym_OF,
    STATE(549), 1,
      sym_COMMENT,
  [13478] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1207), 1,
      sym_THAT,
    STATE(550), 1,
      sym_COMMENT,
  [13488] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1209), 1,
      sym_LBRACE,
    STATE(551), 1,
      sym_COMMENT,
  [13498] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1211), 1,
      sym_ALL,
    STATE(552), 1,
      sym_COMMENT,
  [13508] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1058), 1,
      sym_DEFINED_AS,
    STATE(553), 1,
      sym_COMMENT,
  [13518] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1183), 1,
      sym_DEFINED_AS,
    STATE(554), 1,
      sym_COMMENT,
  [13528] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1213), 1,
      sym_CONSEQUENCE,
    STATE(555), 1,
      sym_COMMENT,
  [13538] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      sym_CONSEQUENCE,
    STATE(556), 1,
      sym_COMMENT,
  [13548] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1217), 1,
      sym_CONTENT,
    STATE(557), 1,
      sym_COMMENT,
  [13558] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1219), 1,
      sym_COLLECTION,
    STATE(558), 1,
      sym_COMMENT,
  [13568] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1221), 1,
      sym_COLON,
    STATE(559), 1,
      sym_COMMENT,
  [13578] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1095), 1,
      sym_DEFINED_AS,
    STATE(560), 1,
      sym_COMMENT,
  [13588] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1223), 1,
      sym_COLON,
    STATE(561), 1,
      sym_COMMENT,
  [13598] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1225), 1,
      sym_CONSEQUENCE,
    STATE(562), 1,
      sym_COMMENT,
  [13608] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1227), 1,
      sym_CONTENT,
    STATE(563), 1,
      sym_COMMENT,
  [13618] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1229), 1,
      aux_sym_COMMENT_token1,
    STATE(564), 1,
      sym_COMMENT,
  [13628] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1231), 1,
      sym_THEN,
    STATE(565), 1,
      sym_COMMENT,
  [13638] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1233), 1,
      sym_CONSEQUENCE,
    STATE(566), 1,
      sym_COMMENT,
  [13648] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1235), 1,
      sym_COLON,
    STATE(567), 1,
      sym_COMMENT,
  [13658] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      sym_DOT,
    STATE(568), 1,
      sym_COMMENT,
  [13668] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1237), 1,
      sym_CONTENT,
    STATE(569), 1,
      sym_COMMENT,
  [13678] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1239), 1,
      sym_OR,
    STATE(570), 1,
      sym_COMMENT,
  [13688] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym_FILLED,
    STATE(571), 1,
      sym_COMMENT,
  [13698] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1241), 1,
      sym_CONSEQUENCE,
    STATE(572), 1,
      sym_COMMENT,
  [13708] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1243), 1,
      sym_DEFINED_AS,
    STATE(573), 1,
      sym_COMMENT,
  [13718] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1245), 1,
      sym_END_DIRECTIVE,
    STATE(574), 1,
      sym_COMMENT,
  [13728] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      sym_FILLED,
    STATE(575), 1,
      sym_COMMENT,
  [13738] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      sym_DEFINED_AS,
    STATE(576), 1,
      sym_COMMENT,
  [13748] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1247), 1,
      sym_LAW_LABEL,
    STATE(577), 1,
      sym_COMMENT,
  [13758] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1249), 1,
      sym_COLON,
    STATE(578), 1,
      sym_COMMENT,
  [13768] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1251), 1,
      sym_LIDENT,
    STATE(579), 1,
      sym_COMMENT,
  [13778] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(920), 1,
      sym_FILLED,
    STATE(580), 1,
      sym_COMMENT,
  [13788] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1113), 1,
      sym_DEFINED_AS,
    STATE(581), 1,
      sym_COMMENT,
  [13798] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1253), 1,
      sym_OF,
    STATE(582), 1,
      sym_COMMENT,
  [13808] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1255), 1,
      sym_CONSEQUENCE,
    STATE(583), 1,
      sym_COMMENT,
  [13818] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      sym_CONSEQUENCE,
    STATE(584), 1,
      sym_COMMENT,
  [13828] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1259), 1,
      sym_DEFINED_AS,
    STATE(585), 1,
      sym_COMMENT,
  [13838] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1261), 1,
      sym_AMONG,
    STATE(586), 1,
      sym_COMMENT,
  [13848] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym_FILLED,
    STATE(587), 1,
      sym_COMMENT,
  [13858] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1263), 1,
      sym_CONSEQUENCE,
    STATE(588), 1,
      sym_COMMENT,
  [13868] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      sym_FILLED,
    STATE(589), 1,
      sym_COMMENT,
  [13878] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1075), 1,
      sym_FILLED,
    STATE(590), 1,
      sym_COMMENT,
  [13888] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1265), 1,
      sym_OF,
    STATE(591), 1,
      sym_COMMENT,
  [13898] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1267), 1,
      sym_RPAREN,
    STATE(592), 1,
      sym_COMMENT,
  [13908] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1269), 1,
      sym_CONSEQUENCE,
    STATE(593), 1,
      sym_COMMENT,
  [13918] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1271), 1,
      sym_CONSEQUENCE,
    STATE(594), 1,
      sym_COMMENT,
  [13928] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      sym_FILLED,
    STATE(595), 1,
      sym_COMMENT,
  [13938] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1273), 1,
      sym_LIDENT,
    STATE(596), 1,
      sym_COMMENT,
  [13948] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1275), 1,
      sym_FILLED,
    STATE(597), 1,
      sym_COMMENT,
  [13958] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1277), 1,
      sym_CONSEQUENCE,
    STATE(598), 1,
      sym_COMMENT,
  [13968] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1149), 1,
      sym_COLON,
    STATE(599), 1,
      sym_COMMENT,
  [13978] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1279), 1,
      sym_THAT,
    STATE(600), 1,
      sym_COMMENT,
  [13988] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1141), 1,
      sym_DOT,
    STATE(601), 1,
      sym_COMMENT,
  [13998] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1281), 1,
      sym_AMONG,
    STATE(602), 1,
      sym_COMMENT,
  [14008] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1283), 1,
      sym_DOT,
    STATE(603), 1,
      sym_COMMENT,
  [14018] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1285), 1,
      sym_CONTENT,
    STATE(604), 1,
      sym_COMMENT,
  [14028] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1287), 1,
      sym_EMPTY,
    STATE(605), 1,
      sym_COMMENT,
  [14038] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1289), 1,
      sym_CONSEQUENCE,
    STATE(606), 1,
      sym_COMMENT,
  [14048] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      sym_DEFINED_AS,
    STATE(607), 1,
      sym_COMMENT,
  [14058] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1291), 1,
      sym_THAT,
    STATE(608), 1,
      sym_COMMENT,
  [14068] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1293), 1,
      sym_RPAREN,
    STATE(609), 1,
      sym_COMMENT,
  [14078] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1295), 1,
      sym_LIDENT,
    STATE(610), 1,
      sym_COMMENT,
  [14088] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1297), 1,
      sym_THAT,
    STATE(611), 1,
      sym_COMMENT,
  [14098] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1299), 1,
      sym_LIDENT,
    STATE(612), 1,
      sym_COMMENT,
  [14108] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1301), 1,
      sym_SCOPE,
    STATE(613), 1,
      sym_COMMENT,
  [14118] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1303), 1,
      sym_THAT,
    STATE(614), 1,
      sym_COMMENT,
  [14128] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1305), 1,
      sym_THEN,
    STATE(615), 1,
      sym_COMMENT,
  [14138] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1307), 1,
      sym_THEN,
    STATE(616), 1,
      sym_COMMENT,
  [14148] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1309), 1,
      sym_DOT,
    STATE(617), 1,
      sym_COMMENT,
  [14158] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1311), 1,
      sym_OF,
    STATE(618), 1,
      sym_COMMENT,
  [14168] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1313), 1,
      sym_DEFINED_AS,
    STATE(619), 1,
      sym_COMMENT,
  [14178] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1143), 1,
      sym_FILLED,
    STATE(620), 1,
      sym_COMMENT,
  [14188] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1315), 1,
      sym_THAT,
    STATE(621), 1,
      sym_COMMENT,
  [14198] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1317), 1,
      sym_IF,
    STATE(622), 1,
      sym_COMMENT,
  [14208] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1137), 1,
      sym_FILLED,
    STATE(623), 1,
      sym_COMMENT,
  [14218] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1319), 1,
      sym_OF,
    STATE(624), 1,
      sym_COMMENT,
  [14228] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1321), 1,
      sym_AMONG,
    STATE(625), 1,
      sym_COMMENT,
  [14238] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1187), 1,
      sym_DOT,
    STATE(626), 1,
      sym_COMMENT,
  [14248] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      sym_CONSEQUENCE,
    STATE(627), 1,
      sym_COMMENT,
  [14258] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      sym_COMMA,
    STATE(628), 1,
      sym_COMMENT,
  [14268] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1325), 1,
      sym_CONSEQUENCE,
    STATE(629), 1,
      sym_COMMENT,
  [14278] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1327), 1,
      sym_LBRACE,
    STATE(630), 1,
      sym_COMMENT,
  [14288] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1329), 1,
      sym_EMPTY,
    STATE(631), 1,
      sym_COMMENT,
  [14298] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1331), 1,
      sym_EMPTY,
    STATE(632), 1,
      sym_COMMENT,
  [14308] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1333), 1,
      sym_LBRACE,
    STATE(633), 1,
      sym_COMMENT,
  [14318] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1335), 1,
      sym_DEFINED_AS,
    STATE(634), 1,
      sym_COMMENT,
  [14328] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1337), 1,
      sym_DEFINED_AS,
    STATE(635), 1,
      sym_COMMENT,
  [14338] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1339), 1,
      ts_builtin_sym_end,
    STATE(636), 1,
      sym_COMMENT,
  [14348] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1341), 1,
      sym_AMONG,
    STATE(637), 1,
      sym_COMMENT,
  [14358] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1343), 1,
      sym__newline,
    STATE(638), 1,
      sym_COMMENT,
  [14368] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1345), 1,
      sym_THEN,
    STATE(639), 1,
      sym_COMMENT,
  [14378] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1347), 1,
      sym_COLLECTION,
    STATE(640), 1,
      sym_COMMENT,
  [14388] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1349), 1,
      sym_LAW_INCLUDE,
    STATE(641), 1,
      sym_COMMENT,
  [14398] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1129), 1,
      sym_FILLED,
    STATE(642), 1,
      sym_COMMENT,
  [14408] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1351), 1,
      sym_CONSEQUENCE,
    STATE(643), 1,
      sym_COMMENT,
  [14418] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1353), 1,
      sym_AMONG,
    STATE(644), 1,
      sym_COMMENT,
  [14428] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1355), 1,
      sym_AMONG,
    STATE(645), 1,
      sym_COMMENT,
  [14438] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1357), 1,
      sym_IF,
    STATE(646), 1,
      sym_COMMENT,
  [14448] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1359), 1,
      sym_ALL,
    STATE(647), 1,
      sym_COMMENT,
  [14458] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1361), 1,
      sym_CONSEQUENCE,
    STATE(648), 1,
      sym_COMMENT,
  [14468] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1363), 1,
      sym_DEFINED_AS,
    STATE(649), 1,
      sym_COMMENT,
  [14478] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1365), 1,
      sym_OR,
    STATE(650), 1,
      sym_COMMENT,
  [14488] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1367), 1,
      sym_CONSEQUENCE,
    STATE(651), 1,
      sym_COMMENT,
  [14498] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(1369), 1,
      sym_EMPTY,
    STATE(652), 1,
      sym_COMMENT,
  [14508] = 1,
    ACTIONS(1371), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(106)] = 0,
  [SMALL_STATE(107)] = 58,
  [SMALL_STATE(108)] = 119,
  [SMALL_STATE(109)] = 178,
  [SMALL_STATE(110)] = 238,
  [SMALL_STATE(111)] = 296,
  [SMALL_STATE(112)] = 350,
  [SMALL_STATE(113)] = 408,
  [SMALL_STATE(114)] = 461,
  [SMALL_STATE(115)] = 514,
  [SMALL_STATE(116)] = 569,
  [SMALL_STATE(117)] = 622,
  [SMALL_STATE(118)] = 677,
  [SMALL_STATE(119)] = 732,
  [SMALL_STATE(120)] = 785,
  [SMALL_STATE(121)] = 840,
  [SMALL_STATE(122)] = 893,
  [SMALL_STATE(123)] = 946,
  [SMALL_STATE(124)] = 999,
  [SMALL_STATE(125)] = 1051,
  [SMALL_STATE(126)] = 1103,
  [SMALL_STATE(127)] = 1177,
  [SMALL_STATE(128)] = 1229,
  [SMALL_STATE(129)] = 1291,
  [SMALL_STATE(130)] = 1343,
  [SMALL_STATE(131)] = 1417,
  [SMALL_STATE(132)] = 1471,
  [SMALL_STATE(133)] = 1523,
  [SMALL_STATE(134)] = 1575,
  [SMALL_STATE(135)] = 1627,
  [SMALL_STATE(136)] = 1679,
  [SMALL_STATE(137)] = 1731,
  [SMALL_STATE(138)] = 1783,
  [SMALL_STATE(139)] = 1857,
  [SMALL_STATE(140)] = 1911,
  [SMALL_STATE(141)] = 1973,
  [SMALL_STATE(142)] = 2027,
  [SMALL_STATE(143)] = 2081,
  [SMALL_STATE(144)] = 2133,
  [SMALL_STATE(145)] = 2185,
  [SMALL_STATE(146)] = 2237,
  [SMALL_STATE(147)] = 2293,
  [SMALL_STATE(148)] = 2357,
  [SMALL_STATE(149)] = 2419,
  [SMALL_STATE(150)] = 2487,
  [SMALL_STATE(151)] = 2561,
  [SMALL_STATE(152)] = 2623,
  [SMALL_STATE(153)] = 2675,
  [SMALL_STATE(154)] = 2729,
  [SMALL_STATE(155)] = 2781,
  [SMALL_STATE(156)] = 2845,
  [SMALL_STATE(157)] = 2897,
  [SMALL_STATE(158)] = 2971,
  [SMALL_STATE(159)] = 3045,
  [SMALL_STATE(160)] = 3097,
  [SMALL_STATE(161)] = 3173,
  [SMALL_STATE(162)] = 3247,
  [SMALL_STATE(163)] = 3321,
  [SMALL_STATE(164)] = 3373,
  [SMALL_STATE(165)] = 3425,
  [SMALL_STATE(166)] = 3477,
  [SMALL_STATE(167)] = 3551,
  [SMALL_STATE(168)] = 3613,
  [SMALL_STATE(169)] = 3687,
  [SMALL_STATE(170)] = 3740,
  [SMALL_STATE(171)] = 3791,
  [SMALL_STATE(172)] = 3844,
  [SMALL_STATE(173)] = 3895,
  [SMALL_STATE(174)] = 3948,
  [SMALL_STATE(175)] = 3999,
  [SMALL_STATE(176)] = 4052,
  [SMALL_STATE(177)] = 4103,
  [SMALL_STATE(178)] = 4154,
  [SMALL_STATE(179)] = 4204,
  [SMALL_STATE(180)] = 4276,
  [SMALL_STATE(181)] = 4326,
  [SMALL_STATE(182)] = 4376,
  [SMALL_STATE(183)] = 4426,
  [SMALL_STATE(184)] = 4478,
  [SMALL_STATE(185)] = 4528,
  [SMALL_STATE(186)] = 4600,
  [SMALL_STATE(187)] = 4650,
  [SMALL_STATE(188)] = 4700,
  [SMALL_STATE(189)] = 4750,
  [SMALL_STATE(190)] = 4810,
  [SMALL_STATE(191)] = 4862,
  [SMALL_STATE(192)] = 4922,
  [SMALL_STATE(193)] = 4974,
  [SMALL_STATE(194)] = 5046,
  [SMALL_STATE(195)] = 5098,
  [SMALL_STATE(196)] = 5150,
  [SMALL_STATE(197)] = 5222,
  [SMALL_STATE(198)] = 5272,
  [SMALL_STATE(199)] = 5322,
  [SMALL_STATE(200)] = 5384,
  [SMALL_STATE(201)] = 5444,
  [SMALL_STATE(202)] = 5510,
  [SMALL_STATE(203)] = 5582,
  [SMALL_STATE(204)] = 5632,
  [SMALL_STATE(205)] = 5682,
  [SMALL_STATE(206)] = 5732,
  [SMALL_STATE(207)] = 5792,
  [SMALL_STATE(208)] = 5842,
  [SMALL_STATE(209)] = 5892,
  [SMALL_STATE(210)] = 5954,
  [SMALL_STATE(211)] = 6026,
  [SMALL_STATE(212)] = 6076,
  [SMALL_STATE(213)] = 6136,
  [SMALL_STATE(214)] = 6208,
  [SMALL_STATE(215)] = 6258,
  [SMALL_STATE(216)] = 6332,
  [SMALL_STATE(217)] = 6404,
  [SMALL_STATE(218)] = 6445,
  [SMALL_STATE(219)] = 6486,
  [SMALL_STATE(220)] = 6548,
  [SMALL_STATE(221)] = 6604,
  [SMALL_STATE(222)] = 6658,
  [SMALL_STATE(223)] = 6714,
  [SMALL_STATE(224)] = 6770,
  [SMALL_STATE(225)] = 6826,
  [SMALL_STATE(226)] = 6879,
  [SMALL_STATE(227)] = 6932,
  [SMALL_STATE(228)] = 6985,
  [SMALL_STATE(229)] = 7038,
  [SMALL_STATE(230)] = 7091,
  [SMALL_STATE(231)] = 7144,
  [SMALL_STATE(232)] = 7197,
  [SMALL_STATE(233)] = 7250,
  [SMALL_STATE(234)] = 7303,
  [SMALL_STATE(235)] = 7356,
  [SMALL_STATE(236)] = 7409,
  [SMALL_STATE(237)] = 7462,
  [SMALL_STATE(238)] = 7515,
  [SMALL_STATE(239)] = 7568,
  [SMALL_STATE(240)] = 7621,
  [SMALL_STATE(241)] = 7674,
  [SMALL_STATE(242)] = 7724,
  [SMALL_STATE(243)] = 7774,
  [SMALL_STATE(244)] = 7824,
  [SMALL_STATE(245)] = 7870,
  [SMALL_STATE(246)] = 7916,
  [SMALL_STATE(247)] = 7962,
  [SMALL_STATE(248)] = 8008,
  [SMALL_STATE(249)] = 8054,
  [SMALL_STATE(250)] = 8100,
  [SMALL_STATE(251)] = 8143,
  [SMALL_STATE(252)] = 8186,
  [SMALL_STATE(253)] = 8229,
  [SMALL_STATE(254)] = 8266,
  [SMALL_STATE(255)] = 8289,
  [SMALL_STATE(256)] = 8326,
  [SMALL_STATE(257)] = 8364,
  [SMALL_STATE(258)] = 8400,
  [SMALL_STATE(259)] = 8435,
  [SMALL_STATE(260)] = 8458,
  [SMALL_STATE(261)] = 8493,
  [SMALL_STATE(262)] = 8528,
  [SMALL_STATE(263)] = 8549,
  [SMALL_STATE(264)] = 8586,
  [SMALL_STATE(265)] = 8617,
  [SMALL_STATE(266)] = 8648,
  [SMALL_STATE(267)] = 8681,
  [SMALL_STATE(268)] = 8705,
  [SMALL_STATE(269)] = 8725,
  [SMALL_STATE(270)] = 8745,
  [SMALL_STATE(271)] = 8769,
  [SMALL_STATE(272)] = 8790,
  [SMALL_STATE(273)] = 8813,
  [SMALL_STATE(274)] = 8834,
  [SMALL_STATE(275)] = 8853,
  [SMALL_STATE(276)] = 8874,
  [SMALL_STATE(277)] = 8899,
  [SMALL_STATE(278)] = 8918,
  [SMALL_STATE(279)] = 8939,
  [SMALL_STATE(280)] = 8962,
  [SMALL_STATE(281)] = 8983,
  [SMALL_STATE(282)] = 9004,
  [SMALL_STATE(283)] = 9029,
  [SMALL_STATE(284)] = 9050,
  [SMALL_STATE(285)] = 9071,
  [SMALL_STATE(286)] = 9096,
  [SMALL_STATE(287)] = 9121,
  [SMALL_STATE(288)] = 9142,
  [SMALL_STATE(289)] = 9163,
  [SMALL_STATE(290)] = 9184,
  [SMALL_STATE(291)] = 9205,
  [SMALL_STATE(292)] = 9226,
  [SMALL_STATE(293)] = 9251,
  [SMALL_STATE(294)] = 9272,
  [SMALL_STATE(295)] = 9295,
  [SMALL_STATE(296)] = 9321,
  [SMALL_STATE(297)] = 9347,
  [SMALL_STATE(298)] = 9367,
  [SMALL_STATE(299)] = 9397,
  [SMALL_STATE(300)] = 9421,
  [SMALL_STATE(301)] = 9441,
  [SMALL_STATE(302)] = 9461,
  [SMALL_STATE(303)] = 9491,
  [SMALL_STATE(304)] = 9521,
  [SMALL_STATE(305)] = 9541,
  [SMALL_STATE(306)] = 9559,
  [SMALL_STATE(307)] = 9576,
  [SMALL_STATE(308)] = 9593,
  [SMALL_STATE(309)] = 9610,
  [SMALL_STATE(310)] = 9627,
  [SMALL_STATE(311)] = 9644,
  [SMALL_STATE(312)] = 9663,
  [SMALL_STATE(313)] = 9680,
  [SMALL_STATE(314)] = 9697,
  [SMALL_STATE(315)] = 9714,
  [SMALL_STATE(316)] = 9731,
  [SMALL_STATE(317)] = 9748,
  [SMALL_STATE(318)] = 9767,
  [SMALL_STATE(319)] = 9786,
  [SMALL_STATE(320)] = 9803,
  [SMALL_STATE(321)] = 9820,
  [SMALL_STATE(322)] = 9837,
  [SMALL_STATE(323)] = 9854,
  [SMALL_STATE(324)] = 9871,
  [SMALL_STATE(325)] = 9892,
  [SMALL_STATE(326)] = 9909,
  [SMALL_STATE(327)] = 9926,
  [SMALL_STATE(328)] = 9943,
  [SMALL_STATE(329)] = 9960,
  [SMALL_STATE(330)] = 9977,
  [SMALL_STATE(331)] = 9994,
  [SMALL_STATE(332)] = 10013,
  [SMALL_STATE(333)] = 10030,
  [SMALL_STATE(334)] = 10047,
  [SMALL_STATE(335)] = 10064,
  [SMALL_STATE(336)] = 10081,
  [SMALL_STATE(337)] = 10100,
  [SMALL_STATE(338)] = 10117,
  [SMALL_STATE(339)] = 10134,
  [SMALL_STATE(340)] = 10153,
  [SMALL_STATE(341)] = 10170,
  [SMALL_STATE(342)] = 10187,
  [SMALL_STATE(343)] = 10208,
  [SMALL_STATE(344)] = 10232,
  [SMALL_STATE(345)] = 10250,
  [SMALL_STATE(346)] = 10274,
  [SMALL_STATE(347)] = 10292,
  [SMALL_STATE(348)] = 10320,
  [SMALL_STATE(349)] = 10342,
  [SMALL_STATE(350)] = 10360,
  [SMALL_STATE(351)] = 10380,
  [SMALL_STATE(352)] = 10400,
  [SMALL_STATE(353)] = 10418,
  [SMALL_STATE(354)] = 10438,
  [SMALL_STATE(355)] = 10456,
  [SMALL_STATE(356)] = 10476,
  [SMALL_STATE(357)] = 10494,
  [SMALL_STATE(358)] = 10512,
  [SMALL_STATE(359)] = 10530,
  [SMALL_STATE(360)] = 10548,
  [SMALL_STATE(361)] = 10566,
  [SMALL_STATE(362)] = 10581,
  [SMALL_STATE(363)] = 10606,
  [SMALL_STATE(364)] = 10631,
  [SMALL_STATE(365)] = 10650,
  [SMALL_STATE(366)] = 10675,
  [SMALL_STATE(367)] = 10690,
  [SMALL_STATE(368)] = 10715,
  [SMALL_STATE(369)] = 10736,
  [SMALL_STATE(370)] = 10751,
  [SMALL_STATE(371)] = 10772,
  [SMALL_STATE(372)] = 10794,
  [SMALL_STATE(373)] = 10816,
  [SMALL_STATE(374)] = 10838,
  [SMALL_STATE(375)] = 10860,
  [SMALL_STATE(376)] = 10882,
  [SMALL_STATE(377)] = 10904,
  [SMALL_STATE(378)] = 10926,
  [SMALL_STATE(379)] = 10940,
  [SMALL_STATE(380)] = 10956,
  [SMALL_STATE(381)] = 10970,
  [SMALL_STATE(382)] = 10984,
  [SMALL_STATE(383)] = 11006,
  [SMALL_STATE(384)] = 11028,
  [SMALL_STATE(385)] = 11050,
  [SMALL_STATE(386)] = 11072,
  [SMALL_STATE(387)] = 11094,
  [SMALL_STATE(388)] = 11113,
  [SMALL_STATE(389)] = 11132,
  [SMALL_STATE(390)] = 11151,
  [SMALL_STATE(391)] = 11170,
  [SMALL_STATE(392)] = 11189,
  [SMALL_STATE(393)] = 11208,
  [SMALL_STATE(394)] = 11225,
  [SMALL_STATE(395)] = 11244,
  [SMALL_STATE(396)] = 11263,
  [SMALL_STATE(397)] = 11276,
  [SMALL_STATE(398)] = 11293,
  [SMALL_STATE(399)] = 11312,
  [SMALL_STATE(400)] = 11331,
  [SMALL_STATE(401)] = 11350,
  [SMALL_STATE(402)] = 11369,
  [SMALL_STATE(403)] = 11388,
  [SMALL_STATE(404)] = 11407,
  [SMALL_STATE(405)] = 11426,
  [SMALL_STATE(406)] = 11445,
  [SMALL_STATE(407)] = 11464,
  [SMALL_STATE(408)] = 11483,
  [SMALL_STATE(409)] = 11502,
  [SMALL_STATE(410)] = 11521,
  [SMALL_STATE(411)] = 11540,
  [SMALL_STATE(412)] = 11557,
  [SMALL_STATE(413)] = 11576,
  [SMALL_STATE(414)] = 11595,
  [SMALL_STATE(415)] = 11614,
  [SMALL_STATE(416)] = 11633,
  [SMALL_STATE(417)] = 11650,
  [SMALL_STATE(418)] = 11669,
  [SMALL_STATE(419)] = 11686,
  [SMALL_STATE(420)] = 11705,
  [SMALL_STATE(421)] = 11724,
  [SMALL_STATE(422)] = 11743,
  [SMALL_STATE(423)] = 11762,
  [SMALL_STATE(424)] = 11775,
  [SMALL_STATE(425)] = 11794,
  [SMALL_STATE(426)] = 11813,
  [SMALL_STATE(427)] = 11826,
  [SMALL_STATE(428)] = 11845,
  [SMALL_STATE(429)] = 11864,
  [SMALL_STATE(430)] = 11883,
  [SMALL_STATE(431)] = 11899,
  [SMALL_STATE(432)] = 11915,
  [SMALL_STATE(433)] = 11931,
  [SMALL_STATE(434)] = 11947,
  [SMALL_STATE(435)] = 11963,
  [SMALL_STATE(436)] = 11979,
  [SMALL_STATE(437)] = 11993,
  [SMALL_STATE(438)] = 12009,
  [SMALL_STATE(439)] = 12025,
  [SMALL_STATE(440)] = 12041,
  [SMALL_STATE(441)] = 12053,
  [SMALL_STATE(442)] = 12069,
  [SMALL_STATE(443)] = 12085,
  [SMALL_STATE(444)] = 12101,
  [SMALL_STATE(445)] = 12115,
  [SMALL_STATE(446)] = 12131,
  [SMALL_STATE(447)] = 12143,
  [SMALL_STATE(448)] = 12159,
  [SMALL_STATE(449)] = 12175,
  [SMALL_STATE(450)] = 12191,
  [SMALL_STATE(451)] = 12207,
  [SMALL_STATE(452)] = 12223,
  [SMALL_STATE(453)] = 12239,
  [SMALL_STATE(454)] = 12251,
  [SMALL_STATE(455)] = 12267,
  [SMALL_STATE(456)] = 12279,
  [SMALL_STATE(457)] = 12295,
  [SMALL_STATE(458)] = 12311,
  [SMALL_STATE(459)] = 12327,
  [SMALL_STATE(460)] = 12343,
  [SMALL_STATE(461)] = 12359,
  [SMALL_STATE(462)] = 12375,
  [SMALL_STATE(463)] = 12391,
  [SMALL_STATE(464)] = 12404,
  [SMALL_STATE(465)] = 12417,
  [SMALL_STATE(466)] = 12428,
  [SMALL_STATE(467)] = 12441,
  [SMALL_STATE(468)] = 12454,
  [SMALL_STATE(469)] = 12467,
  [SMALL_STATE(470)] = 12480,
  [SMALL_STATE(471)] = 12493,
  [SMALL_STATE(472)] = 12506,
  [SMALL_STATE(473)] = 12519,
  [SMALL_STATE(474)] = 12532,
  [SMALL_STATE(475)] = 12543,
  [SMALL_STATE(476)] = 12556,
  [SMALL_STATE(477)] = 12569,
  [SMALL_STATE(478)] = 12582,
  [SMALL_STATE(479)] = 12593,
  [SMALL_STATE(480)] = 12606,
  [SMALL_STATE(481)] = 12619,
  [SMALL_STATE(482)] = 12632,
  [SMALL_STATE(483)] = 12645,
  [SMALL_STATE(484)] = 12658,
  [SMALL_STATE(485)] = 12671,
  [SMALL_STATE(486)] = 12684,
  [SMALL_STATE(487)] = 12697,
  [SMALL_STATE(488)] = 12710,
  [SMALL_STATE(489)] = 12723,
  [SMALL_STATE(490)] = 12736,
  [SMALL_STATE(491)] = 12749,
  [SMALL_STATE(492)] = 12762,
  [SMALL_STATE(493)] = 12775,
  [SMALL_STATE(494)] = 12788,
  [SMALL_STATE(495)] = 12801,
  [SMALL_STATE(496)] = 12814,
  [SMALL_STATE(497)] = 12827,
  [SMALL_STATE(498)] = 12840,
  [SMALL_STATE(499)] = 12853,
  [SMALL_STATE(500)] = 12866,
  [SMALL_STATE(501)] = 12879,
  [SMALL_STATE(502)] = 12892,
  [SMALL_STATE(503)] = 12905,
  [SMALL_STATE(504)] = 12918,
  [SMALL_STATE(505)] = 12931,
  [SMALL_STATE(506)] = 12944,
  [SMALL_STATE(507)] = 12957,
  [SMALL_STATE(508)] = 12970,
  [SMALL_STATE(509)] = 12983,
  [SMALL_STATE(510)] = 12996,
  [SMALL_STATE(511)] = 13009,
  [SMALL_STATE(512)] = 13022,
  [SMALL_STATE(513)] = 13035,
  [SMALL_STATE(514)] = 13048,
  [SMALL_STATE(515)] = 13061,
  [SMALL_STATE(516)] = 13074,
  [SMALL_STATE(517)] = 13087,
  [SMALL_STATE(518)] = 13100,
  [SMALL_STATE(519)] = 13113,
  [SMALL_STATE(520)] = 13126,
  [SMALL_STATE(521)] = 13139,
  [SMALL_STATE(522)] = 13152,
  [SMALL_STATE(523)] = 13163,
  [SMALL_STATE(524)] = 13176,
  [SMALL_STATE(525)] = 13189,
  [SMALL_STATE(526)] = 13202,
  [SMALL_STATE(527)] = 13215,
  [SMALL_STATE(528)] = 13228,
  [SMALL_STATE(529)] = 13241,
  [SMALL_STATE(530)] = 13254,
  [SMALL_STATE(531)] = 13267,
  [SMALL_STATE(532)] = 13280,
  [SMALL_STATE(533)] = 13293,
  [SMALL_STATE(534)] = 13306,
  [SMALL_STATE(535)] = 13319,
  [SMALL_STATE(536)] = 13332,
  [SMALL_STATE(537)] = 13345,
  [SMALL_STATE(538)] = 13358,
  [SMALL_STATE(539)] = 13368,
  [SMALL_STATE(540)] = 13378,
  [SMALL_STATE(541)] = 13388,
  [SMALL_STATE(542)] = 13398,
  [SMALL_STATE(543)] = 13408,
  [SMALL_STATE(544)] = 13418,
  [SMALL_STATE(545)] = 13428,
  [SMALL_STATE(546)] = 13438,
  [SMALL_STATE(547)] = 13448,
  [SMALL_STATE(548)] = 13458,
  [SMALL_STATE(549)] = 13468,
  [SMALL_STATE(550)] = 13478,
  [SMALL_STATE(551)] = 13488,
  [SMALL_STATE(552)] = 13498,
  [SMALL_STATE(553)] = 13508,
  [SMALL_STATE(554)] = 13518,
  [SMALL_STATE(555)] = 13528,
  [SMALL_STATE(556)] = 13538,
  [SMALL_STATE(557)] = 13548,
  [SMALL_STATE(558)] = 13558,
  [SMALL_STATE(559)] = 13568,
  [SMALL_STATE(560)] = 13578,
  [SMALL_STATE(561)] = 13588,
  [SMALL_STATE(562)] = 13598,
  [SMALL_STATE(563)] = 13608,
  [SMALL_STATE(564)] = 13618,
  [SMALL_STATE(565)] = 13628,
  [SMALL_STATE(566)] = 13638,
  [SMALL_STATE(567)] = 13648,
  [SMALL_STATE(568)] = 13658,
  [SMALL_STATE(569)] = 13668,
  [SMALL_STATE(570)] = 13678,
  [SMALL_STATE(571)] = 13688,
  [SMALL_STATE(572)] = 13698,
  [SMALL_STATE(573)] = 13708,
  [SMALL_STATE(574)] = 13718,
  [SMALL_STATE(575)] = 13728,
  [SMALL_STATE(576)] = 13738,
  [SMALL_STATE(577)] = 13748,
  [SMALL_STATE(578)] = 13758,
  [SMALL_STATE(579)] = 13768,
  [SMALL_STATE(580)] = 13778,
  [SMALL_STATE(581)] = 13788,
  [SMALL_STATE(582)] = 13798,
  [SMALL_STATE(583)] = 13808,
  [SMALL_STATE(584)] = 13818,
  [SMALL_STATE(585)] = 13828,
  [SMALL_STATE(586)] = 13838,
  [SMALL_STATE(587)] = 13848,
  [SMALL_STATE(588)] = 13858,
  [SMALL_STATE(589)] = 13868,
  [SMALL_STATE(590)] = 13878,
  [SMALL_STATE(591)] = 13888,
  [SMALL_STATE(592)] = 13898,
  [SMALL_STATE(593)] = 13908,
  [SMALL_STATE(594)] = 13918,
  [SMALL_STATE(595)] = 13928,
  [SMALL_STATE(596)] = 13938,
  [SMALL_STATE(597)] = 13948,
  [SMALL_STATE(598)] = 13958,
  [SMALL_STATE(599)] = 13968,
  [SMALL_STATE(600)] = 13978,
  [SMALL_STATE(601)] = 13988,
  [SMALL_STATE(602)] = 13998,
  [SMALL_STATE(603)] = 14008,
  [SMALL_STATE(604)] = 14018,
  [SMALL_STATE(605)] = 14028,
  [SMALL_STATE(606)] = 14038,
  [SMALL_STATE(607)] = 14048,
  [SMALL_STATE(608)] = 14058,
  [SMALL_STATE(609)] = 14068,
  [SMALL_STATE(610)] = 14078,
  [SMALL_STATE(611)] = 14088,
  [SMALL_STATE(612)] = 14098,
  [SMALL_STATE(613)] = 14108,
  [SMALL_STATE(614)] = 14118,
  [SMALL_STATE(615)] = 14128,
  [SMALL_STATE(616)] = 14138,
  [SMALL_STATE(617)] = 14148,
  [SMALL_STATE(618)] = 14158,
  [SMALL_STATE(619)] = 14168,
  [SMALL_STATE(620)] = 14178,
  [SMALL_STATE(621)] = 14188,
  [SMALL_STATE(622)] = 14198,
  [SMALL_STATE(623)] = 14208,
  [SMALL_STATE(624)] = 14218,
  [SMALL_STATE(625)] = 14228,
  [SMALL_STATE(626)] = 14238,
  [SMALL_STATE(627)] = 14248,
  [SMALL_STATE(628)] = 14258,
  [SMALL_STATE(629)] = 14268,
  [SMALL_STATE(630)] = 14278,
  [SMALL_STATE(631)] = 14288,
  [SMALL_STATE(632)] = 14298,
  [SMALL_STATE(633)] = 14308,
  [SMALL_STATE(634)] = 14318,
  [SMALL_STATE(635)] = 14328,
  [SMALL_STATE(636)] = 14338,
  [SMALL_STATE(637)] = 14348,
  [SMALL_STATE(638)] = 14358,
  [SMALL_STATE(639)] = 14368,
  [SMALL_STATE(640)] = 14378,
  [SMALL_STATE(641)] = 14388,
  [SMALL_STATE(642)] = 14398,
  [SMALL_STATE(643)] = 14408,
  [SMALL_STATE(644)] = 14418,
  [SMALL_STATE(645)] = 14428,
  [SMALL_STATE(646)] = 14438,
  [SMALL_STATE(647)] = 14448,
  [SMALL_STATE(648)] = 14458,
  [SMALL_STATE(649)] = 14468,
  [SMALL_STATE(650)] = 14478,
  [SMALL_STATE(651)] = 14488,
  [SMALL_STATE(652)] = 14498,
  [SMALL_STATE(653)] = 14508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(106),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(207),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(255),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(52),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(53),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(552),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(527),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(464),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(55),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(549),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(203),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(547),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(108),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(203),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(146),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(59),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(3),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_apply_repeat1, 2), SHIFT_REPEAT(55),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(106),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(207),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(255),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(52),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(53),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(552),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(527),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(464),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(55),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(549),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(203),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(547),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(108),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(203),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(146),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(59),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(3),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_collection_repeat1, 2), SHIFT_REPEAT(55),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_match, 4, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_match, 4, .production_id = 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_struct_name, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_name, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_e_match_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_match_repeat1, 2), SHIFT_REPEAT(385),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_e_match_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_name, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_name, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_variable, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_variable, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qconstructor, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qconstructor, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_enum, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_enum, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qscope, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qscope, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_scope_apply, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_scope_apply, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qconstructor, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qconstructor, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qscope, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qscope, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_struct, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_struct, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_case, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_argument, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_argument, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_case, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_unop, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_unop, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_literal, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_literal, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_collection, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_collection, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_variable, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_variable, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_paren, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_paren, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_collection, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_collection, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_enum, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_apply, 3, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_apply, 3, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_contains, 3, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_coll_contains, 3, .production_id = 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_test_match, 3, .production_id = 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_test_match, 3, .production_id = 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qfield, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qfield, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_fieldaccess, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_fieldaccess, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_binop, 3, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_binop, 3, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_sum, 4, .production_id = 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_coll_sum, 4, .production_id = 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_collection, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_collection, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_apply, 4, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_apply, 4, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_test_match, 5, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_test_match, 5, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_map, 5, .production_id = 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_coll_map, 5, .production_id = 7),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qfield, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qfield, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_ifthenelse, 6, .production_id = 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_letin, 6, .production_id = 9),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_scope_apply, 6),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_scope_apply, 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_filter, 6, .production_id = 10),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_forall, 7, .production_id = 11),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_exists, 7, .production_id = 12),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_scope_apply, 7),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_scope_apply, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_e_match_repeat1, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_e_match_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_filter_map, 8, .production_id = 13),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_extremum, 9, .production_id = 14),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e_coll_extremum, 9, .production_id = 14),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e_coll_arg_extremum, 14, .production_id = 15),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_e_collection_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_e_collection_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_e_apply_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_e_apply_repeat1, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_content_field, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(641),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(638),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 6),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_decl_repeat1, 2), SHIFT_REPEAT(106),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_decl_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_decl_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_decl_repeat1, 2), SHIFT_REPEAT(493),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_decl_repeat1, 2), SHIFT_REPEAT(612),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qenum_struct, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl, 5),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_decl, 5),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_decl_item, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl_item, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_decl_item, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl_item, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(398),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(526),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(400),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(5),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(399),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_struct_name, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_typ, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qenum_struct, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qenum_struct, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__params_decl, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__params_decl, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_decl_item, 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl_item, 5),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_decl_item_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_decl_item_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_decl_item_repeat1, 2), SHIFT_REPEAT(476),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qenum_struct, 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_typ, 1),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 2), SHIFT_REPEAT(305),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_decl_item, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl_item, 6),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_decl, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_decl, 3),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__params_decl, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__params_decl, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__code, 2), SHIFT_REPEAT(483),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__code, 2), SHIFT_REPEAT(382),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__depends_stance, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__depends_stance, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_label, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_label, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__depends_stance, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__depends_stance, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 13),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 10),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 10),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 9),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 12),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 8),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_decl_repeat1, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_decl_repeat1, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_law_text_repeat1, 2),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_law_text_repeat1, 2), SHIFT_REPEAT(638),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 14),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 12),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_text, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 11),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 15),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 14),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 15),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 13),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 11),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_heading, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_heading, 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 5),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2), SHIFT_REPEAT(485),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2), SHIFT_REPEAT(490),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl_item, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl_item, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parameters, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_heading, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_heading, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parameters, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_law_text_repeat1, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_parameters_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_parameters_repeat1, 2), SHIFT_REPEAT(477),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_var, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_var, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(467),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 4),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl_item, 3),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl_item, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl_item, 5),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_e_scope_apply_repeat1, 2), SHIFT_REPEAT(386),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_e_scope_apply_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(444),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(541),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__params_decl_repeat1, 2), SHIFT_REPEAT(106),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl_item, 4),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_var_repeat1, 2), SHIFT_REPEAT(106),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code, 1),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_def, 6),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_def, 7),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_e_scope_apply_repeat1, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_decl_item_attribute, 1),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl_item_attribute, 2),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__params_decl_repeat1, 2),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_var_repeat1, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_decl_item_attribute, 1),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1339] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMENT, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_catala_fr(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_LIDENT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
