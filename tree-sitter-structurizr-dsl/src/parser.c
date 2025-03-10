#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_workspace = 2,
  anon_sym_BANGconst = 3,
  anon_sym_BANGvar = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  anon_sym_name = 9,
  anon_sym_description = 10,
  anon_sym_SLASH_SLASH = 11,
  aux_sym_alt_single_comment_token1 = 12,
  anon_sym_POUND = 13,
  anon_sym_SLASH_STAR = 14,
  aux_sym_multi_comment_token1 = 15,
  anon_sym_STAR_SLASH = 16,
  sym_dsl = 17,
  sym__definition = 18,
  sym_workspace_definition = 19,
  sym_constant = 20,
  sym_variable = 21,
  sym__expression = 22,
  sym_block = 23,
  sym__value = 24,
  sym_string = 25,
  sym__workspace_children = 26,
  sym_prop_name = 27,
  sym_prop_description = 28,
  sym__comment = 29,
  sym_alt_single_comment = 30,
  sym_single_comment = 31,
  sym_multi_comment = 32,
  aux_sym_dsl_repeat1 = 33,
  aux_sym_workspace_definition_repeat1 = 34,
  aux_sym_block_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_workspace] = "workspace",
  [anon_sym_BANGconst] = "!const",
  [anon_sym_BANGvar] = "!var",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_name] = "name",
  [anon_sym_description] = "description",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_alt_single_comment_token1] = "alt_single_comment_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_multi_comment_token1] = "multi_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_dsl] = "dsl",
  [sym__definition] = "_definition",
  [sym_workspace_definition] = "workspace_definition",
  [sym_constant] = "constant",
  [sym_variable] = "variable",
  [sym__expression] = "_expression",
  [sym_block] = "block",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym__workspace_children] = "_workspace_children",
  [sym_prop_name] = "prop_name",
  [sym_prop_description] = "prop_description",
  [sym__comment] = "_comment",
  [sym_alt_single_comment] = "alt_single_comment",
  [sym_single_comment] = "single_comment",
  [sym_multi_comment] = "multi_comment",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_definition_repeat1] = "workspace_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_BANGconst] = anon_sym_BANGconst,
  [anon_sym_BANGvar] = anon_sym_BANGvar,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_alt_single_comment_token1] = aux_sym_alt_single_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_multi_comment_token1] = aux_sym_multi_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_dsl] = sym_dsl,
  [sym__definition] = sym__definition,
  [sym_workspace_definition] = sym_workspace_definition,
  [sym_constant] = sym_constant,
  [sym_variable] = sym_variable,
  [sym__expression] = sym__expression,
  [sym_block] = sym_block,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym__workspace_children] = sym__workspace_children,
  [sym_prop_name] = sym_prop_name,
  [sym_prop_description] = sym_prop_description,
  [sym__comment] = sym__comment,
  [sym_alt_single_comment] = sym_alt_single_comment,
  [sym_single_comment] = sym_single_comment,
  [sym_multi_comment] = sym_multi_comment,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_definition_repeat1] = aux_sym_workspace_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
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
  [aux_sym_alt_single_comment_token1] = {
    .visible = false,
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
  [aux_sym_multi_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
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
  [sym_multi_comment] = {
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '!', 5,
        '#', 26,
        '*', 3,
        '/', 2,
        '{', 15,
        '}', 16,
        '"', 18,
        '\'', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANGconst);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANGvar);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_alt_single_comment_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '*') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_alt_single_comment_token1);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_alt_single_comment_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_alt_single_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_multi_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
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
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'w') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_BANGconst] = ACTIONS(1),
    [anon_sym_BANGvar] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(35),
    [sym__definition] = STATE(2),
    [sym_workspace_definition] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_variable] = STATE(2),
    [sym__comment] = STATE(2),
    [sym_alt_single_comment] = STATE(2),
    [sym_single_comment] = STATE(2),
    [sym_multi_comment] = STATE(2),
    [aux_sym_dsl_repeat1] = STATE(2),
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
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(3), 9,
      sym__definition,
      sym_workspace_definition,
      sym_constant,
      sym_variable,
      sym__comment,
      sym_alt_single_comment,
      sym_single_comment,
      sym_multi_comment,
      aux_sym_dsl_repeat1,
  [33] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_workspace,
    ACTIONS(24), 1,
      anon_sym_BANGconst,
    ACTIONS(27), 1,
      anon_sym_BANGvar,
    ACTIONS(30), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 9,
      sym__definition,
      sym_workspace_definition,
      sym_constant,
      sym_variable,
      sym__comment,
      sym_alt_single_comment,
      sym_single_comment,
      sym_multi_comment,
      aux_sym_dsl_repeat1,
  [66] = 1,
    ACTIONS(39), 12,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      anon_sym_name,
      anon_sym_description,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [81] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [91] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [101] = 1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [111] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_name,
    ACTIONS(51), 1,
      anon_sym_description,
    STATE(14), 4,
      sym__workspace_children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [127] = 1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [137] = 1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [147] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [157] = 1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [167] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [177] = 4,
    ACTIONS(49), 1,
      anon_sym_name,
    ACTIONS(51), 1,
      anon_sym_description,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(18), 4,
      sym__workspace_children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [193] = 1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [203] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [213] = 1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [223] = 4,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_name,
    ACTIONS(76), 1,
      anon_sym_description,
    STATE(18), 4,
      sym__workspace_children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [239] = 1,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [249] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(15), 1,
      sym_block,
    STATE(22), 2,
      sym_string,
      aux_sym_workspace_definition_repeat1,
  [263] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(9), 1,
      sym_block,
    STATE(20), 2,
      sym_string,
      aux_sym_workspace_definition_repeat1,
  [277] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      aux_sym_string_token1,
    STATE(22), 2,
      sym_string,
      aux_sym_workspace_definition_repeat1,
  [288] = 1,
    ACTIONS(90), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_description,
  [294] = 3,
    ACTIONS(92), 1,
      aux_sym_alt_single_comment_token1,
    ACTIONS(94), 1,
      aux_sym_multi_comment_token1,
    ACTIONS(96), 1,
      anon_sym_STAR_SLASH,
  [304] = 2,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(12), 2,
      sym__value,
      sym_string,
  [312] = 3,
    ACTIONS(98), 1,
      aux_sym_alt_single_comment_token1,
    ACTIONS(100), 1,
      aux_sym_multi_comment_token1,
    ACTIONS(102), 1,
      anon_sym_STAR_SLASH,
  [322] = 1,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_description,
  [328] = 2,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(27), 2,
      sym__value,
      sym_string,
  [336] = 2,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(10), 2,
      sym__value,
      sym_string,
  [344] = 2,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(23), 2,
      sym__value,
      sym_string,
  [352] = 2,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(29), 1,
      sym__expression,
  [359] = 2,
    ACTIONS(102), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(108), 1,
      aux_sym_multi_comment_token1,
  [366] = 2,
    ACTIONS(110), 1,
      aux_sym_multi_comment_token1,
    ACTIONS(112), 1,
      anon_sym_STAR_SLASH,
  [373] = 2,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(25), 1,
      sym__expression,
  [380] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [384] = 1,
    ACTIONS(118), 1,
      aux_sym_string_token1,
  [388] = 1,
    ACTIONS(120), 1,
      anon_sym_STAR_SLASH,
  [392] = 1,
    ACTIONS(122), 1,
      aux_sym_string_token2,
  [396] = 1,
    ACTIONS(124), 1,
      aux_sym_alt_single_comment_token1,
  [400] = 1,
    ACTIONS(126), 1,
      aux_sym_alt_single_comment_token1,
  [404] = 1,
    ACTIONS(128), 1,
      anon_sym_STAR_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 277,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 304,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 322,
  [SMALL_STATE(28)] = 328,
  [SMALL_STATE(29)] = 336,
  [SMALL_STATE(30)] = 344,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 359,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 373,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 392,
  [SMALL_STATE(39)] = 396,
  [SMALL_STATE(40)] = 400,
  [SMALL_STATE(41)] = 404,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_comment, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_comment, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_comment, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_definition, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_single_comment, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_definition, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_comment, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_comment, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_definition_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_name, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_description, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
