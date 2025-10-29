var lang = "en"
if ('TREESITTER_CATALA_LANG' in process.env) {
  lang = process.env.TREESITTER_CATALA_LANG
}

const name = ("catala_"+lang)

const tokens_local = {
  en: {
    SCOPE: "scope",
    CONSEQUENCE: "consequence",
    DATA: "data",
    DEPENDS: /depends\s+on/,
    DECLARATION: "declaration",
    CONTEXT: "context",
    DECREASING: "down",
    INCREASING: "up",
    OF: "of",
    LIST: "list",
    OPTION: "optional",
    CONTAINS: "contains",
    ENUM: "enumeration",
    INTEGER: "integer",
    MONEY: "money",
    DECIMAL: "decimal",
    DATE: "date",
    DURATION: "duration",
    BOOLEAN: "boolean",
    POSITION: "code_location",
    SUM: "sum",
    FILLED: "fulfilled",
    DEFINITION: "definition",
    STATE: "state",
    LABEL: "label",
    EXCEPTION: "exception",
    DEFINED_AS: "equals",
    MATCH: "match",
    WILDCARD: "anything",
    TYPE: "type",
    WITH_PATT: /with\s+pattern/,
    UNDER_CONDITION: /under\s+condition/,
    IF: "if",
    THEN: "then",
    ELSE: "else",
    CONDITION: "condition",
    CONTENT: "content",
    STRUCT: "structure",
    ASSERTION: "assertion",
    WITH: "with",
    FOR: "for",
    ALL: "all",
    WE_HAVE: /we\s+have/,
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
    COMBINE: "combine",
    MAP_EACH: /map\s+each/,
    TO: /to/,
    INITIALLY: "initially",
    IMPOSSIBLE: "impossible",
    IS: "is",
    EMPTY: "empty",
    BUT_REPLACE: /but\s+replace/,
    CARDINAL: "number",
    YEAR: "year",
    MONTH: "month",
    DAY: "day",
    TRUE: "true",
    FALSE: "false",
    INPUT: "input",
    OUTPUT: "output",
    INTERNAL: "internal",
    Round: "round",
    DECIMAL_LITERAL: /-?[0-9]+\.[0-9]+/,
    MONEY_AMOUNT: /-?\$[0-9]([0-9,]*[0-9])?(\.[0-9]{1,2})?/,
    OP_KIND_SUFFIX: /[!.@^$]?/,
    LAW_INCLUDE: 'Include',
    MODULE_DEF: 'Module',
    MODULE_USE: 'Using',
    MODULE_ALIAS: 'as',
    MODULE_EXTERNAL: 'external',
  },
  fr: {
    SCOPE: /champ\s+d'application/,
    CONSEQUENCE: "conséquence",
    DATA: "donnée",
    DEPENDS: /dépend\s+de/,
    DECLARATION: "déclaration",
    CONTEXT: "contexte",
    DECREASING: "inférieur",
    INCREASING: "supérieur",
    OF: "de",
    LIST: "liste",
    OPTION: "optionnel",
    CONTAINS: "contient",
    ENUM: "énumération",
    INTEGER: "entier",
    MONEY: "argent",
    DECIMAL: "décimal",
    DATE: "date",
    DURATION: "durée",
    BOOLEAN: "booléen",
    POSITION: "position_source",
    SUM: "somme",
    FILLED: "rempli",
    DEFINITION: "définition",
    STATE: "état",
    LABEL: "étiquette",
    EXCEPTION: "exception",
    DEFINED_AS: /égal\s+à/,
    MATCH: "selon",
    WILDCARD: /n'importe\s+quel/,
    TYPE: "type",
    WITH_PATT: /sous\s+forme/,
    UNDER_CONDITION: /sous\s+condition/,
    IF: "si",
    THEN: "alors",
    ELSE: "sinon",
    CONDITION: "condition",
    CONTENT: "contenu",
    STRUCT: "structure",
    ASSERTION: "assertion",
    WITH: "avec",
    FOR: "pour",
    ALL: "tout",
    WE_HAVE: /on\s+a/,
    RULE: "règle",
    LET: "soit",
    EXISTS: "existe",
    IN: "dans",
    AMONG: "parmi",
    SUCH: "tel",
    THAT: "que",
    AND: "et",
    OR: "ou",
    XOR: /ou\s+bien/,
    NOT: "non",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    COMBINE: /combine/,
    MAP_EACH: /transforme\s+chaque/,
    TO: /en/,
    INITIALLY: "initialement",
    IMPOSSIBLE: "impossible",
    IS: "est",
    EMPTY: "vide",
    BUT_REPLACE: /mais\s+en\s+remplaçant/,
    CARDINAL: "nombre",
    YEAR: "an",
    MONTH: "mois",
    DAY: "jour",
    TRUE: "vrai",
    FALSE: "faux",
    INPUT: "entrée",
    OUTPUT: "résultat",
    INTERNAL: "interne",
    Round: "arrondi",
    DECIMAL_LITERAL: /-?[0-9]+,[0-9]+/,
    MONEY_AMOUNT: /-?[0-9]([0-9\p{Zs}]*[0-9])?(,[0-9]{1,2})?\p{Zs}*€/,
    OP_KIND_SUFFIX: /[!.@^€]?/,
    LAW_INCLUDE: 'Inclusion',
    MODULE_DEF: 'Module',
    MODULE_USE: /Usage\s+de/,
    MODULE_ALIAS: /en\s+tant\s+que/,
    MODULE_EXTERNAL: 'externe',
  },
  pl: {
    SCOPE: "zakres",
    CONSEQUENCE: "konsekwencja",
    DATA: "data",
    DEPENDS: /zalezy\s+od/,
    DECLARATION: "deklaracja",
    CONTEXT: "kontekst",
    DECREASING: "dół",
    INCREASING: "górę",
    OF: "z",
    LIST: "kolekcja",
    OPTION: "opcjonalny",
    CONTAINS: "zawiera",
    ENUM: "enumeracja",
    INTEGER: "calkowita",
    MONEY: "pieniądze",
    DECIMAL: "dziesiętny",
    DATE: "czas",
    DURATION: /czas\s+trwania/,
    BOOLEAN: "zerojedynkowy",
    POSITION: "code_location",
    SUM: "suma",
    FILLED: "spelnione",
    DEFINITION: "definicja",
    STATE: "stan",
    LABEL: "etykieta",
    EXCEPTION: "wyjątek",
    DEFINED_AS: "wynosi",
    MATCH: "pasuje",
    WILDCARD: "cokolwiek",
    TYPE: "typu",
    WITH_PATT: /ze\s+wzorem/,
    UNDER_CONDITION: /pod\s+warunkiem/,
    IF: "jezeli",
    THEN: "wtedy",
    ELSE: "inaczej",
    CONDITION: "warunek",
    CONTENT: "typu",
    STRUCT: "struktura",
    ASSERTION: "asercja",
    WITH: /wraz\s+z/,
    FOR: "dla",
    ALL: "wszystkie",
    WE_HAVE: "mamy",
    RULE: "zasada",
    LET: "niech",
    EXISTS: "istnieje",
    IN: "in",
    AMONG: "wśród",
    SUCH: /takie\s+ze/,
    THAT: "to",
    AND: "i",
    OR: "lub",
    XOR: "xor",
    NOT: "nie",
    MAXIMUM: "maximum",
    MINIMUM: "minimum",
    COMBINE: "łączyć",
    MAP_EACH: "plan każdy",
    TO: "do",
    INITIALLY: "początkowo",
    IMPOSSIBLE: "niemożliwe",
    IS: "jest",
    EMPTY: "pusty",
    BUT_REPLACE: /ale\s+zastąpić/,
    CARDINAL: "liczba",
    YEAR: "rok",
    MONTH: "miesiac",
    DAY: "dzien",
    TRUE: "prawda",
    FALSE: "falsz",
    INPUT: "wejście",
    OUTPUT: "wyjście",
    INTERNAL: "wewnętrzny",
    Round: "zaokrąglony",
    DECIMAL_LITERAL: /-?[0-9]+\.[0-9]+/,
    MONEY_AMOUNT: /-?[0-9]([0-9,]*[0-9])?(\.[0-9]{1,2})?\p{Zs}*PLN/,
    OP_KIND_SUFFIX: /[!.@^$]?/,
    LAW_INCLUDE: 'Include',
    MODULE_DEF: 'Module',
    MODULE_USE: 'Using',
    MODULE_ALIAS: 'as',
    MODULE_EXTERNAL: 'external',
  }
}

// International tokens needing no translation (so far)
const tokens_international = {
  ALT: '--',
  AT_PAGE: /@\s*p.\s*[0-9]+/,
  // No need for immediate tokens for fences/directives: by
  // construction, it can only start after a newline and we force a
  // following newline in the grammar
  BEGIN_CODE: '```catala',
  BEGIN_DIRECTIVE: '>',
  BEGIN_METADATA: '```catala-metadata',
  END_CODE: '```',
  BEGIN_VERB_BLOCK: /```[^\n]*/,
  COLON: ':',
  UIDENT: /[\p{Lu}](\p{L}|\p{N}|[_'])*/,
  DIRECTIVE_ARG: /\S+/,
  DIV: '/',
  DOT: '.',
  COMMA: ',',
  EQUAL: '=',
  NOT_EQUAL: '!=',
  GREATER: '>',
  GREATER_EQUAL: '>=',
  LIDENT: /\p{Ll}(\p{L}|\p{N}|[_'])*/,
  INT_LITERAL: /-?[0-9]+/,
  TUPLE_INDEX: /[0-9]+/,
  DATE_LITERAL: /[|][0-9]{4}-[0-9]{2}-[0-9]{2}[|]/,
  LAW_LABEL: /\S[^\n]*/,
  LAW_WORD: token.immediate(prec(-1,/\S+/)),
  LAW_SHARP: token.immediate(prec(1,/#+/)),
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
}

const tokens = Object.assign({}, tokens_local[lang], tokens_international)

const inline = $ => [
  // $.law_text,
]

module.exports = grammar({
  name: name,
  inline: inline,
  word: $ => $._LIDENT,
  extras: $ => [ /\s/, $.COMMENT, $.ATTRIBUTE ],
  precedences: $ => [[
    'keyword',
    'path',
    'enum_scope',
    'constr',
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
  conflicts: $ => [
    [$.module_name, $.enum_struct_name, $.constructor_name],
    [$.module_name, $.enum_struct_name],
    [$.module_name, $.scope_name]
  ],
  rules: {
    source_file: $ =>
      repeat(choice(
        $._hardnl,
        $.law_block,
        $.code_block,
        $.directive,
        $.verb_block,
      )),

    ATTRIBUTE: $ => seq ('#[', /([^\]\\]|\\(.|\n))*]/),
    COMMENT: $ => seq('#', /[^\n]*/),
    _hspace: $ => token.immediate(/[\p{Zs}\t]+/),
    _newline: $ => token.immediate(/[\p{Zs}\t]*\r?\n[\p{Zs}\t]*/),
    _hardnl: $ => token.immediate(/[\p{Zs}\t]*\r?\n/),
    // newline tokens need to be explicit outside of code blocks, to properly
    // detect beginnings of lines; add them to the choice of toplevel items and make all tokens "immediate"
    _law_text: $ => prec.right(choice(
      $.LAW_WORD,
      seq($._law_text, optional($._hspace), choice($.LAW_WORD, $.LAW_SHARP))
    )),
    law_text: $ => seq(optional($._hspace), $._law_text, optional($._hspace)),

    type_variable: $ => $._LIDENT,
    primitive_typ: $ =>
      prec.right(
        choice($.INTEGER, $.DECIMAL, $.BOOLEAN, $.MONEY, $.DURATION, $.DATE, $.POSITION,
               $.qenum_struct, $.WILDCARD, seq($.WILDCARD, $.OF, $.TYPE, $.type_variable))),
    typ_list: $ =>
      seq(repeat(seq($.typ, $.COMMA)), $.typ),
    typ: $ => choice(
      $.primitive_typ,
      seq ($.LIST, $.OF, $.typ),
      seq ($.OPTION, $.OF, $.typ),
      seq ($.LPAREN, $.typ_list, $.RPAREN)
    ),

    variable: $ => $._LIDENT,
    field_name: $ => $._LIDENT,
    label: $ => $._LIDENT,
    state_label: $ => $._LIDENT,

    module_name: $ => prec.dynamic(1,$._UIDENT),
    scope_name: $ => $._UIDENT,
    enum_struct_name: $ => $._UIDENT,

    constructor_name: $ => $._UIDENT,

    scope_var: $ => seq(repeat(seq($.variable, $.DOT)),$.variable),

    _path: $ => choice(
      seq($.module_name, $.DOT),
      seq($._path, $.module_name, $.DOT)
    ),

    qscope: $ => seq(optional($._path), $.scope_name),
    qenum_struct: $ => seq(optional($._path), $.enum_struct_name),

    qconstructor: $ =>
      seq(optional(seq($.qenum_struct, $.DOT)), $.constructor_name),

    qfield: $ =>
      seq(optional(seq($.qenum_struct, $.DOT)), $.field_name),

    var_list: $ =>
      seq(repeat(seq($.variable, $.COMMA)), $.variable),

    binder: $ => choice(
      $.variable,
      seq($.LPAREN, $.var_list, $.RPAREN),
    ),

    _expr: $ =>
      choice(
        $.e_variable,
        $.e_var_state,
        $.literal,
        $.builtin,
        $.e_paren,
        $.e_tuple,
        $.e_collection,
        $.e_apply,
        $.e_scope_apply,
        $.e_test_match,
        $.e_but_replace,
        $.e_coll_contains,
        $.e_coll_sum,
        $.e_coll_map,
        $.e_coll_extremum,
        $.e_unop,
        $.e_binop,
        $.e_coll_exists,
        $.e_coll_forall,
        $.e_match,
        $.e_ifthenelse,
        $.e_letin,
        $.e_fieldaccess,
        $.e_struct,
        $.e_enum,
        $.e_coll_filter,
        $.e_coll_filter_map,
        $.e_coll_arg_extremum,
        $.e_coll_fold,
      ),

    e_variable: $ =>
      prec.right(seq(optional($._path), $.variable)),

    e_var_state: $ =>
      seq($.variable, $.STATE, $.state_label),

    e_paren: $ =>
      seq($.LPAREN, $._expr, $.RPAREN),

    tuple_contents: $ =>
      seq(repeat1(seq($._expr, $.COMMA)), $._expr),

    e_tuple: $ =>
      seq($.LPAREN, $.tuple_contents, $.RPAREN),

    collection_elements: $ =>
      seq(repeat(seq($._expr, $.SEMICOLON)), $._expr),

    e_collection: $ =>
      seq($.LBRACKET, optional($.collection_elements), $.RBRACKET),

    fun_argument: $ => prec.right('apply', $._expr),
    fun_arguments: $ => prec.right(seq(repeat(seq($.fun_argument, $.COMMA)), $.fun_argument)),
    e_apply: $ =>
      prec.right('apply', seq(field('fun', $._expr),
                              $.OF,
                              field('args', $.fun_arguments))),
    e_scope_apply: $ =>
      prec.right('apply', seq($.OUTPUT, $.OF, $.qscope,
                              optional(seq($.WITH, $.LBRACE,
                                           optional($.struct_content_fields),
                                           $.RBRACE)))),
    e_test_match: $ =>
      prec.right('apply', seq(field('arg', $._expr),
                              $.WITH_PATT, $.qconstructor, optional(seq($.CONTENT, $.variable)))),
    e_but_replace: $ =>
      prec.right('apply', seq($._expr, $.BUT_REPLACE,
                              $.LBRACE, $.struct_content_fields, $.RBRACE)),
    e_coll_contains: $ =>
      prec.right('apply', seq(field('coll', $._expr), $.CONTAINS, field('elt', $._expr))),
    e_coll_sum: $ =>
      prec.right('apply', seq($.SUM, $.primitive_typ, $.OF, field('coll', $._expr))),
    e_coll_map: $ =>
      prec.right(seq($.MAP_EACH, $.binder, $.AMONG,
                     field('coll', $._expr), $.TO, field('mapf', $._expr))),
    e_coll_fold: $ =>
      prec.right('top_expr', seq($.COMBINE, $.ALL, $.binder, $.AMONG, field('coll', $._expr),
                             $.IN, $.binder, $.INITIALLY, field('acc', $._expr),
                             $.WITH, field('mapf', $._expr))),
    e_coll_extremum: $ =>
      prec.right(seq(choice($.MINIMUM, $.MAXIMUM), $.OF, field('coll', $._expr),
                     optional(seq($.OR, $.IF, $.LIST, $.EMPTY, $.THEN, field('dft', $._expr))))),

    e_unop: $ =>
      prec.right('unop_expr', choice(
        seq($.NOT, $._expr),
        seq($.MINUS, $._expr),
      )),

    e_binop: $ =>
      choice(
        prec.left('MULT', seq(field('lhs', $._expr), field('op', $.MULT), field('rhs', $._expr))),
        prec.left('MULT', seq(field('lhs', $._expr), field('op', $.DIV), field('rhs', $._expr))),
        prec.left('PLUS', seq(field('lhs', $._expr), field('op', $.PLUS), field('rhs', $._expr))),
        prec.left('PLUS', seq(field('lhs', $._expr), field('op', $.MINUS), field('rhs', $._expr))),
        prec.left('PLUS', seq(field('lhs', $._expr), field('op', $.PLUSPLUS), field('rhs', $._expr))),
        prec.left('GREATER', seq(field('lhs', $._expr), field('op', $.LESSER), field('rhs', $._expr))),
        prec.left('GREATER', seq(field('lhs', $._expr), field('op', $.LESSER_EQUAL), field('rhs', $._expr))),
        prec.left('GREATER', seq(field('lhs', $._expr), field('op', $.GREATER), field('rhs', $._expr))),
        prec.left('GREATER', seq(field('lhs', $._expr), field('op', $.GREATER_EQUAL), field('rhs', $._expr))),
        prec.left('GREATER', seq(field('lhs', $._expr), field('op', $.EQUAL), field('rhs', $._expr))),
        prec.left('GREATER', seq(field('lhs', $._expr), field('op', $.NOT_EQUAL), field('rhs', $._expr))),
        prec.right('AND', seq(field('lhs', $._expr), field('op', $.AND), field('rhs', $._expr))),
        prec.right('AND', seq(field('lhs', $._expr), field('op', $.OR), field('rhs', $._expr))),
        prec.right('AND', seq(field('lhs', $._expr), field('op', $.XOR), field('rhs', $._expr))),
      ),

    e_coll_exists: $ =>
      prec.right(seq($.EXISTS, $.binder, $.AMONG, field('coll', $._expr),
          $.SUCH, $.THAT, field('cond', $._expr))),
    e_coll_forall: $ =>
      prec.right(seq($.FOR, $.ALL, $.binder, $.AMONG, field('coll', $._expr),
        $.WE_HAVE, field('cond', $._expr))),
    e_match: $ =>
      prec.right(seq($.MATCH, field('arg', $._expr), $.WITH_PATT,
        repeat1(seq($.ALT, $.match_case)))),
    e_ifthenelse: $ =>
      prec.right(seq($.IF, field('cond', $._expr), $.THEN, field('then', $._expr), $.ELSE, field('else', $._expr))),
    e_letin: $ =>
      prec.right(seq($.LET, $.binder, $.DEFINED_AS, field('def', $._expr), $.IN, field('body', $._expr))),

    match_case: $ =>
      prec.right(seq(choice($.WILDCARD, seq($.qconstructor, optional(seq($.CONTENT, $.binder)))),
                     $.COLON, $._expr)),

    e_fieldaccess: $ =>
      prec.left('DOT', seq($._expr, $.DOT, choice($.qfield, $.TUPLE_INDEX))),

    e_struct: $ =>
      seq($.qenum_struct, $.LBRACE, $.struct_content_fields, $.RBRACE),
    e_enum: $ =>
      prec.right(seq($.qconstructor, optional(seq($.CONTENT, $._expr)))),
    e_coll_filter: $ =>
      prec.right(seq($.LIST, $.OF, $.binder, $.AMONG, field('coll', $._expr), $.SUCH, $.THAT, field('cond', $._expr))),
    e_coll_filter_map: $ =>
      prec.right(
          seq($.MAP_EACH, $.binder, $.AMONG, field('coll', $._expr),
              $.SUCH, $.THAT, field('cond', $._expr), $.TO, field('mapf', $._expr))
      ),
    e_coll_arg_extremum: $ =>
      prec.right(seq($.CONTENT, $.OF, $.binder, $.AMONG, field('coll', $._expr),
                     $.SUCH, $.THAT, field('mapf', $._expr), $.IS, choice($.MINIMUM,$.MAXIMUM),
                     optional(seq($.OR, $.IF, $.LIST, $.EMPTY, $.THEN, field('dft', $._expr))))),

    struct_content_field: $ =>
      seq($.qfield, $.COLON, $._expr),
    struct_content_fields: $ =>
      repeat1(seq($.ALT, $.struct_content_field)),

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
    builtin: $ =>
      choice(
        $.IMPOSSIBLE,
        $.CARDINAL,
        $.DECIMAL,
        $.MONEY,
        $.Round,
      ),

    expression: $ => $._expr,

    rule_parameters: $ => seq($.variable, repeat(seq($.COMMA, $.variable))),

    rule: $ =>
      seq(
        optional(seq($.LABEL, $.label)),
        optional(seq($.EXCEPTION, optional($.label))),
        $.RULE,
        field('name', $.scope_var),
        optional(seq($.OF, $.rule_parameters)),
        optional(seq($.STATE, $.state_label)),
        optional(seq($.UNDER_CONDITION, field('condition', $.expression), $.CONSEQUENCE)),
        field('body', seq(optional($.NOT), $.FILLED))
      ),

    definition: $ =>
      seq(
        optional(seq($.LABEL, $.label)),
        optional(seq($.EXCEPTION, optional($.label))),
        $.DEFINITION,
        field('name', $.scope_var),
        optional(seq($.OF, $.rule_parameters)),
        optional(seq($.STATE, $.state_label)),
        optional(seq($.UNDER_CONDITION, field('condition', $.expression), $.CONSEQUENCE)),
        $.DEFINED_AS,
        field('body', $.expression)
      ),

    assertion: $ =>
      seq(
        $.ASSERTION,
        (optional(seq($.UNDER_CONDITION, field('condition', $.expression),
                      $.CONSEQUENCE)),
         field('body', $.expression)),
      ),

    rounding_mode: $ =>
      seq($.DATE, $.Round, choice($.INCREASING, $.DECREASING)),

    scope: $ =>
      seq($.SCOPE, field('name', $.scope_name),
          optional(seq($.UNDER_CONDITION, field('condition', $.expression))),
          $.COLON,
          field('body',
                repeat(choice($.rule, $.definition, $.assertion, $.rounding_mode)))),
    // The actual syntax is repeat1, but this is better for incomplete code

    scope_decl_item_attribute: $ =>
      choice(
        seq(choice($.CONTEXT, $.INPUT), optional($.OUTPUT)),
        $.INTERNAL,
        $.OUTPUT
      ),
    param_decl: $ => seq($.variable, $.CONTENT, $.typ),
    params_decl: $ =>
      seq(repeat(seq($.param_decl, $.COMMA)), $.param_decl),
    _depends_stance: $ =>
      seq($.DEPENDS, choice(seq($.LPAREN, $.params_decl, $.RPAREN),
                            $.params_decl)),
    scope_decl_item: $ =>
      seq(optional($.scope_decl_item_attribute),
          choice(
            seq($.variable,
                choice(seq($.CONTENT, $.typ),$.CONDITION),
                optional($._depends_stance),
                repeat(seq($.STATE, $.state_label))),
            seq($.variable, $.SCOPE, $.qscope)
          )),
    scope_decl: $ =>
      seq($.DECLARATION, $.SCOPE, field('name', $.scope_name), $.COLON,
          field('body', repeat($.scope_decl_item))),
    // The actual syntax is repeat1, but this is better for incomplete code

    struct_decl_item: $ =>
      seq(
        choice(seq($.DATA, $.field_name, $.CONTENT, $.typ),
               seq($.CONDITION, $.field_name)),
        optional($._depends_stance)
      ),
    struct_decl: $ =>
      seq($.DECLARATION, $.STRUCT, field('name', $.enum_struct_name), $.COLON,
          field('body', repeat($.struct_decl_item))),

    enum_decl_item: $ =>
      seq($.constructor_name, optional(seq($.CONTENT, $.typ))),
    enum_decl: $ =>
      seq($.DECLARATION, $.ENUM, field('name', $.enum_struct_name), $.COLON,
          field('body', repeat(seq($.ALT, $.enum_decl_item)))),

    toplevel_def: $ =>
      seq(
        $.DECLARATION, field('name', $.variable), $.CONTENT, $.typ,
        optional($._depends_stance),
        optional(seq($.DEFINED_AS, field('body', $.expression)))
      ),

    _code: $ =>
      repeat1(choice(
        $.scope,
        $.scope_decl,
        $.struct_decl,
        $.enum_decl,
        $.toplevel_def
      )),

    begin_code_fence: $ =>
      seq($.BEGIN_CODE, $._hardnl),

    begin_metadata_fence: $ =>
      seq($.BEGIN_METADATA, $._hardnl),

    end_block_fence: $ =>
        seq($.END_CODE, $._hardnl),

    code_block: $ =>
      seq(
        optional($._hspace),
        choice(
          $.begin_code_fence,
          $.begin_metadata_fence,
        ),
        optional($._code),
        $.end_block_fence
      ),

    begin_verb_block_fence: $ =>
      seq($.BEGIN_VERB_BLOCK, $._hardnl),

    verb_block: $ =>
      seq(
        optional($._hspace),
        $.begin_verb_block_fence,
        repeat1(seq(prec(-1,token.immediate(/.*/)),$._newline)),
        $.end_block_fence
      ),

    directive: $ =>
    seq(
      $.BEGIN_DIRECTIVE,
      choice(
        seq($.LAW_INCLUDE, $.COLON,
            repeat1($.DIRECTIVE_ARG), optional($.AT_PAGE)),
        seq($.MODULE_DEF, $.module_name, optional($.MODULE_EXTERNAL)),
        seq($.MODULE_USE, $.module_name, optional(seq($.MODULE_ALIAS, $.module_name)))
      ),
      $._newline
    ),

    law_heading: $ =>
    seq(optional($._hspace),
        $.LAW_SHARP,
        repeat(seq(optional($._hspace), choice($.LAW_WORD, $.LAW_SHARP))),
        optional($._hspace),
        optional(seq(token.immediate('|'), $.LAW_LABEL))
       ),

    law_block: $ =>
    prec.right(-1, repeat1(
      seq(choice($.law_text, $.law_heading),
          prec(-1,repeat1($._hardnl))))),

  SCOPE: $ => token(tokens.SCOPE),
  CONSEQUENCE: $ => token(tokens.CONSEQUENCE),
  DATA: $ => token(tokens.DATA),
  DEPENDS: $ => token(tokens.DEPENDS),
  DECLARATION: $ => token(tokens.DECLARATION),
  CONTEXT: $ => token(tokens.CONTEXT),
  DECREASING: $ => token(tokens.DECREASING),
  INCREASING: $ => token(tokens.INCREASING),
  OF: $ => token(tokens.OF),
  LIST: $ => token(tokens.LIST),
  OPTION: $ => token(tokens.OPTION),
  CONTAINS: $ => token(tokens.CONTAINS),
  ENUM: $ => token(tokens.ENUM),
  INTEGER: $ => token(tokens.INTEGER),
  MONEY: $ => token(tokens.MONEY),
  DECIMAL: $ => token(tokens.DECIMAL),
  DATE: $ => token(tokens.DATE),
  DURATION: $ => token(tokens.DURATION),
  BOOLEAN: $ => token(tokens.BOOLEAN),
  POSITION: $ => token(tokens.POSITION),
  SUM: $ => token(tokens.SUM),
  FILLED: $ => token(tokens.FILLED),
  DEFINITION: $ => token(tokens.DEFINITION),
  STATE: $ => token(tokens.STATE),
  LABEL: $ => token(tokens.LABEL),
  EXCEPTION: $ => token(tokens.EXCEPTION),
  DEFINED_AS: $ => token(tokens.DEFINED_AS),
  MATCH: $ => token(tokens.MATCH),
  WILDCARD: $ => token(tokens.WILDCARD),
  TYPE: $ => token(tokens.TYPE),
  WITH_PATT: $ => token(tokens.WITH_PATT),
  UNDER_CONDITION: $ => token(tokens.UNDER_CONDITION),
  IF: $ => token(tokens.IF),
  THEN: $ => token(tokens.THEN),
  ELSE: $ => token(tokens.ELSE),
  CONDITION: $ => token(tokens.CONDITION),
  CONTENT: $ => token(tokens.CONTENT),
  STRUCT: $ => token(tokens.STRUCT),
  ASSERTION: $ => token(tokens.ASSERTION),
  WITH: $ => token(tokens.WITH),
  FOR: $ => token(tokens.FOR),
  ALL: $ => token(tokens.ALL),
  WE_HAVE: $ => token(tokens.WE_HAVE),
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
  COMBINE: $ => token(tokens.COMBINE),
  MAP_EACH: $ => token(tokens.MAP_EACH),
  TO: $ => token(tokens.TO),
  INITIALLY: $ => token(tokens.INITIALLY),
  IMPOSSIBLE: $ => token(tokens.IMPOSSIBLE),
  IS: $ => token(tokens.IS),
  EMPTY: $ => token(tokens.EMPTY),
  BUT_REPLACE: $ => token(tokens.BUT_REPLACE),
  CARDINAL: $ => token(tokens.CARDINAL),
  YEAR: $ => token(tokens.YEAR),
  MONTH: $ => token(tokens.MONTH),
  DAY: $ => token(tokens.DAY),
  TRUE: $ => token(tokens.TRUE),
  FALSE: $ => token(tokens.FALSE),
  INPUT: $ => token(tokens.INPUT),
  OUTPUT: $ => token(tokens.OUTPUT),
  INTERNAL: $ => token(tokens.INTERNAL),
  Round: $ => token(tokens.Round),
  DECIMAL_LITERAL: $ => token(tokens.DECIMAL_LITERAL),
  MONEY_AMOUNT: $ => token(tokens.MONEY_AMOUNT),
  LAW_INCLUDE: $ => token(tokens.LAW_INCLUDE),
  MODULE_DEF: $ => token(tokens.MODULE_DEF),
  MODULE_USE: $ => token(tokens.MODULE_USE),
  MODULE_ALIAS: $ => token(tokens.MODULE_ALIAS),
  MODULE_EXTERNAL: $ => token(tokens.MODULE_EXTERNAL),

  ALT: $ => token(tokens.ALT),
  AT_PAGE: $ => token(tokens.AT_PAGE),
  BEGIN_CODE: $ => token(tokens.BEGIN_CODE),
  BEGIN_DIRECTIVE: $ => token(tokens.BEGIN_DIRECTIVE),
  BEGIN_METADATA: $ => token(tokens.BEGIN_METADATA),
  BEGIN_VERB_BLOCK: $ => token(tokens.BEGIN_VERB_BLOCK),
  COLON: $ => token(tokens.COLON),
  _UIDENT: $ => token(tokens.UIDENT),
  DIRECTIVE_ARG: $ => token(tokens.DIRECTIVE_ARG),
  DOT: $ => token(tokens.DOT),
  COMMA: $ => token(tokens.COMMA),
  END_CODE: $ => token(tokens.END_CODE),
  _LIDENT: $ => token(tokens.LIDENT),
  INT_LITERAL: $ => token(tokens.INT_LITERAL),
  TUPLE_INDEX: $ => token(tokens.TUPLE_INDEX),
  DATE_LITERAL: $ => token(tokens.DATE_LITERAL),
  LAW_LABEL: $ => token(tokens.LAW_LABEL),
  LAW_WORD: $ => token(tokens.LAW_WORD),
  LAW_SHARP: $ => token(tokens.LAW_SHARP),
  LBRACE: $ => token(tokens.LBRACE),
  LPAREN: $ => token(tokens.LPAREN),
  LBRACKET: $ => token(tokens.LBRACKET),
  PERCENT: $ => token(tokens.PERCENT),
  PLUSPLUS: $ => token(tokens.PLUSPLUS),
  RBRACE: $ => token(tokens.RBRACE),
  RPAREN: $ => token(tokens.RPAREN),
  RBRACKET: $ => token(tokens.RBRACKET),
  SEMICOLON: $ => token(tokens.SEMICOLON),

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
