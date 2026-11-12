open Locale

let () =
  let open Format in
  let languages = Languages.languages () in
  printf "@[<h>%a@]"
    (pp_print_list ~pp_sep:pp_print_space (fun fmt (_, l) ->
         pp_print_string fmt l.code))
    languages
