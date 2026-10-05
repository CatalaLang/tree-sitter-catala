open Language_t

let gen_tokens (lang : Languages.lang) =
  let to_js s =
    let has_space = String.contains s ' ' in
    let to_regexp =
      let buf = Buffer.create 40 in
      fun s ->
        Buffer.clear buf;
        Buffer.add_char buf '/';
        String.iter
          (function
            | ' ' -> Buffer.add_string buf "\\s+" | c -> Buffer.add_char buf c)
          s;
        Buffer.add_char buf '/';
        Buffer.contents buf
    in
    if has_space then to_regexp s else "\"" ^ s ^ "\""
  in
  let kw = lang.keywords in
  let ty = lang.builtins.types in
  let fs = lang.builtins.functions in
  let dirs = lang.directives in
  let decimal_literal =
    Printf.sprintf "/-?[0-9]+\\%s[0-9]+/"
      lang.specific_delimiters.decimal_separator
  in
  let money_amount =
    let re_space = "\\p{Zs}" in
    let dl = lang.specific_delimiters in
    let prefix, suffix =
      if dl.money_unit_position = `Left then dl.money_unit, ""
      else "", re_space ^ "*" ^ dl.money_unit
    in
    let money_delim =
      if dl.money_delim = " " then re_space else dl.money_delim
    in
    Printf.sprintf {|/-?%s[0-9]([0-9%s]*[0-9])?(\%s[0-9]{1,2})?%s/}|} prefix
      money_delim dl.decimal_separator suffix
  in
  let op_kind_suffix =
    Printf.sprintf "/[!.@^%s]?/" lang.specific_delimiters.money_unit
  in
  List.map
    (fun (k, v) -> k, to_js v)
    [
      "SCOPE", kw.scope;
      "CONSEQUENCE", kw.consequence;
      "DATA", kw.data;
      "DEPENDS", kw.depends;
      "DECLARATION", kw.declaration;
      "CONTEXT", kw.context;
      "DECREASING", kw.decreasing;
      "INCREASING", kw.increasing;
      "OF", kw.of_;
      "LIST", kw.list;
      "OPTION", kw.option;
      "CONTAINS", kw.contains;
      "ENUM", kw.enum;
      "INTEGER", ty.integer;
      "MONEY", ty.money;
      "DECIMAL", ty.decimal;
      "DATE", ty.date;
      "DURATION", ty.duration;
      "BOOLEAN", ty.boolean;
      "POSITION", ty.position;
      "SUM", kw.sum;
      "FILLED", kw.filled;
      "DEFINITION", kw.definition;
      "STATE", kw.state;
      "LABEL", kw.label;
      "EXCEPTION", kw.exception_;
      "DEFINED_AS", kw.defined_as;
      "MATCH", kw.match_;
      "WILDCARD", kw.wildcard;
      "TYPE", kw.type_;
      "WITH_PATT", kw.with_;
      "UNDER_CONDITION", kw.under_condition;
      "IF", kw.if_;
      "THEN", kw.then_;
      "ELSE", kw.else_;
      "CONDITION", kw.condition;
      "CONTENT", kw.content;
      "STRUCT", kw.struct_;
      "ASSERTION", kw.assertion;
      "WITH", kw.with_v;
      "FOR", kw.for_;
      "ALL", kw.all;
      "WE_HAVE", kw.we_have;
      "RULE", kw.rule;
      "LET", kw.let_;
      "EXISTS", kw.exists;
      "IN", kw.in_;
      "AMONG", kw.among;
      "SUCH", kw.such;
      "THAT", kw.that;
      "AND", kw.and_;
      "OR", kw.or_;
      "XOR", kw.xor;
      "NOT", kw.not_;
      "MAXIMUM", kw.maximum;
      "MINIMUM", kw.minimum;
      "COMBINE", kw.combine;
      "MAP_EACH", kw.map_each;
      "TO", kw.to_;
      "INITIALLY", kw.initially;
      "IMPOSSIBLE", fs.impossible;
      "IS", kw.is;
      "OR_EMPTY", kw.or_if_list_empty;
      "BUT_REPLACE", kw.but_replace;
      "CARDINAL", fs.cardinal;
      "SORT", kw.sort;
      "ORDER_INCREASING", kw.order_ascending;
      "ORDER_DECREASING", kw.order_descending;
      "AND_THEN", kw.and_then;
      "YEAR", kw.year;
      "MONTH", kw.month;
      "DAY", kw.day;
      "TRUE", kw.true_;
      "FALSE", kw.false_;
      "INPUT", kw.input;
      "OUTPUT", kw.output;
      "INTERNAL", kw.internal;
      "ROUND", fs.round;
      "DECIMAL_LITERAL", decimal_literal;
      "MONEY_AMOUNT", money_amount;
      "OP_KIND_SUFFIX", op_kind_suffix;
      "LAW_INCLUDE", dirs.law_include;
      "MODULE_DEF", dirs.module_def;
      "MODULE_USE", dirs.module_use;
      "MODULE_ALIAS", dirs.module_alias;
      "EXTERNAL", dirs.external_;
    ]

let pp_comma = fun fmt () -> Format.fprintf fmt ",@ "

let pp_tokens_local fmt (lang : Language_t.language) =
  Format.fprintf fmt "@[<v 2>const tokens_local = {@ %a@;<0 -2>}@]@\n@\n"
    Format.(
      pp_print_list ~pp_sep:pp_comma (fun fmt (v, s) ->
          fprintf fmt "%s: %s" v s))
    (gen_tokens lang)

let () =
  let languages = Languages.languages () in
  let err s =
    Format.eprintf "%s@\n@[<h 2>Registered languages:@ %a@]@." s
      Format.(
        pp_print_list ~pp_sep:pp_comma (fun fmt (_, l) ->
            pp_print_string fmt l.code))
      languages;
    exit 1
  in
  let lang =
    if Array.length Sys.argv < 2 then
      err "Bad input, expected a language as argument"
    else
      let arg = String.uncapitalize_ascii Sys.argv.(1) in
      try
        List.find
          (fun (_code, lang) -> arg = lang.code || arg = lang.name)
          languages
        |> snd
      with Not_found -> err ("Unknown language argument " ^ Sys.argv.(1))
  in
  Format.printf "const lang_name = \"%s\";@\n@\n"
    (String.uncapitalize_ascii lang.code);
  pp_tokens_local Format.std_formatter lang;
  Format.printf "module.exports = {lang_name, tokens_local}@."
