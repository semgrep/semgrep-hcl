(* Generated by ocaml-tree-sitter. *)
(*
   hcl grammar

   entrypoint: config_file
*)

open! Sexplib.Conv
open Tree_sitter_run

type pat_780550e = Token.t (* pattern [0-9]+ *)
[@@deriving sexp_of]

type quoted_template_end = Token.t
[@@deriving sexp_of]

type pat_b66053b = Token.t (* pattern 0x[0-9a-zA-Z]+ *)
[@@deriving sexp_of]

type bool_lit = [
    `True of Token.t (* "true" *)
  | `False of Token.t (* "false" *)
]
[@@deriving sexp_of]

type template_interpolation_end = Token.t
[@@deriving sexp_of]

type pat_e950a1b = Token.t (* pattern [0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)? *)
[@@deriving sexp_of]

type heredoc_start = [
    `LTLT of Token.t (* "<<" *)
  | `LTLTDASH of Token.t (* "<<-" *)
]
[@@deriving sexp_of]

type template_literal_chunk = Token.t
[@@deriving sexp_of]

type identifier = Token.t
[@@deriving sexp_of]

type quoted_template_start = Token.t
[@@deriving sexp_of]

type template_interpolation_start = Token.t
[@@deriving sexp_of]

type ellipsis = Token.t
[@@deriving sexp_of]

type heredoc_identifier = Token.t
[@@deriving sexp_of]

type template_directive = [
    `PERC_5eef7bb of Token.t (* "%{if TODO" *)
  | `PERC_58c37dd of Token.t (* "%{for TODO" *)
]
[@@deriving sexp_of]

type numeric_lit = [
    `Pat_e950a1b of pat_e950a1b (*tok*)
  | `Pat_b66053b of pat_b66053b (*tok*)
]
[@@deriving sexp_of]

type template_literal = template_literal_chunk (*tok*) list (* one or more *)
[@@deriving sexp_of]

type string_lit = (
    quoted_template_start (*tok*) * template_literal
  * quoted_template_end (*tok*)
)
[@@deriving sexp_of]

type get_attr = (Token.t (* "." *) * identifier (*tok*))
[@@deriving sexp_of]

type literal_value = [
    `Nume_lit of numeric_lit
  | `Bool_lit of bool_lit
  | `Null_lit of Token.t (* "null" *)
  | `Str_lit of string_lit
]
[@@deriving sexp_of]

type anon_choice_get_attr_7bbf24f = [
    `Get_attr of get_attr
  | `Index of index
]

and anon_choice_temp_lit_c764a73 = [
    `Temp_lit of template_literal
  | `Temp_interp of (
        template_interpolation_start (*tok*)
      * Token.t (* "~" *) option
      * expression option
      * Token.t (* "~" *) option
      * template_interpolation_end (*tok*)
    )
  | `Temp_dire of template_directive
]

and binary_operation = [
    `Expr_term_choice_STAR_expr_term of (
        expr_term
      * [
            `STAR of Token.t (* "*" *)
          | `SLASH of Token.t (* "/" *)
          | `PERC of Token.t (* "%" *)
        ]
      * expr_term
    )
  | `Expr_term_choice_PLUS_expr_term of (
        expr_term
      * [ `PLUS of Token.t (* "+" *) | `DASH of Token.t (* "-" *) ]
      * expr_term
    )
  | `Expr_term_choice_GT_expr_term of (
        expr_term
      * [
            `GT of Token.t (* ">" *)
          | `GTEQ of Token.t (* ">=" *)
          | `LT of Token.t (* "<" *)
          | `LTEQ of Token.t (* "<=" *)
        ]
      * expr_term
    )
  | `Expr_term_choice_EQEQ_expr_term of (
        expr_term
      * [ `EQEQ of Token.t (* "==" *) | `BANGEQ of Token.t (* "!=" *) ]
      * expr_term
    )
  | `Expr_term_choice_AMPAMP_expr_term of (
        expr_term
      * [ `AMPAMP of Token.t (* "&&" *) ]
      * expr_term
    )
  | `Expr_term_choice_BARBAR_expr_term of (
        expr_term
      * [ `BARBAR of Token.t (* "||" *) ]
      * expr_term
    )
]

and collection_value = [
    `Tuple of (Token.t (* "[" *) * tuple_elems option * Token.t (* "]" *))
  | `Obj of object_
]

and expr_term = [
    `Lit_value of literal_value
  | `Temp_expr of template_expr
  | `Coll_value of collection_value
  | `Var_expr of identifier (*tok*)
  | `Func_call of (
        identifier (*tok*)
      * Token.t (* "(" *)
      * function_arguments option
      * Token.t (* ")" *)
    )
  | `For_expr of for_expr
  | `Oper of operation
  | `Expr_term_index of (expr_term * index)
  | `Expr_term_get_attr of (expr_term * get_attr)
  | `Expr_term_splat of (expr_term * splat)
  | `LPAR_exp_RPAR of (Token.t (* "(" *) * expression * Token.t (* ")" *))
]

and expression = [
    `Expr_term of expr_term
  | `Cond of (
        expression * Token.t (* "?" *) * expression * Token.t (* ":" *)
      * expression
    )
]

and for_cond = (Token.t (* "if" *) * expression)

and for_expr = [
    `For_tuple_expr of (
        Token.t (* "[" *)
      * for_intro
      * expression
      * for_cond option
      * Token.t (* "]" *)
    )
  | `For_obj_expr of (
        Token.t (* "{" *)
      * for_intro
      * expression
      * Token.t (* "=>" *)
      * expression
      * ellipsis (*tok*) option
      * for_cond option
      * Token.t (* "}" *)
    )
]

and for_intro = (
    Token.t (* "for" *)
  * identifier (*tok*)
  * (Token.t (* "," *) * identifier (*tok*)) option
  * Token.t (* "in" *)
  * expression
  * Token.t (* ":" *)
)

and function_arguments = (
    expression
  * (Token.t (* "," *) * expression) list (* zero or more *)
  * [ `COMMA of Token.t (* "," *) | `Ellips of ellipsis (*tok*) ] option
)

and index = [
    `New_index of (Token.t (* "[" *) * expression * Token.t (* "]" *))
  | `Legacy_index of (Token.t (* "." *) * pat_780550e (*tok*))
]

and object_ = (Token.t (* "{" *) * object_elems option * Token.t (* "}" *))

and object_elem = (
    expression
  * [ `EQ of Token.t (* "=" *) | `COLON of Token.t (* ":" *) ]
  * expression
)

and object_elems = (
    object_elem
  * (Token.t (* "," *) option * object_elem) list (* zero or more *)
  * Token.t (* "," *) option
)

and operation = [
    `Un_oper of (
        [ `DASH of Token.t (* "-" *) | `BANG of Token.t (* "!" *) ]
      * expr_term
    )
  | `Bin_oper of binary_operation
]

and splat = [
    `Attr_splat of (
        Token.t (* ".*" *)
      * anon_choice_get_attr_7bbf24f list (* zero or more *)
    )
  | `Full_splat of (
        Token.t (* "[*]" *)
      * anon_choice_get_attr_7bbf24f list (* zero or more *)
    )
]

and template_expr = [
    `Quoted_temp of (
        quoted_template_start (*tok*)
      * anon_choice_temp_lit_c764a73 list (* zero or more *) option
      * quoted_template_end (*tok*)
    )
  | `Here_temp of (
        heredoc_start
      * heredoc_identifier (*tok*)
      * anon_choice_temp_lit_c764a73 list (* zero or more *) option
      * heredoc_identifier (*tok*)
    )
]

and tuple_elems = (
    expression
  * (Token.t (* "," *) * expression) list (* zero or more *)
  * Token.t (* "," *) option
)
[@@deriving sexp_of]

type attribute = (identifier (*tok*) * Token.t (* "=" *) * expression)
[@@deriving sexp_of]

type block = (
    identifier (*tok*)
  * [ `Str_lit of string_lit | `Id of identifier (*tok*) ]
      list (* zero or more *)
  * Token.t (* "{" *)
  * body option
  * Token.t (* "}" *)
)

and body = [ `Attr of attribute | `Blk of block ] list (* one or more *)
[@@deriving sexp_of]

type config_file = [ `Body of body | `Obj of object_ ] option
[@@deriving sexp_of]

type null_lit (* inlined *) = Token.t (* "null" *)
[@@deriving sexp_of]

type strip_marker (* inlined *) = Token.t (* "~" *)
[@@deriving sexp_of]

type block_start (* inlined *) = Token.t (* "{" *)
[@@deriving sexp_of]

type block_end (* inlined *) = Token.t (* "}" *)
[@@deriving sexp_of]

type object_start (* inlined *) = Token.t (* "{" *)
[@@deriving sexp_of]

type whitespace (* inlined *) = Token.t
[@@deriving sexp_of]

type comma (* inlined *) = Token.t (* "," *)
[@@deriving sexp_of]

type function_call_end (* inlined *) = Token.t (* ")" *)
[@@deriving sexp_of]

type function_call_start (* inlined *) = Token.t (* "(" *)
[@@deriving sexp_of]

type tuple_end (* inlined *) = Token.t (* "]" *)
[@@deriving sexp_of]

type comment (* inlined *) = Token.t
[@@deriving sexp_of]

type tuple_start (* inlined *) = Token.t (* "[" *)
[@@deriving sexp_of]

type object_end (* inlined *) = Token.t (* "}" *)
[@@deriving sexp_of]

type legacy_index (* inlined *) = (Token.t (* "." *) * pat_780550e (*tok*))
[@@deriving sexp_of]

type variable_expr (* inlined *) = identifier (*tok*)
[@@deriving sexp_of]

type attr_splat (* inlined *) = (
    Token.t (* ".*" *)
  * anon_choice_get_attr_7bbf24f list (* zero or more *)
)
[@@deriving sexp_of]

type conditional (* inlined *) = (
    expression * Token.t (* "?" *) * expression * Token.t (* ":" *)
  * expression
)
[@@deriving sexp_of]

type for_object_expr (* inlined *) = (
    Token.t (* "{" *)
  * for_intro
  * expression
  * Token.t (* "=>" *)
  * expression
  * ellipsis (*tok*) option
  * for_cond option
  * Token.t (* "}" *)
)
[@@deriving sexp_of]

type for_tuple_expr (* inlined *) = (
    Token.t (* "[" *)
  * for_intro
  * expression
  * for_cond option
  * Token.t (* "]" *)
)
[@@deriving sexp_of]

type full_splat (* inlined *) = (
    Token.t (* "[*]" *)
  * anon_choice_get_attr_7bbf24f list (* zero or more *)
)
[@@deriving sexp_of]

type function_call (* inlined *) = (
    identifier (*tok*)
  * Token.t (* "(" *)
  * function_arguments option
  * Token.t (* ")" *)
)
[@@deriving sexp_of]

type heredoc_template (* inlined *) = (
    heredoc_start
  * heredoc_identifier (*tok*)
  * anon_choice_temp_lit_c764a73 list (* zero or more *) option
  * heredoc_identifier (*tok*)
)
[@@deriving sexp_of]

type new_index (* inlined *) = (
    Token.t (* "[" *) * expression * Token.t (* "]" *)
)
[@@deriving sexp_of]

type quoted_template (* inlined *) = (
    quoted_template_start (*tok*)
  * anon_choice_temp_lit_c764a73 list (* zero or more *) option
  * quoted_template_end (*tok*)
)
[@@deriving sexp_of]

type template_interpolation (* inlined *) = (
    template_interpolation_start (*tok*)
  * Token.t (* "~" *) option
  * expression option
  * Token.t (* "~" *) option
  * template_interpolation_end (*tok*)
)
[@@deriving sexp_of]

type tuple (* inlined *) = (
    Token.t (* "[" *)
  * tuple_elems option
  * Token.t (* "]" *)
)
[@@deriving sexp_of]

type unary_operation (* inlined *) = (
    [ `DASH of Token.t (* "-" *) | `BANG of Token.t (* "!" *) ]
  * expr_term
)
[@@deriving sexp_of]

let dump_tree root =
  sexp_of_config_file root
  |> Print_sexp.to_stdout
