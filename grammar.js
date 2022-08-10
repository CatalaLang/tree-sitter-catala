const name = "Catala"

var lang = "en"
if ('TREESITTER_CATALA_LANG' in process.env) {
  lang = process.env.TREESITTER_CATALA_LANG
}

const tokens_local = {
  en: {
    SCOPE: "scope",
    CONSEQUENCE: "consequence",
    DATA: "data",
    DEPENDS: /depends\s+on/,
    DECLARATION: "declaration",
    CONTEXT: "context",
    DECREASING: "decreasing",
    INCREASING: "increasing",
    OF: "of",
    COLLECTION: "collection",
    ENUM: "enumeration",
    INTEGER: "integer",
    MONEY: "money",
    TEXT: "text",
    DECIMAL: "decimal",
    DATE: "date",
    DURATION: "duration",
    BOOLEAN: "boolean",
    SUM: "sum",
    FILLED: "fulfilled",
    DEFINITION: "definition",
    STATE: "state",
    LABEL: "label",
    EXCEPTION: "exception",
    DEFINED_AS: "equals",
    MATCH: "match",
    WILDCARD: "anything",
    WITH: /with\s+pattern/,
    UNDER_CONDITION: /under\s+condition/,
    IF: "if",
    THEN: "then",
    ELSE: "else",
    CONDITION: "condition",
    CONTENT: "content",
    STRUCT: "structure",
    ASSERTION: "assertion",
    VARIES: "varies",
    WITH_V: "with",
    FOR: "for",
    ALL: "all",
    WE_HAVE: /we\s+have/,
    FIXED: "fixed",
    BY: "by",
    RULE: "rule",
    EXISTS: "exists",
    IN: "in",
    SUCH: "such",
    THAT: "that",
    AND: "and",
    OR: "or",
    XOR: "xor",
    NOT: "not",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    FILTER: "filter",
    MAP: "map",
    INIT: "initial",
    CARDINAL: "number",
    YEAR: "year",
    MONTH: "month",
    DAY: "day",
    TRUE: "true",
    FALSE: "false",
    INPUT: "input",
    OUTPUT: "output",
    INTERNAL: "internal",
    RoundMoney: "round_money",
    RoundDecimal: "round_decimal",
    IntToDec: "integer_to_decimal",
    GetDay: "get_day",
    GetMonth: "get_month",
    GetYear: "get_year",
    FirstDayOfMonth: "first_day_of_month",
    LastDayOfMonth: "last_day_of_month",
    DECIMAL_LITERAL: /[0-9]+\.[0-9]*/,
    MONEY_AMOUNT: /\$[0-9]([0-9,]*[0-9])?(\.[0-9]{0,2})?/,
    DIVMONEY: '/$',
    GREATER_EQUAL_MONEY: '>=$',
    GREATER_MONEY: '>$',
    LESSER_EQUAL_MONEY: '<=$',
    LESSER_MONEY: '<$',
    MINUSMONEY: '-$',
    MULTMONEY: '*$',
    PLUSMONEY: '+$',
    LAW_INCLUDE: 'Include',
  },
  fr: {
    SCOPE: "champ\s+d'application",
    CONSEQUENCE: "conséquence",
    DATA: "donnée",
    DEPENDS: "dépend\s+de",
    DECLARATION: "déclaration",
    CONTEXT: "contexte",
    DECREASING: "décroissant",
    INCREASING: "croissant",
    OF: "de",
    COLLECTION: "collection",
    CONTAINS: "contient",
    ENUM: "énumération",
    INTEGER: "entier",
    MONEY: "argent",
    TEXT: "texte",
    DECIMAL: "décimal",
    DATE: "date",
    DURATION: "durée",
    BOOLEAN: "booléen",
    SUM: "somme",
    FILLED: "rempli",
    DEFINITION: "définition",
    STATE: "état",
    LABEL: "étiquette",
    EXCEPTION: "exception",
    DEFINED_AS: "égal\s+à",
    MATCH: "selon",
    WILDCARD: "n'importe\s+quel",
    WITH: "sous\s+forme",
    UNDER_CONDITION: "sous\s+condition",
    IF: "si",
    THEN: "alors",
    ELSE: "sinon",
    CONDITION: "condition",
    CONTENT: "contenu",
    STRUCT: "structure",
    ASSERTION: "assertion",
    VARIES: "varie",
    WITH_V: "avec",
    FOR: "pour",
    ALL: "tout",
    WE_HAVE: "on\s+a",
    FIXED: "fixé",
    BY: "par",
    RULE: "règle",
    EXISTS: "existe",
    IN: "dans",
    SUCH: "tel",
    THAT: "que",
    AND: "et",
    OR: "ou",
    XOR: "ou\s+bien",
    NOT: "non",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    FILTER: "filtre",
    MAP: "application",
    INIT: "initial",
    CARDINAL: "nombre",
    YEAR: "an",
    MONTH: "mois",
    DAY: "jour",
    TRUE: "vrai",
    FALSE: "faux",
    INPUT: "entrée",
    OUTPUT: "sortie",
    INTERNAL: "interne",
    RoundMoney: "arrondi_argent",
    RoundDecimal: "arrondi_décimal",
    IntToDec: "entier_vers_décimal",
    MoneyToDec: "argent_vers_décimal",
    DecToMoney: "décimal_vers_argent",
    GetDay: "accès_jour",
    GetMonth: "accès_mois",
    GetYear: "accès_année",
    FirstDayOfMonth: "premier_jour_du_mois",
    LastDayOfMonth: "dernier_jour_du_mois",
    DECIMAL_LITERAL: /[0-9]+,[0-9]*/,
    MONEY_AMOUNT: /[0-9]([0-9 ]*[0-9])?(,[0-9]{0,2})? *€/,
    DIVMONEY: '/€',
    GREATER_EQUAL_MONEY: '>=€',
    GREATER_MONEY: '>€',
    LESSER_EQUAL_MONEY: '<=€',
    LESSER_MONEY: '<€',
    MINUSMONEY: '-€',
    MULTMONEY: '*€',
    PLUSMONEY: '+€',
    LAW_INCLUDE: 'Inclusion',
  },
  pl: {
    SCOPE: "zakres",
    CONSEQUENCE: "konsekwencja",
    DATA: "data",
    DEPENDS: "zalezy\s+od",
    DECLARATION: "deklaracja",
    CONTEXT: "kontekst",
    DECREASING: "malejacy",
    INCREASING: "rosnacy",
    OF: "z",
    COLLECTION: "kolekcja",
    CONTAINS: "zawiera",
    ENUM: "enumeracja",
    INTEGER: "calkowita",
    MONEY: "pieniądze",
    TEXT: "tekst",
    DECIMAL: "dziesiętny",
    DATE: "czas",
    DURATION: "czas\s+trwania",
    BOOLEAN: "zerojedynkowy",
    SUM: "suma",
    FILLED: "spelnione",
    DEFINITION: "definicja",
    STATE: "stan",
    LABEL: "etykieta",
    EXCEPTION: "wyjątek",
    DEFINED_AS: "wynosi",
    MATCH: "pasuje",
    WILDCARD: "cokolwiek",
    WITH: "ze\s+wzorem",
    UNDER_CONDITION: "pod\s+warunkiem",
    IF: "jezeli",
    THEN: "wtedy",
    ELSE: "inaczej",
    CONDITION: "warunek",
    CONTENT: "typu",
    STRUCT: "struktura",
    ASSERTION: "asercja",
    VARIES: "rozna",
    WITH_V: "wraz\s+z",
    FOR: "dla",
    ALL: "wszystkie",
    WE_HAVE: "mamy",
    FIXED: "staloprzecinkowa",
    BY: "przez",
    RULE: "zasada",
    EXISTS: "istnieje",
    IN: "in",
    SUCH: "takie\s+ze",
    THAT: "to",
    AND: "i",
    OR: "lub",
    XOR: "xor",
    NOT: "nie",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    FILTER: "filtr",
    MAP: "mapuj",
    INIT: "poczatkowy",
    CARDINAL: "liczba",
    YEAR: "rok",
    MONTH: "miesiac",
    DAY: "dzien",
    TRUE: "prawda",
    FALSE: "falsz",
    INPUT: "wejście",
    OUTPUT: "wyjście",
    INTERNAL: "wewnętrzny",
    RoundDecimal: "zaokrąglony_dziesiętny",
    RoundMoney: "zaokrąglony_pieniądze",
    IntToDec: "calkowita_wers_dziesiętny",
    MoneyToDec: "pieniądze_wers_dziesiętny",
    DecToMoney: "dziesiętny_wers_pieniądze",
    GetDay: "dostęp_dzień",
    GetMonth: "dostęp_miesiąc",
    GetYear: "dostęp_rok",
    FirstDayOfMonth: "pierwszy_dzień_miesiąca",
    LastDayOfMonth: "ostatni_dzień_miesiąca",
    DECIMAL_LITERAL: /[0-9]+\.[0-9]*/,
    MONEY_AMOUNT: /[0-9]([0-9,]*[0-9])?(\.[0-9]{0,2})? *PLN/,
    DIVMONEY: '/$',
    GREATER_EQUAL_MONEY: '>=$',
    GREATER_MONEY: '>$',
    LESSER_EQUAL_MONEY: '<=$',
    LESSER_MONEY: '<$',
    MINUSMONEY: '-$',
    MULTMONEY: '*$',
    PLUSMONEY: '+$',
    LAW_INCLUDE: 'Include',
  }
}

// International tokens needing no translation (so far)
const tokens = {
  ALT: '--',
  AT_PAGE: /@\s*p.\s*[0-9]+/,
  BEGIN_CODE: token.immediate('```catala'),
  BEGIN_DIRECTIVE: token.immediate('>'),
  BEGIN_METADATA: token.immediate('```catala-metadata'),
  COLON: ':',
  CONSTRUCTOR: /[A-Z][A-Za-z0-9_']*/,
  DIRECTIVE_ARG: /\S+/,
  DIV: '/',
  DIVDEC: '/.',
  DIVDURATION: '/^',
  DOT: '.',
  END_CODE: '```',
  END_DIRECTIVE: '\n',
  EQUAL: '=',
  GREATER: '>',
  GREATER_DATE: '>@',
  GREATER_DEC: '>.',
  GREATER_DURATION: '>^',
  GREATER_EQUAL: '>=',
  GREATER_EQUAL_DATE: '>=@',
  GREATER_EQUAL_DEC: '>=.',
  GREATER_EQUAL_DURATION: '>=^',
  IDENT: /[a-z][a-zA-Z0-9_']*/,
  INT_LITERAL: /[0-9]+/,
  LAW_HEADING: token.immediate(/#+\s*[^\n]+/),
  LAW_TEXT: token.immediate(/\S[^\n]*/),
  LBRACKET: '{',
  LESSER: '<',
  LESSER_DATE: '<@',
  LESSER_DEC: '<.',
  LESSER_DURATION: '<^',
  LESSER_EQUAL: '<=',
  LESSER_EQUAL_DATE: '<=@',
  LESSER_EQUAL_DEC: '<=.',
  LESSER_EQUAL_DURATION: '<=^',
  LPAREN: '(',
  LSQUARE: '[',
  MINUS: '-',
  MINUSDATE: '-@',
  MINUSDEC: '-.',
  MINUSDURATION: '-^',
  MULT: '*',
  MULTDEC: '*.',
  NOT_EQUAL: '!=',
  PERCENT: '%',
  PLUS: '+',
  PLUSDATE: '+@',
  PLUSDEC: '+.',
  PLUSDURATION: '+^',
  PLUSPLUS: '++',
  RBRACKET: '}',
  RPAREN: ')',
  RSQUARE: ']',
  SEMICOLON: ';',
  VERTICAL: '|',
}

Object.assign(tokens, tokens_local.en);

const inline = $ => [
  // $.law_text,
]

const word = $ => $.IDENT

const rules = {
  COMMENT: $ => seq('#', /[^\n]*/),
  _newline: $ => /[ \t]*\r?\n[ \t]*/,
  // newline tokens need to be explicit outside of code blocks, to properly
  // detect beginnings of lines; add them to the choice of toplevel items and make all tokens "immediate"
  // _law_line: $ => prec(0,seq($.LAW_TEXT, $._newline)),
  law_text: $ => prec.right(repeat1(seq($.LAW_TEXT,$._newline))),
  source_file_item: $ =>
      choice($._newline, $.law_text, seq($.BEGIN_CODE, optional($.code), $.END_CODE),
        $.law_heading, $.metadata_block,
        seq($.BEGIN_DIRECTIVE, $.LAW_INCLUDE, $.COLON,
          repeat1($.DIRECTIVE_ARG), optional($.AT_PAGE), $.END_DIRECTIVE)),

  // unhide
  // typ: $ => choice($._typ_base, seq($._collection_marked, $.typ)),
  // _typ: $ => $.typ,
}

const extras = $ => [
  /\s/, $.COMMENT
]

module.exports = grammar({
  name: name,
  inline: inline,
  word: word,
  extras: extras,
  rules: Object.assign({
    source_file: $ => repeat($.source_file_item),
    aggregate: $ =>
      seq($.aggregate_func, $.FOR, $.ident, $.IN, $.primitive_expression,
        $.OF, $.base_expression),
    aggregate_func: $ =>
      choice(seq($.CONTENT, $.MAXIMUM, $.typ_base, $.INIT,
               $.primitive_expression),
        seq($.CONTENT, $.MINIMUM, $.typ_base, $.INIT, $.primitive_expression),
        seq($.MAXIMUM, $.typ_base, $.INIT, $.primitive_expression),
        seq($.MINIMUM, $.typ_base, $.INIT, $.primitive_expression),
        seq($.SUM, $.typ_base), $.CARDINAL, $.FILTER, $.MAP),
    assertion: $ =>
      choice(seq(optional($.condition_consequence), $.assertion_base),
        seq($.FIXED, $.qident, $.BY, $.ident),
        seq($.VARIES, $.qident, $.WITH_V, $.base_expression,
          optional($.variation_type))),
    assertion_base: $ => $.expression,
    atomic_expression: $ =>
      choice($.IDENT, $.literal, seq($.LPAREN, $.expression, $.RPAREN)),
    base_expression: $ =>
      choice($.primitive_expression, $.aggregate,
        seq($.primitive_expression, $.OF, $.base_expression),
        seq($.primitive_expression, $.WITH, $.constructor_binding),
        seq($.primitive_expression, $.CONTAINS, $.base_expression)),
    code: $ => repeat1($.code_item),
    code_item: $ =>
      choice(seq($.SCOPE, $.constructor, optional($.scope_use_condition),
               $.COLON, repeat1($.scope_item)),
        seq($.DECLARATION, $.STRUCT, $.constructor, $.COLON,
          repeat($.struct_scope)),
        seq($.DECLARATION, $.SCOPE, $.constructor, $.COLON,
          repeat1($.scope_decl_item)),
        seq($.DECLARATION, $.ENUM, $.constructor, $.COLON,
          repeat($.enum_decl_line))),
    collection_marked: $ => $.COLLECTION,
    compare_expression: $ =>
      choice($.sum_expression,
        seq($.sum_expression, $.compare_op, $.compare_expression)),
    compare_op: $ =>
      choice($.LESSER, $.LESSER_EQUAL, $.GREATER, $.GREATER_EQUAL,
        $.LESSER_DEC, $.LESSER_EQUAL_DEC, $.GREATER_DEC, $.GREATER_EQUAL_DEC,
        $.LESSER_MONEY, $.LESSER_EQUAL_MONEY, $.GREATER_MONEY,
        $.GREATER_EQUAL_MONEY, $.LESSER_DATE, $.LESSER_EQUAL_DATE,
        $.GREATER_DATE, $.GREATER_EQUAL_DATE, $.LESSER_DURATION,
        $.LESSER_EQUAL_DURATION, $.GREATER_DURATION,
        $.GREATER_EQUAL_DURATION, $.EQUAL, $.NOT_EQUAL),
    condition: $ => seq($.UNDER_CONDITION, $.expression),
    condition_consequence: $ => seq($.condition, $.CONSEQUENCE),
    condition_pos: $ => $.CONDITION,
    constructor: $ => $.CONSTRUCTOR,
    constructor_binding: $ =>
      seq($.maybe_qualified_constructor, optional($.optional_binding)),
    definition: $ =>
      seq(optional($.label), optional($.exception_to), $.DEFINITION,
        $.qident, optional($.definition_parameters), optional($.state),
        optional($.condition_consequence), $.DEFINED_AS, $.expression),
    definition_parameters: $ => seq($.OF, $.ident),
    enum_decl_line: $ =>
      seq($.ALT, $.constructor, optional($.enum_decl_line_payload)),
    enum_decl_line_payload: $ => seq($.CONTENT, $.typ),
    enum_inject_content: $ => seq($.CONTENT, $.small_expression),
    exception_to: $ => seq($.EXCEPTION, optional($.ident)),
    exists_marked: $ => $.EXISTS,
    exists_prefix: $ =>
      seq($.exists_marked, $.ident, $.IN, $.primitive_expression, $.SUCH,
        $.THAT),
    expression: $ =>
      choice(seq($.exists_prefix, $.expression),
        seq($.forall_prefix, $.expression),
        seq($.MATCH, $.primitive_expression, $.WITH, optional($.match_arms)),
        seq($.IF, $.expression, $.THEN, $.expression, $.ELSE, $.expression),
        $.logical_expression),
    for_all_marked: $ => seq($.FOR, $.ALL),
    forall_prefix: $ =>
      seq($.for_all_marked, $.ident, $.IN, $.primitive_expression, $.WE_HAVE),
    ident: $ => $.IDENT,
    label: $ => seq($.LABEL, $.ident),
    law_heading: $ => $.LAW_HEADING,
    law_text: $ => repeat1($.LAW_TEXT),
    literal: $ =>
      choice(seq($.num_literal, optional($.unit_literal)), $.MONEY_AMOUNT,
        seq($.VERTICAL, $.DATE_LITERAL, $.VERTICAL), $.TRUE, $.FALSE),
    logical_and_op: $ => $.AND,
    logical_atom: $ => $.compare_expression,
    logical_expression: $ =>
      choice($.logical_or_expression,
        seq($.logical_or_expression, $.logical_and_op, $.logical_expression)),
    logical_or_expression: $ =>
      choice($.logical_atom,
        seq($.logical_atom, $.logical_or_op, $.logical_or_expression)),
    logical_or_op: $ => choice($.OR, $.XOR),
    _loption_separated_nonempty_list_SEMICOLON_expression__: $ =>
      $._separated_nonempty_list_SEMICOLON_expression_,
    match_arm: $ =>
      choice(seq($.WILDCARD, $.COLON, $.logical_expression),
        seq($.constructor_binding, $.COLON, $.logical_expression)),
    match_arms: $ => seq($.ALT, $.match_arm, optional($.match_arms)),
    maybe_qualified_constructor: $ =>
      seq($.constructor, optional(seq($.DOT, $.constructor))),
    metadata_block: $ =>
      seq($.BEGIN_METADATA, optional($.law_text), optional($.code),
        $.END_CODE),
    mult_expression: $ =>
      choice($.unop_expression,
        seq($.mult_expression, $.mult_op, $.unop_expression)),
    mult_op: $ =>
      choice($.MULT, $.DIV, $.MULTDEC, $.DIVDEC, $.MULTMONEY, $.DIVMONEY,
        $.DIVDURATION, $.MULDURATION),
    num_literal: $ => choice($.INT_LITERAL, $.DECIMAL_LITERAL),
    optional_binding: $ =>
      choice(seq($.OF, $.ident),
        seq($.OF, $.maybe_qualified_constructor, $.constructor_binding)),
    primitive_expression: $ =>
      choice($.small_expression, $.CARDINAL, $.struct_or_enum_inject,
        seq($.LSQUARE,
          optional($._loption_separated_nonempty_list_SEMICOLON_expression__),
          $.RSQUARE)),
    qident: $ => $._separated_nonempty_list_DOT_ident_,
    rule: $ =>
      seq(optional($.label), optional($.exception_to), $.RULE, $.rule_expr,
        optional($.condition_consequence), optional($.state),
        $.rule_consequence),
    rule_consequence: $ => seq(optional($.NOT), $.FILLED),
    rule_expr: $ => seq($.qident, optional($.definition_parameters)),
    scope_decl_item: $ =>
      choice(seq($.scope_decl_item_attribute, $.ident, $.CONTENT, $.typ,
               optional($.struct_scope_func), repeat($.state)),
        seq($.ident, $.SCOPE, $.constructor),
        seq($.scope_decl_item_attribute, $.ident, $.CONDITION,
          optional($.struct_scope_func), repeat($.state))),
    scope_decl_item_attribute: $ =>
      choice(seq($.scope_decl_item_attribute_input,
               optional($.scope_decl_item_attribute_output)), $.INTERNAL,
        $.OUTPUT),
    scope_decl_item_attribute_input: $ => choice($.CONTEXT, $.INPUT),
    scope_decl_item_attribute_output: $ => $.OUTPUT,
    scope_item: $ =>
      choice($.rule, $.definition, seq($.ASSERTION, $.assertion)),
    scope_use_condition: $ => seq($.UNDER_CONDITION, $.expression),
    _separated_nonempty_list_ALT_struct_content_field_: $ =>
      choice($.struct_content_field,
        seq($.struct_content_field, $.ALT,
          $._separated_nonempty_list_ALT_struct_content_field_)),
    _separated_nonempty_list_DOT_ident_: $ =>
      choice($.ident,
        seq($.ident, $.DOT, $._separated_nonempty_list_DOT_ident_)),
    _separated_nonempty_list_SEMICOLON_expression_: $ =>
      choice($.expression,
        seq($.expression, $.SEMICOLON,
          $._separated_nonempty_list_SEMICOLON_expression_)),
    small_expression: $ =>
      choice($.atomic_expression,
        seq($.small_expression, $.DOT, optional(seq($.constructor, $.DOT)),
          $.ident)),
    source_file_item: $ =>
      choice($.law_text, seq($.BEGIN_CODE, optional($.code), $.END_CODE),
        $.law_heading, $.metadata_block,
        seq($.BEGIN_DIRECTIVE, $.LAW_INCLUDE, $.COLON,
          repeat1($.DIRECTIVE_ARG), optional($.AT_PAGE), $.END_DIRECTIVE)),
    state: $ => seq($.STATE, $.ident),
    struct_content_field: $ => seq($.ident, $.COLON, $.logical_expression),
    struct_inject_content: $ =>
      seq($.LBRACKET, $.ALT,
        $._separated_nonempty_list_ALT_struct_content_field_, $.RBRACKET),
    struct_or_enum_inject: $ =>
      choice(seq($.constructor, optional(seq($.DOT, $.constructor)),
               optional($.enum_inject_content)),
        seq($.constructor, $.struct_inject_content)),
    struct_scope: $ =>
      seq($.struct_scope_base, optional($.struct_scope_func)),
    struct_scope_base: $ =>
      choice(seq($.DATA, $.ident, $.CONTENT, $.typ),
        seq($.condition_pos, $.ident)),
    struct_scope_func: $ => seq($.DEPENDS, $.typ),
    sum_expression: $ =>
      choice($.mult_expression,
        seq($.sum_expression, $.sum_op, $.mult_expression)),
    sum_op: $ =>
      choice($.PLUSDURATION, $.MINUSDURATION, $.PLUSDATE, $.MINUSDATE,
        $.PLUSMONEY, $.MINUSMONEY, $.PLUSDEC, $.MINUSDEC, $.PLUS, $.MINUS,
        $.PLUSPLUS),
    typ: $ => choice($.typ_base, seq($.collection_marked, $.typ)),
    typ_base: $ =>
      choice($.INTEGER, $.BOOLEAN, $.MONEY, $.DURATION, $.TEXT, $.DECIMAL,
        $.DATE, $.constructor),
    unit_literal: $ => choice($.PERCENT, $.YEAR, $.MONTH, $.DAY),
    unop: $ =>
      choice($.NOT, $.MINUS, $.MINUSDEC, $.MINUSMONEY, $.MINUSDURATION),
    unop_expression: $ =>
      choice($.base_expression, seq($.unop, $.unop_expression)),
    variation_type: $ => choice($.INCREASING, $.DECREASING),
    ALL: $ => tokens.ALL,
    ALT: $ => tokens.ALT,
    AND: $ => tokens.AND,
    ASSERTION: $ => tokens.ASSERTION,
    AT_PAGE: $ => tokens.AT_PAGE,
    BEGIN_CODE: $ => tokens.BEGIN_CODE,
    BEGIN_DIRECTIVE: $ => tokens.BEGIN_DIRECTIVE,
    BEGIN_METADATA: $ => tokens.BEGIN_METADATA,
    BOOLEAN: $ => tokens.BOOLEAN,
    BY: $ => tokens.BY,
    CARDINAL: $ => tokens.CARDINAL,
    COLLECTION: $ => tokens.COLLECTION,
    COLON: $ => tokens.COLON,
    CONDITION: $ => tokens.CONDITION,
    CONSEQUENCE: $ => tokens.CONSEQUENCE,
    CONSTRUCTOR: $ => tokens.CONSTRUCTOR,
    CONTAINS: $ => tokens.CONTAINS,
    CONTENT: $ => tokens.CONTENT,
    CONTEXT: $ => tokens.CONTEXT,
    DATA: $ => tokens.DATA,
    DATE: $ => tokens.DATE,
    DATE_LITERAL: $ => tokens.DATE_LITERAL,
    DAY: $ => tokens.DAY,
    DECIMAL: $ => tokens.DECIMAL,
    DECIMAL_LITERAL: $ => tokens.DECIMAL_LITERAL,
    DECLARATION: $ => tokens.DECLARATION,
    DECREASING: $ => tokens.DECREASING,
    DEFINED_AS: $ => tokens.DEFINED_AS,
    DEFINITION: $ => tokens.DEFINITION,
    DEPENDS: $ => tokens.DEPENDS,
    DIRECTIVE_ARG: $ => tokens.DIRECTIVE_ARG,
    DIV: $ => tokens.DIV,
    DIVDEC: $ => tokens.DIVDEC,
    DIVDURATION: $ => tokens.DIVDURATION,
    DIVMONEY: $ => tokens.DIVMONEY,
    DOT: $ => tokens.DOT,
    DURATION: $ => tokens.DURATION,
    ELSE: $ => tokens.ELSE,
    END_CODE: $ => tokens.END_CODE,
    END_DIRECTIVE: $ => tokens.END_DIRECTIVE,
    ENUM: $ => tokens.ENUM,
    EQUAL: $ => tokens.EQUAL,
    EXCEPTION: $ => tokens.EXCEPTION,
    EXISTS: $ => tokens.EXISTS,
    FALSE: $ => tokens.FALSE,
    FILLED: $ => tokens.FILLED,
    FILTER: $ => tokens.FILTER,
    FIXED: $ => tokens.FIXED,
    FOR: $ => tokens.FOR,
    GREATER: $ => tokens.GREATER,
    GREATER_DATE: $ => tokens.GREATER_DATE,
    GREATER_DEC: $ => tokens.GREATER_DEC,
    GREATER_DURATION: $ => tokens.GREATER_DURATION,
    GREATER_EQUAL: $ => tokens.GREATER_EQUAL,
    GREATER_EQUAL_DATE: $ => tokens.GREATER_EQUAL_DATE,
    GREATER_EQUAL_DEC: $ => tokens.GREATER_EQUAL_DEC,
    GREATER_EQUAL_DURATION: $ => tokens.GREATER_EQUAL_DURATION,
    GREATER_EQUAL_MONEY: $ => tokens.GREATER_EQUAL_MONEY,
    GREATER_MONEY: $ => tokens.GREATER_MONEY,
    IDENT: $ => tokens.IDENT,
    IF: $ => tokens.IF,
    IN: $ => tokens.IN,
    INCREASING: $ => tokens.INCREASING,
    INIT: $ => tokens.INIT,
    INPUT: $ => tokens.INPUT,
    INTEGER: $ => tokens.INTEGER,
    INTERNAL: $ => tokens.INTERNAL,
    INT_LITERAL: $ => tokens.INT_LITERAL,
    LABEL: $ => tokens.LABEL,
    LAW_HEADING: $ => tokens.LAW_HEADING,
    LAW_INCLUDE: $ => tokens.LAW_INCLUDE,
    LAW_TEXT: $ => prec.right(1,tokens.LAW_TEXT),
    LBRACKET: $ => tokens.LBRACKET,
    LESSER: $ => tokens.LESSER,
    LESSER_DATE: $ => tokens.LESSER_DATE,
    LESSER_DEC: $ => tokens.LESSER_DEC,
    LESSER_DURATION: $ => tokens.LESSER_DURATION,
    LESSER_EQUAL: $ => tokens.LESSER_EQUAL,
    LESSER_EQUAL_DATE: $ => tokens.LESSER_EQUAL_DATE,
    LESSER_EQUAL_DEC: $ => tokens.LESSER_EQUAL_DEC,
    LESSER_EQUAL_DURATION: $ => tokens.LESSER_EQUAL_DURATION,
    LESSER_EQUAL_MONEY: $ => tokens.LESSER_EQUAL_MONEY,
    LESSER_MONEY: $ => tokens.LESSER_MONEY,
    LPAREN: $ => tokens.LPAREN,
    LSQUARE: $ => tokens.LSQUARE,
    MAP: $ => tokens.MAP,
    MATCH: $ => tokens.MATCH,
    MAXIMUM: $ => tokens.MAXIMUM,
    MINIMUM: $ => tokens.MINIMUM,
    MINUS: $ => tokens.MINUS,
    MINUSDATE: $ => tokens.MINUSDATE,
    MINUSDEC: $ => tokens.MINUSDEC,
    MINUSDURATION: $ => tokens.MINUSDURATION,
    MINUSMONEY: $ => tokens.MINUSMONEY,
    MONEY: $ => tokens.MONEY,
    MONEY_AMOUNT: $ => tokens.MONEY_AMOUNT,
    MONTH: $ => tokens.MONTH,
    MULDURATION: $ => tokens.MULDURATION,
    MULT: $ => tokens.MULT,
    MULTDEC: $ => tokens.MULTDEC,
    MULTMONEY: $ => tokens.MULTMONEY,
    NOT: $ => tokens.NOT,
    NOT_EQUAL: $ => tokens.NOT_EQUAL,
    OF: $ => tokens.OF,
    OR: $ => tokens.OR,
    OUTPUT: $ => tokens.OUTPUT,
    PERCENT: $ => tokens.PERCENT,
    PLUS: $ => tokens.PLUS,
    PLUSDATE: $ => tokens.PLUSDATE,
    PLUSDEC: $ => tokens.PLUSDEC,
    PLUSDURATION: $ => tokens.PLUSDURATION,
    PLUSMONEY: $ => tokens.PLUSMONEY,
    PLUSPLUS: $ => tokens.PLUSPLUS,
    RBRACKET: $ => tokens.RBRACKET,
    RPAREN: $ => tokens.RPAREN,
    RSQUARE: $ => tokens.RSQUARE,
    RULE: $ => tokens.RULE,
    SCOPE: $ => tokens.SCOPE,
    SEMICOLON: $ => tokens.SEMICOLON,
    STATE: $ => tokens.STATE,
    STRUCT: $ => tokens.STRUCT,
    SUCH: $ => tokens.SUCH,
    SUM: $ => tokens.SUM,
    TEXT: $ => tokens.TEXT,
    THAT: $ => tokens.THAT,
    THEN: $ => tokens.THEN,
    TRUE: $ => tokens.TRUE,
    UNDER_CONDITION: $ => tokens.UNDER_CONDITION,
    VARIES: $ => tokens.VARIES,
    VERTICAL: $ => tokens.VERTICAL,
    WE_HAVE: $ => tokens.WE_HAVE,
    WILDCARD: $ => tokens.WILDCARD,
    WITH: $ => tokens.WITH,
    WITH_V: $ => tokens.WITH_V,
    XOR: $ => tokens.XOR,
    YEAR: $ => tokens.YEAR,
    }, rules)
  })
