(**
   Boilerplate to be used as a template when mapping the hcl CST
   to another type of tree.
*)

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (_tok : Tree_sitter_run.Token.t) =
  failwith "not implemented"

let blank (env : env) () =
  failwith "not implemented"

let todo (env : env) _ =
   failwith "not implemented"

let map_escape_sequence (env : env) (tok : CST.escape_sequence) =
  token env tok (* escape_sequence *)

let map_identifier (env : env) (tok : CST.identifier) =
  token env tok (* identifier *)

let map_anon_choice_COMMA_30f2cfc (env : env) (x : CST.anon_choice_COMMA_30f2cfc) =
  (match x with
  | `COMMA tok -> token env tok (* "," *)
  | `Choice_LF x ->
      (match x with
      | `LF tok -> token env tok (* "\n" *)
      )
  )

let map_heredoc (env : env) (tok : CST.heredoc) =
  token env tok (* heredoc *)

let map_numeric_literal (env : env) (tok : CST.numeric_literal) =
  token env tok (* numeric_literal *)

let map_quoted_template (env : env) ((v1, v2, v3) : CST.quoted_template) =
  let v1 = token env v1 (* "\"" *) in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Blank () -> todo env ()
      | `Esc_seq tok -> token env tok (* escape_sequence *)
      )
    ) v2
  in
  let v3 = token env v3 (* "\"" *) in
  todo env (v1, v2, v3)

let map_literal_value (env : env) (x : CST.literal_value) =
  (match x with
  | `Nume_lit tok -> token env tok (* numeric_literal *)
  | `True tok -> token env tok (* "true" *)
  | `False tok -> token env tok (* "false" *)
  | `Null tok -> token env tok (* "null" *)
  )

let map_string_literal (env : env) (x : CST.string_literal) =
  map_quoted_template env x

let map_get_attr (env : env) ((v1, v2) : CST.get_attr) =
  let v1 = token env v1 (* "." *) in
  let v2 = token env v2 (* identifier *) in
  todo env (v1, v2)

let map_template_expr (env : env) (x : CST.template_expr) =
  (match x with
  | `Quoted_temp x -> map_string_literal env x
  | `Here tok -> token env tok (* heredoc *)
  )

let map_anon_choice_str_lit_9b73c1d (env : env) (x : CST.anon_choice_str_lit_9b73c1d) =
  (match x with
  | `Str_lit x -> map_string_literal env x
  | `Id tok -> token env tok (* identifier *)
  )

let rec map_binary_op (env : env) (x : CST.binary_op) =
  (match x with
  | `Exp_choice_STAR_exp (v1, v2, v3) ->
      let v1 = map_expression env v1 in
      let v2 =
        (match v2 with
        | `STAR tok -> token env tok (* "*" *)
        | `SLASH tok -> token env tok (* "/" *)
        | `PERC tok -> token env tok (* "%" *)
        )
      in
      let v3 = map_expression env v3 in
      todo env (v1, v2, v3)
  | `Exp_choice_PLUS_exp (v1, v2, v3) ->
      let v1 = map_expression env v1 in
      let v2 =
        (match v2 with
        | `PLUS tok -> token env tok (* "+" *)
        | `DASH tok -> token env tok (* "-" *)
        )
      in
      let v3 = map_expression env v3 in
      todo env (v1, v2, v3)
  | `Exp_choice_GT_exp (v1, v2, v3) ->
      let v1 = map_expression env v1 in
      let v2 =
        (match v2 with
        | `GT tok -> token env tok (* ">" *)
        | `GTEQ tok -> token env tok (* ">=" *)
        | `LT tok -> token env tok (* "<" *)
        | `LTEQ tok -> token env tok (* "<=" *)
        )
      in
      let v3 = map_expression env v3 in
      todo env (v1, v2, v3)
  | `Exp_choice_EQEQ_exp (v1, v2, v3) ->
      let v1 = map_expression env v1 in
      let v2 =
        (match v2 with
        | `EQEQ tok -> token env tok (* "==" *)
        | `BANGEQ tok -> token env tok (* "!=" *)
        )
      in
      let v3 = map_expression env v3 in
      todo env (v1, v2, v3)
  | `Exp_AMPAMP_exp (v1, v2, v3) ->
      let v1 = map_expression env v1 in
      let v2 = token env v2 (* "&&" *) in
      let v3 = map_expression env v3 in
      todo env (v1, v2, v3)
  | `Exp_BARBAR_exp (v1, v2, v3) ->
      let v1 = map_expression env v1 in
      let v2 = token env v2 (* "||" *) in
      let v3 = map_expression env v3 in
      todo env (v1, v2, v3)
  )

and map_collection_value (env : env) (x : CST.collection_value) =
  (match x with
  | `Tuple (v1, v2, v3) ->
      let v1 = token env v1 (* "[" *) in
      let v2 =
        (match v2 with
        | Some (v1, v2, v3) ->
            let v1 = map_expression env v1 in
            let v2 =
              List.map (fun (v1, v2) ->
                let v1 = token env v1 (* "," *) in
                let v2 = map_expression env v2 in
                todo env (v1, v2)
              ) v2
            in
            let v3 =
              (match v3 with
              | Some tok -> token env tok (* "," *)
              | None -> todo env ())
            in
            todo env (v1, v2, v3)
        | None -> todo env ())
      in
      let v3 = token env v3 (* "]" *) in
      todo env (v1, v2, v3)
  | `Obj (v1, v2, v3) ->
      let v1 = token env v1 (* "{" *) in
      let v2 =
        (match v2 with
        | Some (v1, v2, v3) ->
            let v1 = map_object_elem env v1 in
            let v2 =
              List.map (fun (v1, v2) ->
                let v1 = map_anon_choice_COMMA_30f2cfc env v1 in
                let v2 = map_object_elem env v2 in
                todo env (v1, v2)
              ) v2
            in
            let v3 =
              (match v3 with
              | Some x -> map_anon_choice_COMMA_30f2cfc env x
              | None -> todo env ())
            in
            todo env (v1, v2, v3)
        | None -> todo env ())
      in
      let v3 = token env v3 (* "}" *) in
      todo env (v1, v2, v3)
  )

and map_expr_term (env : env) (x : CST.expr_term) =
  (match x with
  | `Lit_value x -> map_literal_value env x
  | `Coll_value x -> map_collection_value env x
  | `Temp_expr x -> map_template_expr env x
  | `Var_expr tok -> token env tok (* identifier *)
  | `Func_call (v1, v2, v3, v4) ->
      let v1 = token env v1 (* identifier *) in
      let v2 = token env v2 (* "(" *) in
      let v3 =
        (match v3 with
        | Some (v1, v2, v3) ->
            let v1 = map_expression env v1 in
            let v2 =
              List.map (fun (v1, v2) ->
                let v1 = token env v1 (* "," *) in
                let v2 = map_expression env v2 in
                todo env (v1, v2)
              ) v2
            in
            let v3 =
              (match v3 with
              | Some x ->
                  (match x with
                  | `COMMA tok -> token env tok (* "," *)
                  | `DOTDOTDOT tok -> token env tok (* "..." *)
                  )
              | None -> todo env ())
            in
            todo env (v1, v2, v3)
        | None -> todo env ())
      in
      let v4 = token env v4 (* ")" *) in
      todo env (v1, v2, v3, v4)
  | `For_expr x -> map_for_expr env x
  | `Expr_term_index (v1, v2) ->
      let v1 = map_expr_term env v1 in
      let v2 = map_index env v2 in
      todo env (v1, v2)
  | `Expr_term_get_attr (v1, v2) ->
      let v1 = map_expr_term env v1 in
      let v2 = map_get_attr env v2 in
      todo env (v1, v2)
  | `Expr_term_splat (v1, v2) ->
      let v1 = map_expr_term env v1 in
      let v2 = map_splat env v2 in
      todo env (v1, v2)
  | `LPAR_exp_RPAR (v1, v2, v3) ->
      let v1 = token env v1 (* "(" *) in
      let v2 = map_expression env v2 in
      let v3 = token env v3 (* ")" *) in
      todo env (v1, v2, v3)
  )

and map_expression (env : env) (x : CST.expression) =
  (match x with
  | `Expr_term x -> map_expr_term env x
  | `Oper x -> map_operation env x
  | `Cond (v1, v2, v3, v4, v5) ->
      let v1 = map_expression env v1 in
      let v2 = token env v2 (* "?" *) in
      let v3 = map_expression env v3 in
      let v4 = token env v4 (* ":" *) in
      let v5 = map_expression env v5 in
      todo env (v1, v2, v3, v4, v5)
  )

and map_for_cond (env : env) ((v1, v2) : CST.for_cond) =
  let v1 = token env v1 (* "if" *) in
  let v2 = map_expression env v2 in
  todo env (v1, v2)

and map_for_expr (env : env) (x : CST.for_expr) =
  (match x with
  | `For_tuple (v1, v2, v3, v4, v5) ->
      let v1 = token env v1 (* "[" *) in
      let v2 = map_for_intro env v2 in
      let v3 = map_expression env v3 in
      let v4 =
        (match v4 with
        | Some x -> map_for_cond env x
        | None -> todo env ())
      in
      let v5 = token env v5 (* "]" *) in
      todo env (v1, v2, v3, v4, v5)
  | `For_obj (v1, v2, v3, v4, v5, v6, v7, v8) ->
      let v1 = token env v1 (* "{" *) in
      let v2 = map_for_intro env v2 in
      let v3 = map_expression env v3 in
      let v4 = token env v4 (* "=>" *) in
      let v5 = map_expression env v5 in
      let v6 =
        (match v6 with
        | Some tok -> token env tok (* "..." *)
        | None -> todo env ())
      in
      let v7 =
        (match v7 with
        | Some x -> map_for_cond env x
        | None -> todo env ())
      in
      let v8 = token env v8 (* "}" *) in
      todo env (v1, v2, v3, v4, v5, v6, v7, v8)
  )

and map_for_intro (env : env) ((v1, v2, v3, v4, v5, v6) : CST.for_intro) =
  let v1 = token env v1 (* "for" *) in
  let v2 = token env v2 (* identifier *) in
  let v3 =
    (match v3 with
    | Some (v1, v2) ->
        let v1 = token env v1 (* "," *) in
        let v2 = token env v2 (* identifier *) in
        todo env (v1, v2)
    | None -> todo env ())
  in
  let v4 = token env v4 (* "in" *) in
  let v5 = map_expression env v5 in
  let v6 = token env v6 (* ":" *) in
  todo env (v1, v2, v3, v4, v5, v6)

and map_index (env : env) ((v1, v2, v3) : CST.index) =
  let v1 = token env v1 (* "[" *) in
  let v2 = map_expression env v2 in
  let v3 = token env v3 (* "]" *) in
  todo env (v1, v2, v3)

and map_object_elem (env : env) ((v1, v2, v3) : CST.object_elem) =
  let v1 =
    (match v1 with
    | `Id tok -> token env tok (* identifier *)
    | `Exp x -> map_expression env x
    )
  in
  let v2 =
    (match v2 with
    | `EQ tok -> token env tok (* "=" *)
    | `COLON tok -> token env tok (* ":" *)
    )
  in
  let v3 = map_expression env v3 in
  todo env (v1, v2, v3)

and map_operation (env : env) (x : CST.operation) =
  (match x with
  | `Un_op (v1, v2) ->
      let v1 =
        (match v1 with
        | `DASH tok -> token env tok (* "-" *)
        | `BANG tok -> token env tok (* "!" *)
        )
      in
      let v2 = map_expr_term env v2 in
      todo env (v1, v2)
  | `Bin_op x -> map_binary_op env x
  )

and map_splat (env : env) (x : CST.splat) =
  (match x with
  | `Splat_attr (v1, v2, v3) ->
      let v1 = token env v1 (* "." *) in
      let v2 = token env v2 (* "*" *) in
      let v3 = List.map (map_get_attr env) v3 in
      todo env (v1, v2, v3)
  | `Splat_full (v1, v2, v3, v4) ->
      let v1 = token env v1 (* "[" *) in
      let v2 = token env v2 (* "*" *) in
      let v3 = token env v3 (* "]" *) in
      let v4 =
        List.map (fun x ->
          (match x with
          | `Get_attr x -> map_get_attr env x
          | `Index x -> map_index env x
          )
        ) v4
      in
      todo env (v1, v2, v3, v4)
  )

let map_one_line_block (env : env) ((v1, v2, v3, v4, v5, v6) : CST.one_line_block) =
  let v1 = token env v1 (* identifier *) in
  let v2 =
    List.map (map_anon_choice_str_lit_9b73c1d env) v2
  in
  let v3 = token env v3 (* "{" *) in
  let v4 =
    (match v4 with
    | Some (v1, v2, v3) ->
        let v1 = token env v1 (* identifier *) in
        let v2 = token env v2 (* "=" *) in
        let v3 = map_expression env v3 in
        todo env (v1, v2, v3)
    | None -> todo env ())
  in
  let v5 = token env v5 (* "}" *) in
  let v6 =
    (match v6 with
    | `LF tok -> token env tok (* "\n" *)
    )
  in
  todo env (v1, v2, v3, v4, v5, v6)

let map_attribute (env : env) ((v1, v2, v3, v4) : CST.attribute) =
  let v1 = token env v1 (* identifier *) in
  let v2 = token env v2 (* "=" *) in
  let v3 = map_expression env v3 in
  let v4 =
    (match v4 with
    | `LF tok -> token env tok (* "\n" *)
    )
  in
  todo env (v1, v2, v3, v4)

let rec map_block (env : env) ((v1, v2, v3, v4, v5, v6, v7) : CST.block) =
  let v1 = token env v1 (* identifier *) in
  let v2 =
    List.map (map_anon_choice_str_lit_9b73c1d env) v2
  in
  let v3 = token env v3 (* "{" *) in
  let v4 =
    (match v4 with
    | `LF tok -> token env tok (* "\n" *)
    )
  in
  let v5 =
    (match v5 with
    | Some x -> map_source_file env x
    | None -> todo env ())
  in
  let v6 = token env v6 (* "}" *) in
  let v7 =
    (match v7 with
    | `LF tok -> token env tok (* "\n" *)
    )
  in
  todo env (v1, v2, v3, v4, v5, v6, v7)

and map_body (env : env) (xs : CST.body) =
  List.map (fun x ->
    (match x with
    | `Attr x -> map_attribute env x
    | `Blk x -> map_block env x
    | `One_line_blk x -> map_one_line_block env x
    )
  ) xs

and map_source_file (env : env) (x : CST.source_file) =
  map_body env x
