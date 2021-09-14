#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_null_lit = 9,
  anon_sym_COMMA = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_COLON = 13,
  anon_sym_DOT = 14,
  anon_sym_DOT_STAR = 15,
  anon_sym_LBRACK_STAR_RBRACK = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_for = 18,
  anon_sym_in = 19,
  anon_sym_if = 20,
  sym_ellipsis = 21,
  anon_sym_QMARK = 22,
  anon_sym_DASH = 23,
  anon_sym_BANG = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PERCENT = 27,
  anon_sym_PLUS = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_EQ_EQ = 33,
  anon_sym_BANG_EQ = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_PIPE_PIPE = 36,
  anon_sym_LT_LT = 37,
  anon_sym_LT_LT_DASH = 38,
  sym_strip_marker = 39,
  anon_sym_PERCENT_LBRACEifTODO = 40,
  anon_sym_PERCENT_LBRACEforTODO = 41,
  sym_comment = 42,
  sym_whitespace = 43,
  sym_pat_780550e = 44,
  sym_pat_b66053b = 45,
  sym_pat_e950a1b = 46,
  sym_quoted_template_start = 47,
  sym_quoted_template_end = 48,
  sym_template_literal_chunk = 49,
  sym_template_interpolation_start = 50,
  sym_template_interpolation_end = 51,
  sym_heredoc_identifier = 52,
  sym_config_file = 53,
  sym_body = 54,
  sym_attribute = 55,
  sym_block = 56,
  sym_block_start = 57,
  sym_block_end = 58,
  sym_expression = 59,
  sym_expr_term = 60,
  sym_literal_value = 61,
  sym_numeric_lit = 62,
  sym_bool_lit = 63,
  sym_string_lit = 64,
  sym_collection_value = 65,
  sym_comma = 66,
  sym_tuple = 67,
  sym_tuple_start = 68,
  sym_tuple_end = 69,
  sym_tuple_elems = 70,
  sym_object = 71,
  sym_object_start = 72,
  sym_object_end = 73,
  sym_object_elems = 74,
  sym_object_elem = 75,
  sym_index = 76,
  sym_new_index = 77,
  sym_legacy_index = 78,
  sym_get_attr = 79,
  sym_splat = 80,
  sym_attr_splat = 81,
  sym_full_splat = 82,
  sym_for_expr = 83,
  sym_for_tuple_expr = 84,
  sym_for_object_expr = 85,
  sym_for_intro = 86,
  sym_for_cond = 87,
  sym_variable_expr = 88,
  sym_function_call = 89,
  sym_function_call_start = 90,
  sym_function_call_end = 91,
  sym_function_arguments = 92,
  sym_conditional = 93,
  sym_operation = 94,
  sym_unary_operation = 95,
  sym_binary_operation = 96,
  sym_template_expr = 97,
  sym_quoted_template = 98,
  sym_heredoc_template = 99,
  sym_heredoc_start = 100,
  sym_template_literal = 101,
  sym_template_interpolation = 102,
  sym_template_directive = 103,
  aux_sym_body_repeat1 = 104,
  aux_sym_block_repeat1 = 105,
  aux_sym_tuple_elems_repeat1 = 106,
  aux_sym_object_elems_repeat1 = 107,
  aux_sym_attr_splat_repeat1 = 108,
  aux_sym_quoted_template_repeat1 = 109,
  aux_sym_template_literal_repeat1 = 110,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_strip_marker] = "strip_marker",
  [anon_sym_PERCENT_LBRACEifTODO] = "%{if TODO",
  [anon_sym_PERCENT_LBRACEforTODO] = "%{for TODO",
  [sym_comment] = "comment",
  [sym_whitespace] = "whitespace",
  [sym_pat_780550e] = "pat_780550e",
  [sym_pat_b66053b] = "pat_b66053b",
  [sym_pat_e950a1b] = "pat_e950a1b",
  [sym_quoted_template_start] = "quoted_template_start",
  [sym_quoted_template_end] = "quoted_template_end",
  [sym_template_literal_chunk] = "template_literal_chunk",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_heredoc_identifier] = "heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_expression] = "expression",
  [sym_expr_term] = "expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym_comma] = "comma",
  [sym_tuple] = "tuple",
  [sym_tuple_start] = "tuple_start",
  [sym_tuple_end] = "tuple_end",
  [sym_tuple_elems] = "tuple_elems",
  [sym_object] = "object",
  [sym_object_start] = "object_start",
  [sym_object_end] = "object_end",
  [sym_object_elems] = "object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym_new_index] = "new_index",
  [sym_legacy_index] = "legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym_function_call_start] = "function_call_start",
  [sym_function_call_end] = "function_call_end",
  [sym_function_arguments] = "function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_start] = "heredoc_start",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_elems_repeat1] = "tuple_elems_repeat1",
  [aux_sym_object_elems_repeat1] = "object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_strip_marker] = sym_strip_marker,
  [anon_sym_PERCENT_LBRACEifTODO] = anon_sym_PERCENT_LBRACEifTODO,
  [anon_sym_PERCENT_LBRACEforTODO] = anon_sym_PERCENT_LBRACEforTODO,
  [sym_comment] = sym_comment,
  [sym_whitespace] = sym_whitespace,
  [sym_pat_780550e] = sym_pat_780550e,
  [sym_pat_b66053b] = sym_pat_b66053b,
  [sym_pat_e950a1b] = sym_pat_e950a1b,
  [sym_quoted_template_start] = sym_quoted_template_start,
  [sym_quoted_template_end] = sym_quoted_template_end,
  [sym_template_literal_chunk] = sym_template_literal_chunk,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_heredoc_identifier] = sym_heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_expression] = sym_expression,
  [sym_expr_term] = sym_expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym_comma] = sym_comma,
  [sym_tuple] = sym_tuple,
  [sym_tuple_start] = sym_tuple_start,
  [sym_tuple_end] = sym_tuple_end,
  [sym_tuple_elems] = sym_tuple_elems,
  [sym_object] = sym_object,
  [sym_object_start] = sym_object_start,
  [sym_object_end] = sym_object_end,
  [sym_object_elems] = sym_object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym_new_index] = sym_new_index,
  [sym_legacy_index] = sym_legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym_function_call_start] = sym_function_call_start,
  [sym_function_call_end] = sym_function_call_end,
  [sym_function_arguments] = sym_function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_start] = sym_heredoc_start,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_elems_repeat1] = aux_sym_tuple_elems_repeat1,
  [aux_sym_object_elems_repeat1] = aux_sym_object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_quoted_template_repeat1] = aux_sym_quoted_template_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_strip_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACEifTODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACEforTODO] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_780550e] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_b66053b] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_e950a1b] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_start] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_literal_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_end] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_elems] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_start] = {
    .visible = true,
    .named = true,
  },
  [sym_object_end] = {
    .visible = true,
    .named = true,
  },
  [sym_object_elems] = {
    .visible = true,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_new_index] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_start] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_end] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_val = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_val, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 42891
    ? (c < 3804
      ? (c < 2616
        ? (c < 1791
          ? (c < 895
            ? (c < 192
              ? (c < 'o'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c >= 'g' && c <= 'm')))
                : (c <= 's' || (c < 181
                  ? (c < 170
                    ? (c >= 'u' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))))
            : (c <= 895 || (c < 1376
              ? (c < 931
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2084
              ? (c < 1994
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2230
                ? (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))))))
        : (c <= 2617 || (c < 3133
          ? (c < 2877
            ? (c < 2749
              ? (c < 2703
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2749 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2877 || (c < 2974
              ? (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3077
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))))))
          : (c <= 3133 || (c < 3450
            ? (c < 3294
              ? (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))
              : (c <= 3294 || (c < 3346
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))))
            : (c <= 3455 || (c < 3716
              ? (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3807 || (c < 7680
        ? (c < 5792
          ? (c < 4688
            ? (c < 4197
              ? (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))
              : (c <= 4198 || (c < 4295
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))
            : (c <= 4694 || (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))))))
          : (c <= 5866 || (c < 6656
            ? (c < 6108
              ? (c < 5952
                ? (c < 5902
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))
              : (c <= 6108 || (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))
            : (c <= 6678 || (c < 7258
              ? (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))
              : (c <= 7293 || (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))))))))
        : (c <= 7957 || (c < 11506
          ? (c < 8319
            ? (c < 8118
              ? (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))
              : (c <= 8124 || (c < 8150
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))))
            : (c <= 8319 || (c < 8490
              ? (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))
              : (c <= 8505 || (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11310 || (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))))))
          : (c <= 11507 || (c < 12443
            ? (c < 11704
              ? (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 12293
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12447 || (c < 42192
              ? (c < 12704
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43584
            ? (c < 43261
              ? (c < 43020
                ? (c < 43011
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))))
              : (c <= 43262 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))
                : (c <= 43471 || (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))))))
            : (c <= 43586 || (c < 43739
              ? (c < 43697
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 42946
    ? (c < 3904
      ? (c < 2654
        ? (c < 1810
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))))))))
          : (c <= 1839 || (c < 2447
            ? (c < 2112
              ? (c < 2042
                ? (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2365
                ? (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))))
            : (c <= 2448 || (c < 2556
              ? (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))))
              : (c <= 2556 || (c < 2610
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3168
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3090
                ? (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))))))
          : (c <= 3169 || (c < 3482
            ? (c < 3313
              ? (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3294
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3314 || (c < 3406
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))))
            : (c <= 3505 || (c < 3724
              ? (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))
              : (c <= 3747 || (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : (c <= 3807 || c == 3840))))))))))))
      : (c <= 3911 || (c < 7960
        ? (c < 5870
          ? (c < 4698
            ? (c < 4213
              ? (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4304
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))))
            : (c <= 4701 || (c < 4882
              ? (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))
          : (c <= 5880 || (c < 6688
            ? (c < 6176
              ? (c < 5984
                ? (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))
              : (c <= 6264 || (c < 6480
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))))
            : (c <= 6740 || (c < 7296
              ? (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6987 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))
              : (c <= 7304 || (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11520
          ? (c < 8336
            ? (c < 8126
              ? (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))
              : (c <= 8126 || (c < 8160
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))))
            : (c <= 8348 || (c < 8508
              ? (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))
              : (c <= 8511 || (c < 11312
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))))))))
          : (c <= 11557 || (c < 12449
            ? (c < 11712
              ? (c < 11648
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))
              : (c <= 11718 || (c < 12321
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c >= 12443 && c <= 12447)))))))
            : (c <= 12538 || (c < 42240
              ? (c < 12784
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 40960
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 40956)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42656
                ? (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42735 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))))))))))))))
    : (c <= 42954 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43588
            ? (c < 43274
              ? (c < 43072
                ? (c < 43015
                  ? (c < 43011
                    ? (c >= 42997 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43123 || (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))))
              : (c <= 43301 || (c < 43488
                ? (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))
                : (c <= 43492 || (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))))))
            : (c <= 43595 || (c < 43744
              ? (c < 43701
                ? (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))
              : (c <= 43754 || (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(78);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(66);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(78);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(66);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(50);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(66);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == '<') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(1);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == '|') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(78);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(66);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(66);
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(66);
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(66);
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(66);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(66);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(66);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(66);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(66);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(66);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(66);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(66);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(66);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACEifTODO);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACEforTODO);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_whitespace);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_pat_780550e);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_pat_b66053b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_pat_e950a1b);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_pat_e950a1b);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_pat_e950a1b);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_pat_e950a1b);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 5, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 3, .external_lex_state = 2},
  [8] = {.lex_state = 3, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 2},
  [17] = {.lex_state = 3, .external_lex_state = 2},
  [18] = {.lex_state = 3, .external_lex_state = 3},
  [19] = {.lex_state = 3, .external_lex_state = 3},
  [20] = {.lex_state = 3, .external_lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 3},
  [22] = {.lex_state = 3, .external_lex_state = 2},
  [23] = {.lex_state = 3, .external_lex_state = 3},
  [24] = {.lex_state = 3, .external_lex_state = 2},
  [25] = {.lex_state = 3, .external_lex_state = 2},
  [26] = {.lex_state = 3, .external_lex_state = 2},
  [27] = {.lex_state = 3, .external_lex_state = 2},
  [28] = {.lex_state = 3, .external_lex_state = 2},
  [29] = {.lex_state = 3, .external_lex_state = 2},
  [30] = {.lex_state = 3, .external_lex_state = 2},
  [31] = {.lex_state = 3, .external_lex_state = 2},
  [32] = {.lex_state = 3, .external_lex_state = 2},
  [33] = {.lex_state = 3, .external_lex_state = 2},
  [34] = {.lex_state = 3, .external_lex_state = 2},
  [35] = {.lex_state = 3, .external_lex_state = 2},
  [36] = {.lex_state = 3, .external_lex_state = 2},
  [37] = {.lex_state = 3, .external_lex_state = 2},
  [38] = {.lex_state = 3, .external_lex_state = 2},
  [39] = {.lex_state = 3, .external_lex_state = 2},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 3, .external_lex_state = 2},
  [42] = {.lex_state = 3, .external_lex_state = 2},
  [43] = {.lex_state = 3, .external_lex_state = 2},
  [44] = {.lex_state = 3, .external_lex_state = 2},
  [45] = {.lex_state = 3, .external_lex_state = 2},
  [46] = {.lex_state = 3, .external_lex_state = 2},
  [47] = {.lex_state = 3, .external_lex_state = 2},
  [48] = {.lex_state = 3, .external_lex_state = 2},
  [49] = {.lex_state = 3, .external_lex_state = 2},
  [50] = {.lex_state = 3, .external_lex_state = 2},
  [51] = {.lex_state = 3, .external_lex_state = 2},
  [52] = {.lex_state = 3, .external_lex_state = 2},
  [53] = {.lex_state = 3, .external_lex_state = 2},
  [54] = {.lex_state = 3, .external_lex_state = 2},
  [55] = {.lex_state = 3, .external_lex_state = 2},
  [56] = {.lex_state = 3, .external_lex_state = 2},
  [57] = {.lex_state = 3, .external_lex_state = 2},
  [58] = {.lex_state = 3, .external_lex_state = 2},
  [59] = {.lex_state = 3, .external_lex_state = 2},
  [60] = {.lex_state = 3, .external_lex_state = 2},
  [61] = {.lex_state = 3, .external_lex_state = 2},
  [62] = {.lex_state = 3, .external_lex_state = 2},
  [63] = {.lex_state = 3, .external_lex_state = 2},
  [64] = {.lex_state = 3, .external_lex_state = 2},
  [65] = {.lex_state = 3, .external_lex_state = 2},
  [66] = {.lex_state = 3, .external_lex_state = 2},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 3, .external_lex_state = 2},
  [69] = {.lex_state = 3, .external_lex_state = 2},
  [70] = {.lex_state = 3, .external_lex_state = 2},
  [71] = {.lex_state = 3, .external_lex_state = 2},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 3, .external_lex_state = 2},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 3, .external_lex_state = 2},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 3, .external_lex_state = 2},
  [78] = {.lex_state = 3, .external_lex_state = 2},
  [79] = {.lex_state = 3, .external_lex_state = 2},
  [80] = {.lex_state = 3, .external_lex_state = 2},
  [81] = {.lex_state = 3, .external_lex_state = 2},
  [82] = {.lex_state = 3, .external_lex_state = 2},
  [83] = {.lex_state = 3, .external_lex_state = 2},
  [84] = {.lex_state = 3, .external_lex_state = 2},
  [85] = {.lex_state = 3, .external_lex_state = 2},
  [86] = {.lex_state = 3, .external_lex_state = 2},
  [87] = {.lex_state = 3, .external_lex_state = 2},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 3, .external_lex_state = 2},
  [90] = {.lex_state = 3, .external_lex_state = 2},
  [91] = {.lex_state = 3, .external_lex_state = 2},
  [92] = {.lex_state = 3, .external_lex_state = 2},
  [93] = {.lex_state = 3, .external_lex_state = 2},
  [94] = {.lex_state = 3, .external_lex_state = 2},
  [95] = {.lex_state = 3, .external_lex_state = 2},
  [96] = {.lex_state = 3, .external_lex_state = 2},
  [97] = {.lex_state = 3, .external_lex_state = 2},
  [98] = {.lex_state = 3, .external_lex_state = 2},
  [99] = {.lex_state = 3, .external_lex_state = 2},
  [100] = {.lex_state = 3, .external_lex_state = 2},
  [101] = {.lex_state = 3, .external_lex_state = 2},
  [102] = {.lex_state = 48},
  [103] = {.lex_state = 48},
  [104] = {.lex_state = 48},
  [105] = {.lex_state = 48},
  [106] = {.lex_state = 48},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 48},
  [109] = {.lex_state = 48},
  [110] = {.lex_state = 48},
  [111] = {.lex_state = 48},
  [112] = {.lex_state = 48},
  [113] = {.lex_state = 3, .external_lex_state = 2},
  [114] = {.lex_state = 48},
  [115] = {.lex_state = 48},
  [116] = {.lex_state = 3, .external_lex_state = 2},
  [117] = {.lex_state = 3, .external_lex_state = 2},
  [118] = {.lex_state = 3, .external_lex_state = 2},
  [119] = {.lex_state = 3, .external_lex_state = 2},
  [120] = {.lex_state = 3, .external_lex_state = 2},
  [121] = {.lex_state = 3, .external_lex_state = 2},
  [122] = {.lex_state = 3, .external_lex_state = 2},
  [123] = {.lex_state = 3, .external_lex_state = 2},
  [124] = {.lex_state = 3, .external_lex_state = 2},
  [125] = {.lex_state = 3, .external_lex_state = 2},
  [126] = {.lex_state = 3, .external_lex_state = 2},
  [127] = {.lex_state = 3, .external_lex_state = 2},
  [128] = {.lex_state = 3, .external_lex_state = 2},
  [129] = {.lex_state = 3, .external_lex_state = 2},
  [130] = {.lex_state = 3, .external_lex_state = 2},
  [131] = {.lex_state = 3, .external_lex_state = 2},
  [132] = {.lex_state = 3, .external_lex_state = 2},
  [133] = {.lex_state = 3, .external_lex_state = 2},
  [134] = {.lex_state = 3, .external_lex_state = 2},
  [135] = {.lex_state = 3, .external_lex_state = 2},
  [136] = {.lex_state = 3, .external_lex_state = 2},
  [137] = {.lex_state = 3, .external_lex_state = 2},
  [138] = {.lex_state = 3, .external_lex_state = 2},
  [139] = {.lex_state = 3, .external_lex_state = 2},
  [140] = {.lex_state = 3, .external_lex_state = 2},
  [141] = {.lex_state = 3, .external_lex_state = 2},
  [142] = {.lex_state = 3, .external_lex_state = 2},
  [143] = {.lex_state = 3, .external_lex_state = 2},
  [144] = {.lex_state = 3, .external_lex_state = 2},
  [145] = {.lex_state = 3, .external_lex_state = 2},
  [146] = {.lex_state = 3, .external_lex_state = 2},
  [147] = {.lex_state = 3, .external_lex_state = 2},
  [148] = {.lex_state = 3, .external_lex_state = 2},
  [149] = {.lex_state = 3, .external_lex_state = 2},
  [150] = {.lex_state = 48},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 48},
  [160] = {.lex_state = 48},
  [161] = {.lex_state = 48},
  [162] = {.lex_state = 48},
  [163] = {.lex_state = 48},
  [164] = {.lex_state = 48},
  [165] = {.lex_state = 48},
  [166] = {.lex_state = 48},
  [167] = {.lex_state = 48},
  [168] = {.lex_state = 48},
  [169] = {.lex_state = 48},
  [170] = {.lex_state = 48},
  [171] = {.lex_state = 48},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 48},
  [174] = {.lex_state = 48},
  [175] = {.lex_state = 48},
  [176] = {.lex_state = 48},
  [177] = {.lex_state = 48},
  [178] = {.lex_state = 48},
  [179] = {.lex_state = 48},
  [180] = {.lex_state = 48},
  [181] = {.lex_state = 48},
  [182] = {.lex_state = 48},
  [183] = {.lex_state = 48},
  [184] = {.lex_state = 48},
  [185] = {.lex_state = 48},
  [186] = {.lex_state = 48},
  [187] = {.lex_state = 48},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 48},
  [190] = {.lex_state = 48},
  [191] = {.lex_state = 48},
  [192] = {.lex_state = 48},
  [193] = {.lex_state = 48, .external_lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 48, .external_lex_state = 4},
  [200] = {.lex_state = 48, .external_lex_state = 4},
  [201] = {.lex_state = 48, .external_lex_state = 4},
  [202] = {.lex_state = 48, .external_lex_state = 4},
  [203] = {.lex_state = 48, .external_lex_state = 4},
  [204] = {.lex_state = 48, .external_lex_state = 4},
  [205] = {.lex_state = 48, .external_lex_state = 4},
  [206] = {.lex_state = 48, .external_lex_state = 4},
  [207] = {.lex_state = 48, .external_lex_state = 4},
  [208] = {.lex_state = 48, .external_lex_state = 4},
  [209] = {.lex_state = 48, .external_lex_state = 4},
  [210] = {.lex_state = 48, .external_lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 48, .external_lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 48, .external_lex_state = 4},
  [248] = {.lex_state = 48, .external_lex_state = 4},
  [249] = {.lex_state = 48, .external_lex_state = 4},
  [250] = {.lex_state = 48, .external_lex_state = 4},
  [251] = {.lex_state = 48, .external_lex_state = 4},
  [252] = {.lex_state = 48, .external_lex_state = 4},
  [253] = {.lex_state = 48, .external_lex_state = 4},
  [254] = {.lex_state = 48, .external_lex_state = 4},
  [255] = {.lex_state = 48, .external_lex_state = 4},
  [256] = {.lex_state = 48, .external_lex_state = 4},
  [257] = {.lex_state = 48, .external_lex_state = 4},
  [258] = {.lex_state = 48, .external_lex_state = 4},
  [259] = {.lex_state = 48, .external_lex_state = 4},
  [260] = {.lex_state = 48, .external_lex_state = 4},
  [261] = {.lex_state = 48, .external_lex_state = 4},
  [262] = {.lex_state = 48, .external_lex_state = 4},
  [263] = {.lex_state = 48, .external_lex_state = 4},
  [264] = {.lex_state = 48, .external_lex_state = 4},
  [265] = {.lex_state = 48, .external_lex_state = 4},
  [266] = {.lex_state = 48, .external_lex_state = 4},
  [267] = {.lex_state = 48, .external_lex_state = 4},
  [268] = {.lex_state = 48, .external_lex_state = 4},
  [269] = {.lex_state = 48, .external_lex_state = 4},
  [270] = {.lex_state = 48, .external_lex_state = 4},
  [271] = {.lex_state = 48, .external_lex_state = 4},
  [272] = {.lex_state = 48, .external_lex_state = 4},
  [273] = {.lex_state = 48, .external_lex_state = 4},
  [274] = {.lex_state = 48, .external_lex_state = 4},
  [275] = {.lex_state = 48, .external_lex_state = 4},
  [276] = {.lex_state = 48, .external_lex_state = 4},
  [277] = {.lex_state = 48, .external_lex_state = 4},
  [278] = {.lex_state = 48, .external_lex_state = 4},
  [279] = {.lex_state = 48, .external_lex_state = 4},
  [280] = {.lex_state = 48, .external_lex_state = 4},
  [281] = {.lex_state = 3, .external_lex_state = 2},
  [282] = {.lex_state = 3, .external_lex_state = 2},
  [283] = {.lex_state = 3, .external_lex_state = 2},
  [284] = {.lex_state = 5, .external_lex_state = 2},
  [285] = {.lex_state = 5, .external_lex_state = 2},
  [286] = {.lex_state = 3, .external_lex_state = 2},
  [287] = {.lex_state = 3, .external_lex_state = 2},
  [288] = {.lex_state = 3, .external_lex_state = 2},
  [289] = {.lex_state = 3, .external_lex_state = 2},
  [290] = {.lex_state = 3, .external_lex_state = 2},
  [291] = {.lex_state = 3, .external_lex_state = 2},
  [292] = {.lex_state = 3, .external_lex_state = 2},
  [293] = {.lex_state = 3, .external_lex_state = 2},
  [294] = {.lex_state = 48},
  [295] = {.lex_state = 48},
  [296] = {.lex_state = 5, .external_lex_state = 5},
  [297] = {.lex_state = 5, .external_lex_state = 5},
  [298] = {.lex_state = 5, .external_lex_state = 6},
  [299] = {.lex_state = 5, .external_lex_state = 6},
  [300] = {.lex_state = 5, .external_lex_state = 6},
  [301] = {.lex_state = 5, .external_lex_state = 5},
  [302] = {.lex_state = 5, .external_lex_state = 6},
  [303] = {.lex_state = 5, .external_lex_state = 6},
  [304] = {.lex_state = 5, .external_lex_state = 5},
  [305] = {.lex_state = 5, .external_lex_state = 6},
  [306] = {.lex_state = 5, .external_lex_state = 5},
  [307] = {.lex_state = 5, .external_lex_state = 5},
  [308] = {.lex_state = 5, .external_lex_state = 6},
  [309] = {.lex_state = 5, .external_lex_state = 5},
  [310] = {.lex_state = 5, .external_lex_state = 5},
  [311] = {.lex_state = 5, .external_lex_state = 6},
  [312] = {.lex_state = 5, .external_lex_state = 6},
  [313] = {.lex_state = 5, .external_lex_state = 5},
  [314] = {.lex_state = 6, .external_lex_state = 2},
  [315] = {.lex_state = 48},
  [316] = {.lex_state = 48},
  [317] = {.lex_state = 5, .external_lex_state = 5},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 5, .external_lex_state = 5},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 5, .external_lex_state = 6},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 48, .external_lex_state = 2},
  [325] = {.lex_state = 5, .external_lex_state = 6},
  [326] = {.lex_state = 48},
  [327] = {.lex_state = 48},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 5, .external_lex_state = 5},
  [331] = {.lex_state = 5, .external_lex_state = 5},
  [332] = {.lex_state = 5, .external_lex_state = 5},
  [333] = {.lex_state = 5, .external_lex_state = 5},
  [334] = {.lex_state = 5, .external_lex_state = 6},
  [335] = {.lex_state = 48, .external_lex_state = 2},
  [336] = {.lex_state = 5, .external_lex_state = 5},
  [337] = {.lex_state = 5, .external_lex_state = 6},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 5, .external_lex_state = 5},
  [343] = {.lex_state = 5, .external_lex_state = 6},
  [344] = {.lex_state = 5, .external_lex_state = 6},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 5, .external_lex_state = 6},
  [348] = {.lex_state = 5, .external_lex_state = 5},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 5, .external_lex_state = 5},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 5, .external_lex_state = 5},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 48},
  [360] = {.lex_state = 48, .external_lex_state = 2},
  [361] = {.lex_state = 0, .external_lex_state = 4},
  [362] = {.lex_state = 48},
  [363] = {.lex_state = 0, .external_lex_state = 7},
  [364] = {.lex_state = 48},
  [365] = {.lex_state = 0, .external_lex_state = 7},
  [366] = {.lex_state = 0, .external_lex_state = 4},
  [367] = {.lex_state = 48},
  [368] = {.lex_state = 0, .external_lex_state = 4},
  [369] = {.lex_state = 48},
  [370] = {.lex_state = 0, .external_lex_state = 4},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 5},
  [373] = {.lex_state = 0, .external_lex_state = 4},
  [374] = {.lex_state = 0, .external_lex_state = 4},
  [375] = {.lex_state = 0, .external_lex_state = 8},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 48},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 48},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 48},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 48},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 3},
  [412] = {.lex_state = 3},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 48},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0, .external_lex_state = 9},
  [427] = {.lex_state = 0, .external_lex_state = 9},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0, .external_lex_state = 4},
  [430] = {.lex_state = 0, .external_lex_state = 4},
  [431] = {.lex_state = 0, .external_lex_state = 9},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0, .external_lex_state = 9},
  [434] = {.lex_state = 0, .external_lex_state = 10},
  [435] = {.lex_state = 0, .external_lex_state = 4},
  [436] = {.lex_state = 0, .external_lex_state = 9},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0, .external_lex_state = 4},
  [439] = {.lex_state = 48},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 48},
};

enum {
  ts_external_token_quoted_template_start = 0,
  ts_external_token_quoted_template_end = 1,
  ts_external_token_template_literal_chunk = 2,
  ts_external_token_template_interpolation_start = 3,
  ts_external_token_template_interpolation_end = 4,
  ts_external_token_heredoc_identifier = 5,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_template_start] = sym_quoted_template_start,
  [ts_external_token_quoted_template_end] = sym_quoted_template_end,
  [ts_external_token_template_literal_chunk] = sym_template_literal_chunk,
  [ts_external_token_template_interpolation_start] = sym_template_interpolation_start,
  [ts_external_token_template_interpolation_end] = sym_template_interpolation_end,
  [ts_external_token_heredoc_identifier] = sym_heredoc_identifier,
};

static bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token_template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_interpolation_end] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token_quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token_template_interpolation_end] = true,
  },
  [5] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token_template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
  },
  [6] = {
    [ts_external_token_template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [7] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token_template_literal_chunk] = true,
  },
  [8] = {
    [ts_external_token_template_literal_chunk] = true,
  },
  [9] = {
    [ts_external_token_heredoc_identifier] = true,
  },
  [10] = {
    [ts_external_token_quoted_template_end] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(3),
    [sym_pat_780550e] = ACTIONS(1),
    [sym_quoted_template_start] = ACTIONS(1),
    [sym_quoted_template_end] = ACTIONS(1),
    [sym_template_literal_chunk] = ACTIONS(1),
    [sym_template_interpolation_start] = ACTIONS(1),
    [sym_template_interpolation_end] = ACTIONS(1),
    [sym_heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(441),
    [sym_body] = STATE(440),
    [sym_attribute] = STATE(327),
    [sym_block] = STATE(327),
    [sym_object] = STATE(440),
    [sym_object_start] = STATE(13),
    [aux_sym_body_repeat1] = STATE(327),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_object_elem,
    STATE(9), 1,
      sym_tuple_start,
    STATE(58), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(227), 1,
      sym_object_end,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(400), 1,
      sym_object_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [109] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_object_elem,
    STATE(9), 1,
      sym_tuple_start,
    STATE(41), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(262), 1,
      sym_object_end,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(389), 1,
      sym_object_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [218] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_object_elem,
    STATE(9), 1,
      sym_tuple_start,
    STATE(36), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(162), 1,
      sym_object_end,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(424), 1,
      sym_object_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [327] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_object_elem,
    STATE(9), 1,
      sym_tuple_start,
    STATE(40), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(132), 1,
      sym_object_end,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(416), 1,
      sym_object_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [436] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(35), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(243), 1,
      sym_tuple_end,
    STATE(294), 1,
      sym_conditional,
    STATE(345), 1,
      sym_expression,
    STATE(414), 1,
      sym_tuple_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [542] = 29,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_null_lit,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LT_LT,
    ACTIONS(76), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(79), 1,
      sym_pat_b66053b,
    ACTIONS(82), 1,
      sym_pat_e950a1b,
    ACTIONS(85), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(33), 1,
      sym_comma,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 2,
      sym_object_elem,
      aux_sym_object_elems_repeat1,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [646] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(20), 1,
      sym_comma,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 2,
      sym_object_elem,
      aux_sym_object_elems_repeat1,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [750] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(66), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(183), 1,
      sym_tuple_end,
    STATE(294), 1,
      sym_conditional,
    STATE(345), 1,
      sym_expression,
    STATE(391), 1,
      sym_tuple_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [856] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(22), 1,
      sym_comma,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 2,
      sym_object_elem,
      aux_sym_object_elems_repeat1,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [960] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(49), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(258), 1,
      sym_tuple_end,
    STATE(294), 1,
      sym_conditional,
    STATE(345), 1,
      sym_expression,
    STATE(410), 1,
      sym_tuple_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1066] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(47), 1,
      sym_for_intro,
    STATE(109), 1,
      sym_expr_term,
    STATE(145), 1,
      sym_tuple_end,
    STATE(294), 1,
      sym_conditional,
    STATE(345), 1,
      sym_expression,
    STATE(419), 1,
      sym_tuple_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1172] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_object_elem,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(162), 1,
      sym_object_end,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(424), 1,
      sym_object_elems,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1275] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(278), 1,
      sym_function_call_end,
    STATE(294), 1,
      sym_conditional,
    STATE(321), 1,
      sym_expression,
    STATE(415), 1,
      sym_function_arguments,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1375] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(212), 1,
      sym_function_call_end,
    STATE(294), 1,
      sym_conditional,
    STATE(321), 1,
      sym_expression,
    STATE(407), 1,
      sym_function_arguments,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1475] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_function_call_end,
    STATE(294), 1,
      sym_conditional,
    STATE(321), 1,
      sym_expression,
    STATE(401), 1,
      sym_function_arguments,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1575] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(119), 1,
      sym_function_call_end,
    STATE(294), 1,
      sym_conditional,
    STATE(321), 1,
      sym_expression,
    STATE(413), 1,
      sym_function_arguments,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1675] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(118), 1,
      sym_strip_marker,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    ACTIONS(126), 1,
      sym_template_interpolation_end,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(203), 1,
      sym_expr_term,
    STATE(370), 1,
      sym_expression,
    STATE(373), 1,
      sym_conditional,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1772] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    ACTIONS(128), 1,
      sym_strip_marker,
    ACTIONS(130), 1,
      sym_template_interpolation_end,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(203), 1,
      sym_expr_term,
    STATE(368), 1,
      sym_expression,
    STATE(373), 1,
      sym_conditional,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1869] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(287), 1,
      sym_object_elem,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1966] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    ACTIONS(132), 1,
      sym_strip_marker,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(203), 1,
      sym_expr_term,
    STATE(361), 1,
      sym_expression,
    STATE(373), 1,
      sym_conditional,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2063] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(287), 1,
      sym_object_elem,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2160] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    ACTIONS(138), 1,
      sym_strip_marker,
    ACTIONS(140), 1,
      sym_template_interpolation_end,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(203), 1,
      sym_expr_term,
    STATE(366), 1,
      sym_expression,
    STATE(373), 1,
      sym_conditional,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2257] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(142), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2311] = 8,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(146), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 11,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(142), 18,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2369] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(338), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2463] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(154), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(152), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2517] = 9,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(146), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 11,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(142), 16,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2577] = 11,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(146), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(142), 14,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2641] = 12,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(146), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(162), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(142), 12,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2707] = 13,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(146), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(162), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(142), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2775] = 18,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_AMP_AMP,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_DOT_STAR,
    ACTIONS(176), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(178), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(146), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(162), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(147), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(149), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(168), 7,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(166), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [2853] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(287), 1,
      sym_object_elem,
    STATE(294), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2947] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(338), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3041] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(346), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3132] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3223] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(338), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3314] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(318), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3405] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(295), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3496] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(411), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3587] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3678] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(385), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3769] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(422), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3860] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(371), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3951] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(203), 1,
      sym_expr_term,
    STATE(373), 1,
      sym_conditional,
    STATE(374), 1,
      sym_expression,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4042] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(328), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4133] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(351), 1,
      sym_conditional,
    STATE(352), 1,
      sym_expression,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4224] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(320), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4315] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(340), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4406] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(323), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4497] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(421), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4588] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(417), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4679] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(386), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4770] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(359), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4861] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(32), 1,
      sym_expr_term,
    STATE(282), 1,
      sym_conditional,
    STATE(283), 1,
      sym_expression,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4952] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5043] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5134] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(388), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5225] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(377), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5316] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(32), 1,
      sym_expr_term,
    STATE(281), 1,
      sym_expression,
    STATE(282), 1,
      sym_conditional,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5407] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5498] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(404), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5589] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(341), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5680] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(393), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5771] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(376), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5862] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_expr_term,
    STATE(349), 1,
      sym_expression,
    STATE(351), 1,
      sym_conditional,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5953] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(379), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6044] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(109), 1,
      sym_expr_term,
    STATE(294), 1,
      sym_conditional,
    STATE(392), 1,
      sym_expression,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6135] = 7,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(73), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(216), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(214), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [6189] = 7,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(72), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(220), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(218), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [6243] = 7,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(224), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(222), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [6297] = 7,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(73), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(228), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(226), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [6351] = 7,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(148), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(73), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(232), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(230), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [6405] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(105), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6490] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(153), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6575] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(201), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6660] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(205), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6745] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(107), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6830] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(106), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6915] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(193), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7000] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(204), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7085] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(27), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7170] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(108), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7255] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(104), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7340] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(103), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7425] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_pat_b66053b,
    ACTIONS(35), 1,
      sym_pat_e950a1b,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(102), 1,
      sym_expr_term,
    STATE(433), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(166), 2,
      sym_tuple,
      sym_object,
    STATE(171), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(192), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(178), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(167), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7510] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(199), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7595] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(152), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7680] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(25), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7765] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(202), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7850] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(156), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7935] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(151), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8020] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(31), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8105] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(30), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8190] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_null_lit,
    ACTIONS(120), 1,
      sym_pat_b66053b,
    ACTIONS(122), 1,
      sym_pat_e950a1b,
    ACTIONS(124), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(200), 1,
      sym_expr_term,
    STATE(426), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(249), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(269), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(276), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(280), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8275] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(29), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8360] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(157), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8445] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(28), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8530] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(155), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8615] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_null_lit,
    ACTIONS(208), 1,
      sym_pat_b66053b,
    ACTIONS(210), 1,
      sym_pat_e950a1b,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(24), 1,
      sym_expr_term,
    STATE(431), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(127), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(136), 2,
      sym_tuple,
      sym_object,
    STATE(120), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8700] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_null_lit,
    ACTIONS(192), 1,
      sym_pat_b66053b,
    ACTIONS(194), 1,
      sym_pat_e950a1b,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(154), 1,
      sym_expr_term,
    STATE(436), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(213), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(225), 2,
      sym_tuple,
      sym_object,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(219), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8785] = 8,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8839] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8889] = 9,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(244), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8945] = 11,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(244), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(144), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9005] = 12,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(244), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(250), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(144), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9067] = 13,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(252), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(244), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(250), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(144), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [9131] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(154), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9181] = 18,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(252), 1,
      anon_sym_AMP_AMP,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_DOT_STAR,
    ACTIONS(260), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(244), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(250), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(185), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(187), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [9255] = 7,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(112), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(216), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(214), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9305] = 7,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(112), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(228), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9355] = 7,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(112), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(232), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(230), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9405] = 5,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(272), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(270), 19,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9451] = 7,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(111), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(220), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(218), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9501] = 7,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(186), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(110), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(224), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9551] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(278), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(276), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9592] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(282), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(280), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9633] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(286), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(284), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(290), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(288), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(294), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(292), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9756] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(298), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(296), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9797] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(302), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(300), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9838] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(306), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(304), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9879] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(310), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(308), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(314), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(312), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [9961] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(318), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(316), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10002] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(322), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(320), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(326), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(324), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(330), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(328), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10125] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(334), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(332), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10166] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(338), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(336), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(342), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(340), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10248] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(346), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(344), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10289] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(350), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(348), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10330] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(354), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(352), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10371] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(358), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(356), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10412] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(362), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(360), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10453] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(366), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(364), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10494] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(370), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(368), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(374), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(372), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(378), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(376), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10617] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(382), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(380), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10658] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(386), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(384), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10699] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(390), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(388), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10740] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(394), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(392), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10781] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(398), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(396), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10822] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(402), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(400), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10863] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(406), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(404), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10904] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(410), 12,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(408), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [10945] = 5,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(272), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(270), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10988] = 8,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11036] = 13,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(144), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(416), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(422), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [11094] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11138] = 12,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(144), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(416), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(422), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11194] = 11,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(144), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(416), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 11,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11248] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(154), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11292] = 9,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(416), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11342] = 17,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_AMP_AMP,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_DOT_STAR,
    ACTIONS(432), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(434), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(416), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(422), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(241), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(166), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [11408] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(282), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(374), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11556] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(382), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11593] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(278), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(386), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11667] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(358), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11704] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(362), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11741] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(286), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11778] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(290), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11815] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11889] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(298), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11926] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(350), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11963] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(366), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12000] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(310), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12037] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(370), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12111] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(294), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12148] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(354), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12185] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12222] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(346), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12259] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(390), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12296] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(394), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12333] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(398), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12370] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(402), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12407] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(406), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12444] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(410), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12481] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12555] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(306), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12592] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12629] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12666] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12708] = 7,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(198), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(226), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12752] = 7,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(216), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(198), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(214), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12796] = 7,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(195), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(222), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12840] = 7,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12884] = 7,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(240), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(198), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12928] = 13,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(144), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(452), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12984] = 12,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(144), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(452), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13038] = 11,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(144), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(142), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13090] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(154), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13132] = 17,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      anon_sym_DOT_STAR,
    ACTIONS(462), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(452), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(166), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [13196] = 8,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 13,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13242] = 9,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(256), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 11,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13290] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(216), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(209), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(214), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13332] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(210), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13374] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(206), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(222), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13416] = 7,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(469), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(209), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13458] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(255), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(209), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(226), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13500] = 5,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(272), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(270), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13537] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(290), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13599] = 5,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(272), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(270), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(306), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13665] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13696] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(282), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13758] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(294), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13789] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(286), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13820] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13851] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13882] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13913] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13944] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14006] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14037] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14099] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14130] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14161] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(278), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14223] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14285] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14347] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(298), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14409] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14440] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14502] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14533] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14595] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14655] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14684] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14713] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14742] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14771] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14829] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14887] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14916] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14974] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15003] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15032] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15061] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15090] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(282), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15119] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15148] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15177] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15206] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15235] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15264] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15293] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(278), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15380] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(306), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15409] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(298), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15438] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15467] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(294), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15496] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(286), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15525] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(290), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15554] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15583] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15612] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(474), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(472), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(168), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(166), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15664] = 4,
    ACTIONS(480), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(478), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(476), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(484), 7,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(482), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15717] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(488), 7,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(486), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15742] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(492), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(490), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15767] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(494), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(50), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15792] = 4,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(492), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(490), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15818] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(500), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(498), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15842] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(484), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(482), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15866] = 4,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(492), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(490), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(506), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(504), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15915] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(510), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
      sym_pat_e950a1b,
    ACTIONS(508), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
      sym_pat_b66053b,
  [15938] = 3,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [15958] = 3,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(472), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [15978] = 7,
    ACTIONS(514), 1,
      sym_quoted_template_end,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(309), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16005] = 7,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(520), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(309), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16032] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(528), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(305), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16059] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(530), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(298), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16086] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(532), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(303), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16113] = 8,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(534), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    STATE(331), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(297), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16142] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(536), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(308), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16169] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(538), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(305), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16196] = 8,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(540), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    STATE(333), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(296), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16225] = 7,
    ACTIONS(545), 1,
      sym_template_literal_chunk,
    ACTIONS(548), 1,
      sym_template_interpolation_start,
    ACTIONS(551), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(542), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(305), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16252] = 7,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(553), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(309), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16279] = 8,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(555), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    STATE(342), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(310), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16308] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(557), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(305), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16335] = 7,
    ACTIONS(551), 1,
      sym_quoted_template_end,
    ACTIONS(562), 1,
      sym_template_literal_chunk,
    ACTIONS(565), 1,
      sym_template_interpolation_start,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(559), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(309), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16362] = 7,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(568), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(309), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16389] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(570), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(312), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16416] = 7,
    ACTIONS(524), 1,
      sym_template_literal_chunk,
    ACTIONS(526), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_heredoc_identifier,
    STATE(322), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(522), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(305), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16443] = 8,
    ACTIONS(516), 1,
      sym_template_literal_chunk,
    ACTIONS(518), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_quoted_template_end,
    STATE(319), 1,
      aux_sym_template_literal_repeat1,
    STATE(332), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(512), 2,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
    STATE(306), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [16472] = 7,
    ACTIONS(576), 1,
      anon_sym_EQ,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym_quoted_template_start,
    STATE(316), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(324), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [16496] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      sym_block_end,
    STATE(399), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(327), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [16518] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      sym_block_end,
    STATE(397), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(327), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [16540] = 4,
    ACTIONS(588), 1,
      sym_template_literal_chunk,
    STATE(317), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(586), 4,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16557] = 7,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(593), 1,
      sym_ellipsis,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    STATE(234), 1,
      sym_object_end,
    STATE(378), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16580] = 4,
    ACTIONS(599), 1,
      sym_template_literal_chunk,
    STATE(317), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(597), 4,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16597] = 7,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    ACTIONS(601), 1,
      sym_ellipsis,
    STATE(250), 1,
      sym_object_end,
    STATE(382), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16620] = 7,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      sym_ellipsis,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    STATE(37), 1,
      sym_comma,
    STATE(339), 1,
      aux_sym_tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16643] = 4,
    ACTIONS(611), 1,
      sym_template_literal_chunk,
    STATE(325), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(597), 4,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16660] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    ACTIONS(613), 1,
      sym_ellipsis,
    STATE(161), 1,
      sym_object_end,
    STATE(396), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16683] = 6,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(582), 1,
      sym_quoted_template_start,
    ACTIONS(615), 1,
      sym_identifier,
    STATE(315), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(335), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [16704] = 4,
    ACTIONS(617), 1,
      sym_template_literal_chunk,
    STATE(325), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(586), 4,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16721] = 4,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(620), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(326), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [16738] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(326), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [16755] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    ACTIONS(627), 1,
      sym_ellipsis,
    STATE(140), 1,
      sym_object_end,
    STATE(384), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16778] = 5,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym_comma,
    STATE(329), 1,
      aux_sym_tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(629), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [16797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(634), 5,
      sym_quoted_template_end,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16809] = 3,
    ACTIONS(638), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(636), 4,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16823] = 3,
    ACTIONS(640), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(636), 4,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16837] = 3,
    ACTIONS(642), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(636), 4,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16851] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(644), 5,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16863] = 5,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      sym_identifier,
    ACTIONS(651), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    STATE(335), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [16881] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(644), 5,
      sym_quoted_template_end,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16893] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(634), 5,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16905] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(629), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [16919] = 6,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      sym_ellipsis,
    STATE(37), 1,
      sym_comma,
    STATE(329), 1,
      aux_sym_tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16939] = 6,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    STATE(265), 1,
      sym_tuple_end,
    STATE(423), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [16959] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(472), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [16971] = 3,
    ACTIONS(658), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(636), 4,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16985] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(660), 5,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [16997] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(662), 5,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [17009] = 6,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comma,
    STATE(357), 1,
      aux_sym_tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17029] = 6,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    STATE(218), 1,
      sym_tuple_end,
    STATE(390), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(666), 5,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [17061] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(660), 5,
      sym_quoted_template_end,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [17073] = 6,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    STATE(173), 1,
      sym_tuple_end,
    STATE(425), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17093] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(662), 5,
      sym_quoted_template_end,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [17105] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(166), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [17117] = 6,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    STATE(134), 1,
      sym_tuple_end,
    STATE(394), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17137] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(666), 5,
      sym_quoted_template_end,
      sym_template_literal_chunk,
      sym_template_interpolation_start,
      anon_sym_PERCENT_LBRACEifTODO,
      anon_sym_PERCENT_LBRACEforTODO,
  [17149] = 5,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    STATE(252), 1,
      sym_object_end,
    STATE(395), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17166] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    STATE(221), 1,
      sym_object_end,
    STATE(380), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17183] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    STATE(142), 1,
      sym_object_end,
    STATE(383), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17200] = 5,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_comma,
    STATE(329), 1,
      aux_sym_tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17217] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    STATE(163), 1,
      sym_object_end,
    STATE(381), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17234] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(668), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [17247] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(300), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [17257] = 4,
    ACTIONS(670), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      sym_strip_marker,
    ACTIONS(674), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(676), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [17281] = 4,
    ACTIONS(586), 1,
      sym_quoted_template_end,
    ACTIONS(678), 1,
      sym_template_literal_chunk,
    STATE(363), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17295] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(681), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [17305] = 4,
    ACTIONS(597), 1,
      sym_quoted_template_end,
    ACTIONS(683), 1,
      sym_template_literal_chunk,
    STATE(363), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17319] = 4,
    ACTIONS(132), 1,
      sym_strip_marker,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    ACTIONS(670), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(685), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [17343] = 4,
    ACTIONS(118), 1,
      sym_strip_marker,
    ACTIONS(126), 1,
      sym_template_interpolation_end,
    ACTIONS(670), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17357] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(687), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [17367] = 4,
    ACTIONS(670), 1,
      anon_sym_QMARK,
    ACTIONS(689), 1,
      sym_strip_marker,
    ACTIONS(691), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17381] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(693), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [17393] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [17405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(166), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [17415] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(472), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [17425] = 4,
    ACTIONS(697), 1,
      sym_template_literal_chunk,
    STATE(365), 1,
      aux_sym_template_literal_repeat1,
    STATE(434), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17439] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17450] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17461] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17472] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17483] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17494] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17505] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17516] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17527] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17538] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(705), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17549] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(707), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17560] = 3,
    ACTIONS(709), 1,
      sym_identifier,
    ACTIONS(711), 1,
      sym_pat_780550e,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17571] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(713), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17582] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17593] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17604] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17615] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(715), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17626] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17637] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17648] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17659] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17670] = 3,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17681] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(719), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [17690] = 3,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17701] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17712] = 3,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17723] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(721), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17734] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17745] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17756] = 3,
    ACTIONS(727), 1,
      sym_identifier,
    ACTIONS(729), 1,
      sym_pat_780550e,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17767] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17778] = 3,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17789] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17800] = 3,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      sym_pat_780550e,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17811] = 3,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17822] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(741), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17833] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(743), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17844] = 3,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17855] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17866] = 3,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym_function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17877] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17888] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17899] = 3,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(749), 1,
      sym_pat_780550e,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17910] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17921] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(751), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17932] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(753), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17943] = 3,
    ACTIONS(609), 1,
      anon_sym_QMARK,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17954] = 3,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17965] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17976] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17987] = 2,
    ACTIONS(757), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [17995] = 2,
    ACTIONS(759), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18003] = 2,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18011] = 2,
    ACTIONS(691), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18019] = 2,
    ACTIONS(761), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18027] = 2,
    ACTIONS(763), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18035] = 2,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18043] = 2,
    ACTIONS(765), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18051] = 2,
    ACTIONS(767), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18059] = 2,
    ACTIONS(769), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18067] = 2,
    ACTIONS(771), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18075] = 2,
    ACTIONS(773), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18083] = 2,
    ACTIONS(674), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18091] = 2,
    ACTIONS(775), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18099] = 2,
    ACTIONS(777), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18107] = 2,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [18115] = 2,
    ACTIONS(781), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 327,
  [SMALL_STATE(6)] = 436,
  [SMALL_STATE(7)] = 542,
  [SMALL_STATE(8)] = 646,
  [SMALL_STATE(9)] = 750,
  [SMALL_STATE(10)] = 856,
  [SMALL_STATE(11)] = 960,
  [SMALL_STATE(12)] = 1066,
  [SMALL_STATE(13)] = 1172,
  [SMALL_STATE(14)] = 1275,
  [SMALL_STATE(15)] = 1375,
  [SMALL_STATE(16)] = 1475,
  [SMALL_STATE(17)] = 1575,
  [SMALL_STATE(18)] = 1675,
  [SMALL_STATE(19)] = 1772,
  [SMALL_STATE(20)] = 1869,
  [SMALL_STATE(21)] = 1966,
  [SMALL_STATE(22)] = 2063,
  [SMALL_STATE(23)] = 2160,
  [SMALL_STATE(24)] = 2257,
  [SMALL_STATE(25)] = 2311,
  [SMALL_STATE(26)] = 2369,
  [SMALL_STATE(27)] = 2463,
  [SMALL_STATE(28)] = 2517,
  [SMALL_STATE(29)] = 2577,
  [SMALL_STATE(30)] = 2641,
  [SMALL_STATE(31)] = 2707,
  [SMALL_STATE(32)] = 2775,
  [SMALL_STATE(33)] = 2853,
  [SMALL_STATE(34)] = 2947,
  [SMALL_STATE(35)] = 3041,
  [SMALL_STATE(36)] = 3132,
  [SMALL_STATE(37)] = 3223,
  [SMALL_STATE(38)] = 3314,
  [SMALL_STATE(39)] = 3405,
  [SMALL_STATE(40)] = 3496,
  [SMALL_STATE(41)] = 3587,
  [SMALL_STATE(42)] = 3678,
  [SMALL_STATE(43)] = 3769,
  [SMALL_STATE(44)] = 3860,
  [SMALL_STATE(45)] = 3951,
  [SMALL_STATE(46)] = 4042,
  [SMALL_STATE(47)] = 4133,
  [SMALL_STATE(48)] = 4224,
  [SMALL_STATE(49)] = 4315,
  [SMALL_STATE(50)] = 4406,
  [SMALL_STATE(51)] = 4497,
  [SMALL_STATE(52)] = 4588,
  [SMALL_STATE(53)] = 4679,
  [SMALL_STATE(54)] = 4770,
  [SMALL_STATE(55)] = 4861,
  [SMALL_STATE(56)] = 4952,
  [SMALL_STATE(57)] = 5043,
  [SMALL_STATE(58)] = 5134,
  [SMALL_STATE(59)] = 5225,
  [SMALL_STATE(60)] = 5316,
  [SMALL_STATE(61)] = 5407,
  [SMALL_STATE(62)] = 5498,
  [SMALL_STATE(63)] = 5589,
  [SMALL_STATE(64)] = 5680,
  [SMALL_STATE(65)] = 5771,
  [SMALL_STATE(66)] = 5862,
  [SMALL_STATE(67)] = 5953,
  [SMALL_STATE(68)] = 6044,
  [SMALL_STATE(69)] = 6135,
  [SMALL_STATE(70)] = 6189,
  [SMALL_STATE(71)] = 6243,
  [SMALL_STATE(72)] = 6297,
  [SMALL_STATE(73)] = 6351,
  [SMALL_STATE(74)] = 6405,
  [SMALL_STATE(75)] = 6490,
  [SMALL_STATE(76)] = 6575,
  [SMALL_STATE(77)] = 6660,
  [SMALL_STATE(78)] = 6745,
  [SMALL_STATE(79)] = 6830,
  [SMALL_STATE(80)] = 6915,
  [SMALL_STATE(81)] = 7000,
  [SMALL_STATE(82)] = 7085,
  [SMALL_STATE(83)] = 7170,
  [SMALL_STATE(84)] = 7255,
  [SMALL_STATE(85)] = 7340,
  [SMALL_STATE(86)] = 7425,
  [SMALL_STATE(87)] = 7510,
  [SMALL_STATE(88)] = 7595,
  [SMALL_STATE(89)] = 7680,
  [SMALL_STATE(90)] = 7765,
  [SMALL_STATE(91)] = 7850,
  [SMALL_STATE(92)] = 7935,
  [SMALL_STATE(93)] = 8020,
  [SMALL_STATE(94)] = 8105,
  [SMALL_STATE(95)] = 8190,
  [SMALL_STATE(96)] = 8275,
  [SMALL_STATE(97)] = 8360,
  [SMALL_STATE(98)] = 8445,
  [SMALL_STATE(99)] = 8530,
  [SMALL_STATE(100)] = 8615,
  [SMALL_STATE(101)] = 8700,
  [SMALL_STATE(102)] = 8785,
  [SMALL_STATE(103)] = 8839,
  [SMALL_STATE(104)] = 8889,
  [SMALL_STATE(105)] = 8945,
  [SMALL_STATE(106)] = 9005,
  [SMALL_STATE(107)] = 9067,
  [SMALL_STATE(108)] = 9131,
  [SMALL_STATE(109)] = 9181,
  [SMALL_STATE(110)] = 9255,
  [SMALL_STATE(111)] = 9305,
  [SMALL_STATE(112)] = 9355,
  [SMALL_STATE(113)] = 9405,
  [SMALL_STATE(114)] = 9451,
  [SMALL_STATE(115)] = 9501,
  [SMALL_STATE(116)] = 9551,
  [SMALL_STATE(117)] = 9592,
  [SMALL_STATE(118)] = 9633,
  [SMALL_STATE(119)] = 9674,
  [SMALL_STATE(120)] = 9715,
  [SMALL_STATE(121)] = 9756,
  [SMALL_STATE(122)] = 9797,
  [SMALL_STATE(123)] = 9838,
  [SMALL_STATE(124)] = 9879,
  [SMALL_STATE(125)] = 9920,
  [SMALL_STATE(126)] = 9961,
  [SMALL_STATE(127)] = 10002,
  [SMALL_STATE(128)] = 10043,
  [SMALL_STATE(129)] = 10084,
  [SMALL_STATE(130)] = 10125,
  [SMALL_STATE(131)] = 10166,
  [SMALL_STATE(132)] = 10207,
  [SMALL_STATE(133)] = 10248,
  [SMALL_STATE(134)] = 10289,
  [SMALL_STATE(135)] = 10330,
  [SMALL_STATE(136)] = 10371,
  [SMALL_STATE(137)] = 10412,
  [SMALL_STATE(138)] = 10453,
  [SMALL_STATE(139)] = 10494,
  [SMALL_STATE(140)] = 10535,
  [SMALL_STATE(141)] = 10576,
  [SMALL_STATE(142)] = 10617,
  [SMALL_STATE(143)] = 10658,
  [SMALL_STATE(144)] = 10699,
  [SMALL_STATE(145)] = 10740,
  [SMALL_STATE(146)] = 10781,
  [SMALL_STATE(147)] = 10822,
  [SMALL_STATE(148)] = 10863,
  [SMALL_STATE(149)] = 10904,
  [SMALL_STATE(150)] = 10945,
  [SMALL_STATE(151)] = 10988,
  [SMALL_STATE(152)] = 11036,
  [SMALL_STATE(153)] = 11094,
  [SMALL_STATE(154)] = 11138,
  [SMALL_STATE(155)] = 11194,
  [SMALL_STATE(156)] = 11248,
  [SMALL_STATE(157)] = 11292,
  [SMALL_STATE(158)] = 11342,
  [SMALL_STATE(159)] = 11408,
  [SMALL_STATE(160)] = 11445,
  [SMALL_STATE(161)] = 11482,
  [SMALL_STATE(162)] = 11519,
  [SMALL_STATE(163)] = 11556,
  [SMALL_STATE(164)] = 11593,
  [SMALL_STATE(165)] = 11630,
  [SMALL_STATE(166)] = 11667,
  [SMALL_STATE(167)] = 11704,
  [SMALL_STATE(168)] = 11741,
  [SMALL_STATE(169)] = 11778,
  [SMALL_STATE(170)] = 11815,
  [SMALL_STATE(171)] = 11852,
  [SMALL_STATE(172)] = 11889,
  [SMALL_STATE(173)] = 11926,
  [SMALL_STATE(174)] = 11963,
  [SMALL_STATE(175)] = 12000,
  [SMALL_STATE(176)] = 12037,
  [SMALL_STATE(177)] = 12074,
  [SMALL_STATE(178)] = 12111,
  [SMALL_STATE(179)] = 12148,
  [SMALL_STATE(180)] = 12185,
  [SMALL_STATE(181)] = 12222,
  [SMALL_STATE(182)] = 12259,
  [SMALL_STATE(183)] = 12296,
  [SMALL_STATE(184)] = 12333,
  [SMALL_STATE(185)] = 12370,
  [SMALL_STATE(186)] = 12407,
  [SMALL_STATE(187)] = 12444,
  [SMALL_STATE(188)] = 12481,
  [SMALL_STATE(189)] = 12518,
  [SMALL_STATE(190)] = 12555,
  [SMALL_STATE(191)] = 12592,
  [SMALL_STATE(192)] = 12629,
  [SMALL_STATE(193)] = 12666,
  [SMALL_STATE(194)] = 12708,
  [SMALL_STATE(195)] = 12752,
  [SMALL_STATE(196)] = 12796,
  [SMALL_STATE(197)] = 12840,
  [SMALL_STATE(198)] = 12884,
  [SMALL_STATE(199)] = 12928,
  [SMALL_STATE(200)] = 12984,
  [SMALL_STATE(201)] = 13038,
  [SMALL_STATE(202)] = 13090,
  [SMALL_STATE(203)] = 13132,
  [SMALL_STATE(204)] = 13196,
  [SMALL_STATE(205)] = 13242,
  [SMALL_STATE(206)] = 13290,
  [SMALL_STATE(207)] = 13332,
  [SMALL_STATE(208)] = 13374,
  [SMALL_STATE(209)] = 13416,
  [SMALL_STATE(210)] = 13458,
  [SMALL_STATE(211)] = 13500,
  [SMALL_STATE(212)] = 13537,
  [SMALL_STATE(213)] = 13568,
  [SMALL_STATE(214)] = 13599,
  [SMALL_STATE(215)] = 13634,
  [SMALL_STATE(216)] = 13665,
  [SMALL_STATE(217)] = 13696,
  [SMALL_STATE(218)] = 13727,
  [SMALL_STATE(219)] = 13758,
  [SMALL_STATE(220)] = 13789,
  [SMALL_STATE(221)] = 13820,
  [SMALL_STATE(222)] = 13851,
  [SMALL_STATE(223)] = 13882,
  [SMALL_STATE(224)] = 13913,
  [SMALL_STATE(225)] = 13944,
  [SMALL_STATE(226)] = 13975,
  [SMALL_STATE(227)] = 14006,
  [SMALL_STATE(228)] = 14037,
  [SMALL_STATE(229)] = 14068,
  [SMALL_STATE(230)] = 14099,
  [SMALL_STATE(231)] = 14130,
  [SMALL_STATE(232)] = 14161,
  [SMALL_STATE(233)] = 14192,
  [SMALL_STATE(234)] = 14223,
  [SMALL_STATE(235)] = 14254,
  [SMALL_STATE(236)] = 14285,
  [SMALL_STATE(237)] = 14316,
  [SMALL_STATE(238)] = 14347,
  [SMALL_STATE(239)] = 14378,
  [SMALL_STATE(240)] = 14409,
  [SMALL_STATE(241)] = 14440,
  [SMALL_STATE(242)] = 14471,
  [SMALL_STATE(243)] = 14502,
  [SMALL_STATE(244)] = 14533,
  [SMALL_STATE(245)] = 14564,
  [SMALL_STATE(246)] = 14595,
  [SMALL_STATE(247)] = 14626,
  [SMALL_STATE(248)] = 14655,
  [SMALL_STATE(249)] = 14684,
  [SMALL_STATE(250)] = 14713,
  [SMALL_STATE(251)] = 14742,
  [SMALL_STATE(252)] = 14771,
  [SMALL_STATE(253)] = 14800,
  [SMALL_STATE(254)] = 14829,
  [SMALL_STATE(255)] = 14858,
  [SMALL_STATE(256)] = 14887,
  [SMALL_STATE(257)] = 14916,
  [SMALL_STATE(258)] = 14945,
  [SMALL_STATE(259)] = 14974,
  [SMALL_STATE(260)] = 15003,
  [SMALL_STATE(261)] = 15032,
  [SMALL_STATE(262)] = 15061,
  [SMALL_STATE(263)] = 15090,
  [SMALL_STATE(264)] = 15119,
  [SMALL_STATE(265)] = 15148,
  [SMALL_STATE(266)] = 15177,
  [SMALL_STATE(267)] = 15206,
  [SMALL_STATE(268)] = 15235,
  [SMALL_STATE(269)] = 15264,
  [SMALL_STATE(270)] = 15293,
  [SMALL_STATE(271)] = 15322,
  [SMALL_STATE(272)] = 15351,
  [SMALL_STATE(273)] = 15380,
  [SMALL_STATE(274)] = 15409,
  [SMALL_STATE(275)] = 15438,
  [SMALL_STATE(276)] = 15467,
  [SMALL_STATE(277)] = 15496,
  [SMALL_STATE(278)] = 15525,
  [SMALL_STATE(279)] = 15554,
  [SMALL_STATE(280)] = 15583,
  [SMALL_STATE(281)] = 15612,
  [SMALL_STATE(282)] = 15638,
  [SMALL_STATE(283)] = 15664,
  [SMALL_STATE(284)] = 15692,
  [SMALL_STATE(285)] = 15717,
  [SMALL_STATE(286)] = 15742,
  [SMALL_STATE(287)] = 15767,
  [SMALL_STATE(288)] = 15792,
  [SMALL_STATE(289)] = 15818,
  [SMALL_STATE(290)] = 15842,
  [SMALL_STATE(291)] = 15866,
  [SMALL_STATE(292)] = 15892,
  [SMALL_STATE(293)] = 15915,
  [SMALL_STATE(294)] = 15938,
  [SMALL_STATE(295)] = 15958,
  [SMALL_STATE(296)] = 15978,
  [SMALL_STATE(297)] = 16005,
  [SMALL_STATE(298)] = 16032,
  [SMALL_STATE(299)] = 16059,
  [SMALL_STATE(300)] = 16086,
  [SMALL_STATE(301)] = 16113,
  [SMALL_STATE(302)] = 16142,
  [SMALL_STATE(303)] = 16169,
  [SMALL_STATE(304)] = 16196,
  [SMALL_STATE(305)] = 16225,
  [SMALL_STATE(306)] = 16252,
  [SMALL_STATE(307)] = 16279,
  [SMALL_STATE(308)] = 16308,
  [SMALL_STATE(309)] = 16335,
  [SMALL_STATE(310)] = 16362,
  [SMALL_STATE(311)] = 16389,
  [SMALL_STATE(312)] = 16416,
  [SMALL_STATE(313)] = 16443,
  [SMALL_STATE(314)] = 16472,
  [SMALL_STATE(315)] = 16496,
  [SMALL_STATE(316)] = 16518,
  [SMALL_STATE(317)] = 16540,
  [SMALL_STATE(318)] = 16557,
  [SMALL_STATE(319)] = 16580,
  [SMALL_STATE(320)] = 16597,
  [SMALL_STATE(321)] = 16620,
  [SMALL_STATE(322)] = 16643,
  [SMALL_STATE(323)] = 16660,
  [SMALL_STATE(324)] = 16683,
  [SMALL_STATE(325)] = 16704,
  [SMALL_STATE(326)] = 16721,
  [SMALL_STATE(327)] = 16738,
  [SMALL_STATE(328)] = 16755,
  [SMALL_STATE(329)] = 16778,
  [SMALL_STATE(330)] = 16797,
  [SMALL_STATE(331)] = 16809,
  [SMALL_STATE(332)] = 16823,
  [SMALL_STATE(333)] = 16837,
  [SMALL_STATE(334)] = 16851,
  [SMALL_STATE(335)] = 16863,
  [SMALL_STATE(336)] = 16881,
  [SMALL_STATE(337)] = 16893,
  [SMALL_STATE(338)] = 16905,
  [SMALL_STATE(339)] = 16919,
  [SMALL_STATE(340)] = 16939,
  [SMALL_STATE(341)] = 16959,
  [SMALL_STATE(342)] = 16971,
  [SMALL_STATE(343)] = 16985,
  [SMALL_STATE(344)] = 16997,
  [SMALL_STATE(345)] = 17009,
  [SMALL_STATE(346)] = 17029,
  [SMALL_STATE(347)] = 17049,
  [SMALL_STATE(348)] = 17061,
  [SMALL_STATE(349)] = 17073,
  [SMALL_STATE(350)] = 17093,
  [SMALL_STATE(351)] = 17105,
  [SMALL_STATE(352)] = 17117,
  [SMALL_STATE(353)] = 17137,
  [SMALL_STATE(354)] = 17149,
  [SMALL_STATE(355)] = 17166,
  [SMALL_STATE(356)] = 17183,
  [SMALL_STATE(357)] = 17200,
  [SMALL_STATE(358)] = 17217,
  [SMALL_STATE(359)] = 17234,
  [SMALL_STATE(360)] = 17247,
  [SMALL_STATE(361)] = 17257,
  [SMALL_STATE(362)] = 17271,
  [SMALL_STATE(363)] = 17281,
  [SMALL_STATE(364)] = 17295,
  [SMALL_STATE(365)] = 17305,
  [SMALL_STATE(366)] = 17319,
  [SMALL_STATE(367)] = 17333,
  [SMALL_STATE(368)] = 17343,
  [SMALL_STATE(369)] = 17357,
  [SMALL_STATE(370)] = 17367,
  [SMALL_STATE(371)] = 17381,
  [SMALL_STATE(372)] = 17393,
  [SMALL_STATE(373)] = 17405,
  [SMALL_STATE(374)] = 17415,
  [SMALL_STATE(375)] = 17425,
  [SMALL_STATE(376)] = 17439,
  [SMALL_STATE(377)] = 17450,
  [SMALL_STATE(378)] = 17461,
  [SMALL_STATE(379)] = 17472,
  [SMALL_STATE(380)] = 17483,
  [SMALL_STATE(381)] = 17494,
  [SMALL_STATE(382)] = 17505,
  [SMALL_STATE(383)] = 17516,
  [SMALL_STATE(384)] = 17527,
  [SMALL_STATE(385)] = 17538,
  [SMALL_STATE(386)] = 17549,
  [SMALL_STATE(387)] = 17560,
  [SMALL_STATE(388)] = 17571,
  [SMALL_STATE(389)] = 17582,
  [SMALL_STATE(390)] = 17593,
  [SMALL_STATE(391)] = 17604,
  [SMALL_STATE(392)] = 17615,
  [SMALL_STATE(393)] = 17626,
  [SMALL_STATE(394)] = 17637,
  [SMALL_STATE(395)] = 17648,
  [SMALL_STATE(396)] = 17659,
  [SMALL_STATE(397)] = 17670,
  [SMALL_STATE(398)] = 17681,
  [SMALL_STATE(399)] = 17690,
  [SMALL_STATE(400)] = 17701,
  [SMALL_STATE(401)] = 17712,
  [SMALL_STATE(402)] = 17723,
  [SMALL_STATE(403)] = 17734,
  [SMALL_STATE(404)] = 17745,
  [SMALL_STATE(405)] = 17756,
  [SMALL_STATE(406)] = 17767,
  [SMALL_STATE(407)] = 17778,
  [SMALL_STATE(408)] = 17789,
  [SMALL_STATE(409)] = 17800,
  [SMALL_STATE(410)] = 17811,
  [SMALL_STATE(411)] = 17822,
  [SMALL_STATE(412)] = 17833,
  [SMALL_STATE(413)] = 17844,
  [SMALL_STATE(414)] = 17855,
  [SMALL_STATE(415)] = 17866,
  [SMALL_STATE(416)] = 17877,
  [SMALL_STATE(417)] = 17888,
  [SMALL_STATE(418)] = 17899,
  [SMALL_STATE(419)] = 17910,
  [SMALL_STATE(420)] = 17921,
  [SMALL_STATE(421)] = 17932,
  [SMALL_STATE(422)] = 17943,
  [SMALL_STATE(423)] = 17954,
  [SMALL_STATE(424)] = 17965,
  [SMALL_STATE(425)] = 17976,
  [SMALL_STATE(426)] = 17987,
  [SMALL_STATE(427)] = 17995,
  [SMALL_STATE(428)] = 18003,
  [SMALL_STATE(429)] = 18011,
  [SMALL_STATE(430)] = 18019,
  [SMALL_STATE(431)] = 18027,
  [SMALL_STATE(432)] = 18035,
  [SMALL_STATE(433)] = 18043,
  [SMALL_STATE(434)] = 18051,
  [SMALL_STATE(435)] = 18059,
  [SMALL_STATE(436)] = 18067,
  [SMALL_STATE(437)] = 18075,
  [SMALL_STATE(438)] = 18083,
  [SMALL_STATE(439)] = 18091,
  [SMALL_STATE(440)] = 18099,
  [SMALL_STATE(441)] = 18107,
  [SMALL_STATE(442)] = 18115,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(284),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(150),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(67),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(190),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(178),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(286),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(285),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(83),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(427),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(427),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(168),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(168),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_elems_repeat1, 2), SHIFT_REPEAT(313),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elems, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elems, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elems, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_elems, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_elems, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(59),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(405),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(57),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(409),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_end, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_end, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(43),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(418),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(64),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(387),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_elems_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_start, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_start, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(347),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(322),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(23),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(353),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(319),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(19),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(317),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(325),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(314),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_elems_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_elems_repeat1, 2), SHIFT_REPEAT(286),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(375),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_elems, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(363),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [779] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
