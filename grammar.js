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
    CONTAINS: "contains",
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
    LET: "let",
    EXISTS: "exists",
    IN: "in",
    AMONG: "among",
    SUCH: "such",
    THAT: "that",
    AND: "and",
    OR: "or",
    XOR: "xor",
    NOT: "not",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    IS: "is",
    EMPTY: "empty",
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
    OP_KIND_SUFFIX: /[!.@^$]/,
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
    LET: "soit",
    EXISTS: "existe",
    IN: "dans",
    AMONG: "parmi",
    SUCH: "tel",
    THAT: "que",
    AND: "et",
    OR: "ou",
    XOR: "ou\s+bien",
    NOT: "non",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    IS: "est",
    EMPTY: "vide",
    CARDINAL: "nombre",
    YEAR: "an",
    MONTH: "mois",
    DAY: "jour",
    TRUE: "vrai",
    FALSE: "faux",
    INPUT: "entrée",
    OUTPUT: "résultat",
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
    OP_KIND_SUFFIX: /[!.@^€]/,
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
    LET: "niech",
    EXISTS: "istnieje",
    IN: "in",
    AMONG: "wśród",
    SUCH: "takie\s+ze",
    THAT: "to",
    AND: "i",
    OR: "lub",
    XOR: "xor",
    NOT: "nie",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    MS_IS: "jest",
    MS_EMPTY: "pusty",
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
    OP_KIND_SUFFIX: /[!.@^$]/,
    LAW_INCLUDE: 'Include',
  }
}

// International tokens needing no translation (so far)
const tokens_international = {
  ALT: '--',
  AT_PAGE: /@\s*p.\s*[0-9]+/,
  BEGIN_CODE: token.immediate('```catala'),
  BEGIN_DIRECTIVE: token.immediate('>'),
  BEGIN_METADATA: token.immediate('```catala-metadata'),
  COLON: ':',
  UIDENT: /[A-Z][A-Za-z0-9_']*/,
  DIRECTIVE_ARG: /\S+/,
  DIV: '/',
  DOT: '.',
  COMMA: ',',
  END_CODE: '```',
  END_DIRECTIVE: '\n',
  EQUAL: '=',
  NOT_EQUAL: '!=',
  GREATER: '>',
  GREATER_EQUAL: '>=',
  LIDENT: /[a-z][a-zA-Z0-9_']*/,
  INT_LITERAL: /[0-9]+/,
  DATE_LITERAL: /[|][0-9]{4}-[0-9]{2}-[0-9]{2}[|]/,
  LAW_HEADING: token.immediate(/#+\s*[^\n]+/),
  LAW_TEXT: token.immediate(/\S[^\n]*/),
  LBRACE: '{',
  LESSER: '<',
  LESSER_EQUAL: '<=',
  LPAREN: '(',
  LBRACKET: '[',
  MINUS: '-',
  MULT: '*',
  PERCENT: '%',
  PLUS: '+',
  PLUSPLUS: '++',
  RBRACE: '}',
  RPAREN: ')',
  RBRACKET: ']',
  SEMICOLON: ';',
  VERTICAL: '|',
}

const tokens = Object.assign({}, tokens_local[lang], tokens_international)

const inline = $ => [
  // $.law_text,
]

module.exports = grammar({
  name: name,
  inline: inline,
  word: $ => $.LIDENT,
  extras: $ => [ /\s/, $.COMMENT ],
  precedences: $ => [[
    'keyword',
    'DOT',
    'UIDENT',
    'CONTENT',
    'unop_expr',
    'COMMA',
    'apply',
    'MULT',
    'PLUS',
    'GREATER',
    'AND',
    'let_expr',
    'ALT',
    'top_expr',
  ]],
  rules: {

    source_file: $ =>
      repeat(choice(
        $._newline,
        $.law_text,
        $.code_block,
        $.law_heading,
        $.directive
      )),

    COMMENT: $ => seq('#', /[^\n]*/),
    _newline: $ => /[ \t]*\r?\n[ \t]*/,
    // newline tokens need to be explicit outside of code blocks, to properly
    // detect beginnings of lines; add them to the choice of toplevel items and make all tokens "immediate"
    // _law_line: $ => prec(0,seq($.LAW_TEXT, $._newline)),
    law_text: $ => prec.right(repeat1(seq($.LAW_TEXT,$._newline))),

    primitive_typ: $ =>
      choice($.INTEGER, $.BOOLEAN, $.MONEY, $.DURATION, $.TEXT, $.DECIMAL,
             $.DATE, $.quident),
    typ: $ =>
      seq(repeat($.COLLECTION), $.primitive_typ),
    scope_var: $ =>
      seq(repeat(seq($.LIDENT, $.DOT)),$.LIDENT),
    quident: $ =>
      prec.left(seq(repeat(prec.left('DOT',seq($.UIDENT, $.DOT))),$.UIDENT)),
    qlident: $ =>
      seq(repeat(prec.left('DOT',seq($.UIDENT, $.DOT))),$.LIDENT),

    expression: $ =>
      choice(
        $._expr_atom,
        $._expr_apply,
        $._expr_unop,
        $._expr_binop,
        $._expr_let,
        $._expr_compound,
      ),

    _expr_atom: $ =>
      choice(
        seq($.UIDENT,$.DOT,$.qlident),
        $.literal,
        seq($.LPAREN, $.expression, $.RPAREN),
        $.CARDINAL,
        $.DECIMAL,
        $.MONEY,
      ),

    // _expr_list_comma: $ =>
    //   prec.right(repeat(seq($.expression, $.COMMA)), $.expression),

    _expr_apply: $ =>
      prec.right(choice(
        seq($.expression, $.OF, repeat(seq($.expression, $.COMMA)), $.expression),
        seq($.OUTPUT, $.OF, $.quident,
            optional(seq($.WITH_V, $.LBRACE, repeat($.struct_content_field), $.RBRACE))),
        seq($.expression, $.WITH, $.quident, optional(seq($.OF, $.LIDENT))),
        seq($.expression, $.CONTAINS, $.expression),
        seq($.SUM, $.primitive_typ, $.OF, $.expression),
        seq($.expression, $.FOR, $.LIDENT, $.AMONG, $.expression),
        seq(choice($.MINIMUM, $.MAXIMUM), $.OF, $.expression,
            $.OR, $.IF, $.COLLECTION, $.EMPTY, $.THEN, $.expression),
      )),

    _expr_unop: $ =>
      prec.right('unop_expr', choice(
        prec.right('unop_expr', seq($.unop, $.expression)),
      )),

    _expr_binop: $ =>
      choice(
        prec.left('MULT', seq($.expression, $.MULT, $.expression)),
        prec.left('MULT', seq($.expression, $.DIV, $.expression)),
        prec.left('PLUS', seq($.expression, $.PLUS, $.expression)),
        prec.left('PLUS', seq($.expression, $.MINUS, $.expression)),
        prec.left('PLUS', seq($.expression, $.PLUSPLUS, $.expression)),
        prec.left('GREATER', seq($.expression, $.LESSER, $.expression)),
        prec.left('GREATER', seq($.expression, $.LESSER_EQUAL, $.expression)),
        prec.left('GREATER', seq($.expression, $.GREATER, $.expression)),
        prec.left('GREATER', seq($.expression, $.GREATER_EQUAL, $.expression)),
        prec.left('GREATER', seq($.expression, $.EQUAL, $.expression)),
        prec.left('GREATER', seq($.expression, $.NOT_EQUAL, $.expression)),
        prec.right('AND', seq($.expression, $.AND, $.expression)),
        prec.right('AND', seq($.expression, $.OR, $.expression)),
        prec.right('AND', seq($.expression, $.XOR, $.expression)),
      ),

    _expr_let: $ =>
      prec.right(choice(
        seq($.EXISTS, $.LIDENT, $.AMONG, $.expression,
            $.SUCH, $.THAT, $.expression),
        seq($.FOR, $.ALL, $.LIDENT, $.AMONG, $.expression,
            $.WE_HAVE, $.expression),
        seq($.MATCH, $.expression, $.WITH,
            repeat1($.match_case)),
        seq($.IF, $.expression, $.THEN, $.expression, $.ELSE, $.expression),
        seq($.LET, $.LIDENT, $.DEFINED_AS, $.expression, $.IN, $.expression),
      )),

    match_case: $ =>
      prec.right(
        seq($.ALT,
            choice($.WILDCARD, seq($.quident, optional(seq($.OF, $.LIDENT)))),
            $.COLON, $.expression)
      ),

    _expr_compound: $ =>
      (choice(
        seq($.expression, $.DOT, $.qlident),
        seq($.LBRACE,
            optional(seq(repeat(seq($.expression, $.SEMICOLON)), $.expression)),
            $.RBRACE),
        prec.right(seq($.quident, optional(seq($.CONTENT, $.expression)))),
        seq($.quident, $.LBRACE, repeat1($.struct_content_field), $.RBRACE),
        prec.right(seq($.LIDENT, $.AMONG, $.expression, $.SUCH, $.THAT, $.expression)),
        prec.right(seq($.expression, $.FOR, $.LIDENT, $.AMONG, $.expression,
                       $.SUCH, $.THAT, $.expression)),
        prec.right(seq($.LIDENT, $.AMONG, $.expression,
                       $.SUCH, $.THAT, $.expression, $.IS, choice($.MINIMUM,$.MAXIMUM),
                       $.OR, $.IF, $.COLLECTION, $.EMPTY, $.THEN, $.expression)),

      )),

    struct_content_field: $ =>
      seq($.ALT, $.LIDENT, $.COLON, $.expression),
    unit_literal: $ =>
      choice(
        $.PERCENT,
        $.YEAR,
        $.MONTH,
        $.DAY
      ),
    literal: $ =>
      choice(
        seq($.INT_LITERAL,optional($.unit_literal)),
        seq($.DECIMAL_LITERAL,optional($.unit_literal)),
        $.MONEY_AMOUNT,
        $.DATE_LITERAL,
        $.TRUE,
        $.FALSE
      ),
    unop: $ =>
      choice(
        $.NOT,
        $.MINUS
      ),
    binop: $ =>
      choice(
        $.MULT,
        $.DIV,
        $.PLUS,
        $.MINUS,
        $.PLUSPLUS,
        $.LESSER,
        $.LESSER_EQUAL,
        $.GREATER,
        $.GREATER_EQUAL,
        $.EQUAL,
        $.NOT_EQUAL,
        $.AND,
        $.OR,
        $.XOR,
      ),

    rule: $ =>
      seq(
        optional(seq($.LABEL, $.LIDENT)),
        optional(seq($.EXCEPTION, optional($.LIDENT))),
        $.RULE,
        $.scope_var,
        optional(seq($.OF, $.LIDENT, repeat(seq($.COMMA, $.LIDENT)))),
        optional(seq($.STATE, $.LIDENT)),
        optional(seq($.UNDER_CONDITION, $.expression, $.CONSEQUENCE)),
        optional($.NOT),
        $.FILLED
      ),

    definition: $ =>
      seq(
        optional(seq($.LABEL, $.LIDENT)),
        optional(seq($.EXCEPTION, optional($.LIDENT))),
        $.DEFINITION,
        $.scope_var,
        optional(seq($.OF, $.LIDENT, repeat(seq($.COMMA, $.LIDENT)))),
        optional(seq($.STATE, $.LIDENT)),
        optional(seq($.UNDER_CONDITION, $.expression, $.CONSEQUENCE)),
        $.DEFINED_AS,
        $.expression
      ),

    assertion: $ =>
      seq(
        $.ASSERTION,
        optional(seq($.UNDER_CONDITION, $.expression, $.CONSEQUENCE)),
        $.expression
      ),
    // Note: not handling FIXED, VARIES

    scope: $ =>
      seq($.SCOPE, $.UIDENT,
          optional(seq($.UNDER_CONDITION, $.expression)),
          $.COLON,
          repeat1(choice($.rule, $.definition, $.assertion))),

    scope_decl_item_attribute: $ =>
      choice(
        seq(choice($.CONTEXT, $.INPUT), optional($.OUTPUT)),
        $.INTERNAL,
        $.OUTPUT
      ),
    params_decl: $ =>
      seq($.LIDENT, $.CONTENT, $.typ,
          repeat(seq($.COMMA, $.LIDENT, $.CONTENT, $.typ))),
    depends_stance: $ =>
      seq($.DEPENDS, choice(seq($.LPAREN, $.params_decl, $.RPAREN),
                            $.params_decl)),
    scope_decl_item: $ =>
      choice(
        seq($.scope_decl_item_attribute, $.LIDENT,
            choice(seq($.CONTENT, $.typ),$.CONDITION),
            optional($.depends_stance),
            repeat(seq($.STATE, $.LIDENT))),
        seq($.LIDENT, $.SCOPE, $.UIDENT)
      ),
    scope_decl: $ =>
      seq($.DECLARATION, $.SCOPE, $.UIDENT, $.COLON,
          repeat1($.scope_decl_item)),

    struct_decl_item: $ =>
      seq(
        choice(seq($.DATA, $.LIDENT, $.CONTENT, $.typ),
               seq($.CONDITION, $.LIDENT)),
        optional($.depends_stance)
      ),
    struct_decl: $ =>
      seq($.DECLARATION, $.STRUCT, $.UIDENT, $.COLON,
          repeat($.struct_decl_item)),

    enum_decl_item: $ =>
      seq($.ALT, $.UIDENT, optional(seq($.CONTENT, $.typ))),
    enum_decl: $ =>
      seq($.DECLARATION, $.ENUM, $.UIDENT, $.COLON,
          repeat($.enum_decl_item)),

    toplevel_def: $ =>
      seq(
        $.DECLARATION, $.LIDENT, $.CONTENT, $.typ,
        $.depends_stance,
        $.DEFINED_AS, $.expression
      ),

    code: $ =>
      repeat1(choice(
        $.scope,
        $.scope_decl,
        $.struct_decl,
        $.enum_decl,
        $.toplevel_def
      )),

    code_block: $ =>
      seq(
        choice(
          $.BEGIN_CODE,
          seq($.BEGIN_METADATA, optional($.law_text))
        ),
        optional($.code),
        $.END_CODE
      ),

    directive: $ =>
      seq(
        $.BEGIN_DIRECTIVE, $.LAW_INCLUDE, $.COLON,
        repeat1($.DIRECTIVE_ARG), optional($.AT_PAGE),
        $.END_DIRECTIVE
      ),

    law_heading: $ => $.LAW_HEADING,
    law_text: $ => prec.left(repeat1($.LAW_TEXT)),

  SCOPE: $ => token(tokens.SCOPE),
  CONSEQUENCE: $ => token(tokens.CONSEQUENCE),
  DATA: $ => token(tokens.DATA),
  DEPENDS: $ => token(tokens.DEPENDS),
  DECLARATION: $ => token(tokens.DECLARATION),
  CONTEXT: $ => token(tokens.CONTEXT),
  DECREASING: $ => token(tokens.DECREASING),
  INCREASING: $ => token(tokens.INCREASING),
  OF: $ => token(tokens.OF),
  COLLECTION: $ => token(tokens.COLLECTION),
  CONTAINS: $ => token(tokens.CONTAINS),
  ENUM: $ => token(tokens.ENUM),
  INTEGER: $ => token(tokens.INTEGER),
  MONEY: $ => token(tokens.MONEY),
  TEXT: $ => token(tokens.TEXT),
  DECIMAL: $ => token(tokens.DECIMAL),
  DATE: $ => token(tokens.DATE),
  DURATION: $ => token(tokens.DURATION),
  BOOLEAN: $ => token(tokens.BOOLEAN),
  SUM: $ => token(tokens.SUM),
  FILLED: $ => token(tokens.FILLED),
  DEFINITION: $ => token(tokens.DEFINITION),
  STATE: $ => token(tokens.STATE),
  LABEL: $ => token(tokens.LABEL),
  EXCEPTION: $ => token(tokens.EXCEPTION),
  DEFINED_AS: $ => token(tokens.DEFINED_AS),
  MATCH: $ => token(tokens.MATCH),
  WILDCARD: $ => token(tokens.WILDCARD),
  WITH: $ => token(tokens.WITH),
  UNDER_CONDITION: $ => token(tokens.UNDER_CONDITION),
  IF: $ => token(tokens.IF),
  THEN: $ => token(tokens.THEN),
  ELSE: $ => token(tokens.ELSE),
  CONDITION: $ => token(tokens.CONDITION),
  CONTENT: $ => token(tokens.CONTENT),
  STRUCT: $ => token(tokens.STRUCT),
  ASSERTION: $ => token(tokens.ASSERTION),
  VARIES: $ => token(tokens.VARIES),
  WITH_V: $ => token(tokens.WITH_V),
  FOR: $ => token(tokens.FOR),
  ALL: $ => token(tokens.ALL),
  WE_HAVE: $ => token(tokens.WE_HAVE),
  FIXED: $ => token(tokens.FIXED),
  BY: $ => token(tokens.BY),
  RULE: $ => token(tokens.RULE),
  LET: $ => token(tokens.LET),
  EXISTS: $ => token(tokens.EXISTS),
  IN: $ => token(tokens.IN),
  AMONG: $ => token(tokens.AMONG),
  SUCH: $ => token(tokens.SUCH),
  THAT: $ => token(tokens.THAT),
  NOT: $ => token(tokens.NOT),
  MAXIMUM: $ => token(tokens.MAXIMUM),
  MINIMUM: $ => token(tokens.MINIMUM),
  IS: $ => token(tokens.IS),
  EMPTY: $ => token(tokens.EMPTY),
  CARDINAL: $ => token(tokens.CARDINAL),
  YEAR: $ => token(tokens.YEAR),
  MONTH: $ => token(tokens.MONTH),
  DAY: $ => token(tokens.DAY),
  TRUE: $ => token(tokens.TRUE),
  FALSE: $ => token(tokens.FALSE),
  INPUT: $ => token(tokens.INPUT),
  OUTPUT: $ => token(tokens.OUTPUT),
  INTERNAL: $ => token(tokens.INTERNAL),
  RoundMoney: $ => token(tokens.RoundMoney),
  RoundDecimal: $ => token(tokens.RoundDecimal),
  IntToDec: $ => token(tokens.IntToDec),
  GetDay: $ => token(tokens.GetDay),
  GetMonth: $ => token(tokens.GetMonth),
  GetYear: $ => token(tokens.GetYear),
  FirstDayOfMonth: $ => token(tokens.FirstDayOfMonth),
  LastDayOfMonth: $ => token(tokens.LastDayOfMonth),
  DECIMAL_LITERAL: $ => token(tokens.DECIMAL_LITERAL),
  MONEY_AMOUNT: $ => token(tokens.MONEY_AMOUNT),
  LAW_INCLUDE: $ => token(tokens.LAW_INCLUDE),

  ALT: $ => token(tokens.ALT),
  AT_PAGE: $ => token(tokens.AT_PAGE),
  BEGIN_CODE: $ => token(tokens.BEGIN_CODE),
  BEGIN_DIRECTIVE: $ => token(tokens.BEGIN_DIRECTIVE),
  BEGIN_METADATA: $ => token(tokens.BEGIN_METADATA),
  COLON: $ => token(tokens.COLON),
  UIDENT: $ => token(tokens.UIDENT),
  DIRECTIVE_ARG: $ => token(tokens.DIRECTIVE_ARG),
  DOT: $ => token(tokens.DOT),
  COMMA: $ => token(tokens.COMMA),
  END_CODE: $ => token(tokens.END_CODE),
  END_DIRECTIVE: $ => token(tokens.END_DIRECTIVE),
  LIDENT: $ => token(tokens.LIDENT),
  INT_LITERAL: $ => token(tokens.INT_LITERAL),
  DATE_LITERAL: $ => token(tokens.DATE_LITERAL),
  LAW_HEADING: $ => token(tokens.LAW_HEADING),
  LAW_TEXT: $ => token(tokens.LAW_TEXT),
  LBRACE: $ => token(tokens.LBRACE),
  LPAREN: $ => token(tokens.LPAREN),
  LBRACKET: $ => token(tokens.LBRACKET),
  PERCENT: $ => token(tokens.PERCENT),
  PLUSPLUS: $ => token(tokens.PLUSPLUS),
  RBRACE: $ => token(tokens.RBRACE),
  RPAREN: $ => token(tokens.RPAREN),
  RBRACKET: $ => token(tokens.RBRACKET),
  SEMICOLON: $ => token(tokens.SEMICOLON),
  VERTICAL: $ => token(tokens.VERTICAL),

  PLUS: $ => token(seq(tokens.PLUS, token.immediate(tokens.OP_KIND_SUFFIX))),
  MINUS: $ => token(seq(tokens.MINUS, token.immediate(tokens.OP_KIND_SUFFIX))),
  MULT: $ => token(seq(tokens.MULT, token.immediate(tokens.OP_KIND_SUFFIX))),
  DIV: $ => token(seq(tokens.DIV, token.immediate(tokens.OP_KIND_SUFFIX))),

  EQUAL: $ => token(tokens.EQUAL),
  NOT_EQUAL: $ => token(tokens.NOT_EQUAL),
  GREATER: $ => token(seq(tokens.GREATER, token.immediate(tokens.OP_KIND_SUFFIX))),
  GREATER_EQUAL: $ => token(seq(tokens.GREATER_EQUAL, token.immediate(tokens.OP_KIND_SUFFIX))),
  LESSER: $ => token(seq(tokens.LESSER, token.immediate(tokens.OP_KIND_SUFFIX))),
  LESSER_EQUAL: $ => token(seq(tokens.LESSER_EQUAL, token.immediate(tokens.OP_KIND_SUFFIX))),

  AND: $ => token(tokens.AND),
  OR: $ => token(tokens.OR),
  XOR: $ => token(tokens.XOR),
  }
})
