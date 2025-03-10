#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_workspace = 2,
  anon_sym_extends = 3,
  anon_sym_BANGconst = 4,
  anon_sym_BANGvar = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_DOLLAR_LBRACE = 11,
  sym_url_path = 12,
  sym_file_path = 13,
  sym_hexcode_color = 14,
  anon_sym_name = 15,
  anon_sym_description = 16,
  anon_sym_SLASH_SLASH = 17,
  anon_sym_POUND = 18,
  anon_sym_SLASH_STAR = 19,
  anon_sym_STAR_SLASH = 20,
  aux_sym_comment_text_token1 = 21,
  sym_dsl = 22,
  sym__definition = 23,
  sym_workspace_definition = 24,
  sym_workspace_extend_definition = 25,
  sym_constant = 26,
  sym_variable = 27,
  sym__expression = 28,
  sym_block = 29,
  sym__value = 30,
  sym_string = 31,
  sym_substitution = 32,
  sym__extends_path = 33,
  sym__workspace_children = 34,
  sym_prop_name = 35,
  sym_prop_description = 36,
  sym__comment = 37,
  sym_alt_single_comment = 38,
  sym_single_comment = 39,
  sym_block_comment = 40,
  sym_comment_text = 41,
  aux_sym_dsl_repeat1 = 42,
  aux_sym_workspace_definition_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_string_repeat1 = 45,
  aux_sym_comment_text_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_workspace] = "workspace",
  [anon_sym_extends] = "extends",
  [anon_sym_BANGconst] = "!const",
  [anon_sym_BANGvar] = "!var",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_url_path] = "url_path",
  [sym_file_path] = "file_path",
  [sym_hexcode_color] = "hexcode_color",
  [anon_sym_name] = "name",
  [anon_sym_description] = "description",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [aux_sym_comment_text_token1] = "comment_text_token1",
  [sym_dsl] = "dsl",
  [sym__definition] = "_definition",
  [sym_workspace_definition] = "workspace_definition",
  [sym_workspace_extend_definition] = "workspace_extend_definition",
  [sym_constant] = "constant",
  [sym_variable] = "variable",
  [sym__expression] = "_expression",
  [sym_block] = "block",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_substitution] = "substitution",
  [sym__extends_path] = "_extends_path",
  [sym__workspace_children] = "_workspace_children",
  [sym_prop_name] = "prop_name",
  [sym_prop_description] = "prop_description",
  [sym__comment] = "_comment",
  [sym_alt_single_comment] = "alt_single_comment",
  [sym_single_comment] = "single_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment_text] = "comment_text",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_definition_repeat1] = "workspace_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_comment_text_repeat1] = "comment_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_BANGconst] = anon_sym_BANGconst,
  [anon_sym_BANGvar] = anon_sym_BANGvar,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_url_path] = sym_url_path,
  [sym_file_path] = sym_file_path,
  [sym_hexcode_color] = sym_hexcode_color,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [aux_sym_comment_text_token1] = aux_sym_comment_text_token1,
  [sym_dsl] = sym_dsl,
  [sym__definition] = sym__definition,
  [sym_workspace_definition] = sym_workspace_definition,
  [sym_workspace_extend_definition] = sym_workspace_extend_definition,
  [sym_constant] = sym_constant,
  [sym_variable] = sym_variable,
  [sym__expression] = sym__expression,
  [sym_block] = sym_block,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_substitution] = sym_substitution,
  [sym__extends_path] = sym__extends_path,
  [sym__workspace_children] = sym__workspace_children,
  [sym_prop_name] = sym_prop_name,
  [sym_prop_description] = sym_prop_description,
  [sym__comment] = sym__comment,
  [sym_alt_single_comment] = sym_alt_single_comment,
  [sym_single_comment] = sym_single_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_comment_text] = sym_comment_text,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_definition_repeat1] = aux_sym_workspace_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_comment_text_repeat1] = aux_sym_comment_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGvar] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_url_path] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_hexcode_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dsl] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_workspace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_extend_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__extends_path] = {
    .visible = false,
    .named = true,
  },
  [sym__workspace_children] = {
    .visible = false,
    .named = true,
  },
  [sym_prop_name] = {
    .visible = true,
    .named = true,
  },
  [sym_prop_description] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_alt_single_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dsl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workspace_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 8,
  [40] = 9,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '!', 16,
        '"', 73,
        '#', 83,
        '$', 46,
        '\'', 74,
        '*', 7,
        '/', 3,
        'w', 68,
        '{', 62,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'j') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(79);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANGconst);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANGvar);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_url_path);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_file_path);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_hexcode_color);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_hexcode_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      if (lookahead == '*') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_text_token1);
      if (lookahead == 'o') ADVANCE(35);
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
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_BANGconst] = ACTIONS(1),
    [anon_sym_BANGvar] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(44),
    [sym__definition] = STATE(3),
    [sym_workspace_definition] = STATE(3),
    [sym_workspace_extend_definition] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_variable] = STATE(3),
    [sym__comment] = STATE(3),
    [sym_alt_single_comment] = STATE(3),
    [sym_single_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [aux_sym_dsl_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_workspace] = ACTIONS(5),
    [anon_sym_BANGconst] = ACTIONS(7),
    [anon_sym_BANGvar] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_workspace,
    ACTIONS(22), 1,
      anon_sym_BANGconst,
    ACTIONS(25), 1,
      anon_sym_BANGvar,
    ACTIONS(28), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      anon_sym_SLASH_STAR,
    STATE(2), 10,
      sym__definition,
      sym_workspace_definition,
      sym_workspace_extend_definition,
      sym_constant,
      sym_variable,
      sym__comment,
      sym_alt_single_comment,
      sym_single_comment,
      sym_block_comment,
      aux_sym_dsl_repeat1,
  [34] = 8,
    ACTIONS(5), 1,
      anon_sym_workspace,
    ACTIONS(7), 1,
      anon_sym_BANGconst,
    ACTIONS(9), 1,
      anon_sym_BANGvar,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(2), 10,
      sym__definition,
      sym_workspace_definition,
      sym_workspace_extend_definition,
      sym_constant,
      sym_variable,
      sym__comment,
      sym_alt_single_comment,
      sym_single_comment,
      sym_block_comment,
      aux_sym_dsl_repeat1,
  [68] = 1,
    ACTIONS(39), 13,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_name,
      anon_sym_description,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [84] = 1,
    ACTIONS(41), 13,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_name,
      anon_sym_description,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [100] = 5,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_comment_text_token1,
    STATE(8), 1,
      aux_sym_comment_text_repeat1,
    STATE(13), 1,
      sym_comment_text,
    ACTIONS(45), 6,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [121] = 5,
    ACTIONS(47), 1,
      aux_sym_comment_text_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_comment_text_repeat1,
    STATE(15), 1,
      sym_comment_text,
    ACTIONS(51), 6,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [142] = 4,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_comment_text_token1,
    STATE(9), 1,
      aux_sym_comment_text_repeat1,
    ACTIONS(55), 6,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [160] = 4,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_comment_text_token1,
    STATE(9), 1,
      aux_sym_comment_text_repeat1,
    ACTIONS(61), 6,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [178] = 1,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [188] = 4,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_name,
    ACTIONS(73), 1,
      anon_sym_description,
    STATE(11), 4,
      sym__workspace_children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [204] = 1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [214] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [224] = 5,
    ACTIONS(80), 1,
      anon_sym_extends,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(26), 2,
      sym_string,
      aux_sym_workspace_definition_repeat1,
  [242] = 1,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [252] = 1,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [262] = 4,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_name,
    ACTIONS(94), 1,
      anon_sym_description,
    STATE(11), 4,
      sym__workspace_children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [278] = 1,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [288] = 1,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [298] = 1,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [308] = 1,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [318] = 1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [328] = 1,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [338] = 4,
    ACTIONS(92), 1,
      anon_sym_name,
    ACTIONS(94), 1,
      anon_sym_description,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(17), 4,
      sym__workspace_children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [354] = 4,
    ACTIONS(112), 1,
      aux_sym_string_token1,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(110), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(27), 2,
      sym_substitution,
      aux_sym_string_repeat1,
  [369] = 4,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(32), 2,
      sym_string,
      aux_sym_workspace_definition_repeat1,
  [384] = 4,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(118), 1,
      aux_sym_string_token1,
    ACTIONS(116), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(28), 2,
      sym_substitution,
      aux_sym_string_repeat1,
  [399] = 4,
    ACTIONS(122), 1,
      aux_sym_string_token1,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(120), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(28), 2,
      sym_substitution,
      aux_sym_string_repeat1,
  [414] = 3,
    ACTIONS(128), 1,
      sym_hexcode_color,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(20), 2,
      sym__value,
      sym_string,
  [426] = 3,
    ACTIONS(130), 1,
      sym_hexcode_color,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(37), 2,
      sym__value,
      sym_string,
  [438] = 3,
    ACTIONS(132), 1,
      sym_hexcode_color,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(19), 2,
      sym__value,
      sym_string,
  [450] = 3,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(32), 2,
      sym_string,
      aux_sym_workspace_definition_repeat1,
  [462] = 3,
    ACTIONS(139), 1,
      sym_hexcode_color,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(38), 2,
      sym__value,
      sym_string,
  [474] = 4,
    ACTIONS(141), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(143), 1,
      aux_sym_comment_text_token1,
    STATE(39), 1,
      aux_sym_comment_text_repeat1,
    STATE(46), 1,
      sym_comment_text,
  [487] = 2,
    ACTIONS(147), 1,
      aux_sym_string_token1,
    ACTIONS(145), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [496] = 2,
    STATE(43), 1,
      sym__extends_path,
    ACTIONS(149), 2,
      sym_url_path,
      sym_file_path,
  [504] = 1,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_description,
  [510] = 1,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_description,
  [516] = 3,
    ACTIONS(55), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(155), 1,
      aux_sym_comment_text_token1,
    STATE(40), 1,
      aux_sym_comment_text_repeat1,
  [526] = 3,
    ACTIONS(61), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(157), 1,
      aux_sym_comment_text_token1,
    STATE(40), 1,
      aux_sym_comment_text_repeat1,
  [536] = 2,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(29), 1,
      sym__expression,
  [543] = 2,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(31), 1,
      sym__expression,
  [550] = 2,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [557] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [561] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [565] = 1,
    ACTIONS(168), 1,
      anon_sym_STAR_SLASH,
  [569] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 298,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 338,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 399,
  [SMALL_STATE(29)] = 414,
  [SMALL_STATE(30)] = 426,
  [SMALL_STATE(31)] = 438,
  [SMALL_STATE(32)] = 450,
  [SMALL_STATE(33)] = 462,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 536,
  [SMALL_STATE(42)] = 543,
  [SMALL_STATE(43)] = 550,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 561,
  [SMALL_STATE(46)] = 565,
  [SMALL_STATE(47)] = 569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_single_comment, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_single_comment, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_comment, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_comment, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_text, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_text_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_definition, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_single_comment, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_comment, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_definition, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_extend_definition, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_definition_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_description, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_name, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_structurizr_dsl(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
