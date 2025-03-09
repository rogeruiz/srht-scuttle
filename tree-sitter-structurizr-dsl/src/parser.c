#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_workspace = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  aux_sym_value_token1 = 5,
  aux_sym_value_token2 = 6,
  anon_sym_DOLLAR_LBRACE = 7,
  anon_sym_BANGconst = 8,
  anon_sym_BANGvar = 9,
  anon_sym_name = 10,
  anon_sym_description = 11,
  sym_comment = 12,
  sym_dsl = 13,
  sym__definition = 14,
  sym_workspace_definition = 15,
  sym__statement = 16,
  sym_block = 17,
  sym_value = 18,
  sym_substr = 19,
  sym_constant = 20,
  sym_variable = 21,
  sym__children = 22,
  sym_prop_name = 23,
  sym_prop_description = 24,
  aux_sym_dsl_repeat1 = 25,
  aux_sym_workspace_definition_repeat1 = 26,
  aux_sym_block_repeat1 = 27,
  aux_sym_value_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_workspace] = "workspace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_value_token1] = "value_token1",
  [aux_sym_value_token2] = "value_token2",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_BANGconst] = "!const",
  [anon_sym_BANGvar] = "!var",
  [anon_sym_name] = "name",
  [anon_sym_description] = "description",
  [sym_comment] = "comment",
  [sym_dsl] = "dsl",
  [sym__definition] = "_definition",
  [sym_workspace_definition] = "workspace_definition",
  [sym__statement] = "_statement",
  [sym_block] = "block",
  [sym_value] = "value",
  [sym_substr] = "substr",
  [sym_constant] = "constant",
  [sym_variable] = "variable",
  [sym__children] = "_children",
  [sym_prop_name] = "prop_name",
  [sym_prop_description] = "prop_description",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_definition_repeat1] = "workspace_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [aux_sym_value_token2] = aux_sym_value_token2,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_BANGconst] = anon_sym_BANGconst,
  [anon_sym_BANGvar] = anon_sym_BANGvar,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_description] = anon_sym_description,
  [sym_comment] = sym_comment,
  [sym_dsl] = sym_dsl,
  [sym__definition] = sym__definition,
  [sym_workspace_definition] = sym_workspace_definition,
  [sym__statement] = sym__statement,
  [sym_block] = sym_block,
  [sym_value] = sym_value,
  [sym_substr] = sym_substr,
  [sym_constant] = sym_constant,
  [sym_variable] = sym_variable,
  [sym__children] = sym__children,
  [sym_prop_name] = sym_prop_name,
  [sym_prop_description] = sym_prop_description,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_definition_repeat1] = aux_sym_workspace_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
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
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_substr] = {
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
  [sym__children] = {
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
  [aux_sym_value_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANGconst);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANGvar);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
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
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_BANGconst] = ACTIONS(1),
    [anon_sym_BANGvar] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(28),
    [sym__definition] = STATE(2),
    [sym_workspace_definition] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_variable] = STATE(2),
    [aux_sym_dsl_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_workspace] = ACTIONS(5),
    [anon_sym_BANGconst] = ACTIONS(7),
    [anon_sym_BANGvar] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_workspace,
    ACTIONS(7), 1,
      anon_sym_BANGconst,
    ACTIONS(9), 1,
      anon_sym_BANGvar,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    STATE(4), 5,
      sym__definition,
      sym_workspace_definition,
      sym_constant,
      sym_variable,
      aux_sym_dsl_repeat1,
  [23] = 1,
    ACTIONS(17), 10,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_value_token1,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_name,
      anon_sym_description,
      sym_comment,
  [36] = 6,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_workspace,
    ACTIONS(24), 1,
      anon_sym_BANGconst,
    ACTIONS(27), 1,
      anon_sym_BANGvar,
    ACTIONS(30), 1,
      sym_comment,
    STATE(4), 5,
      sym__definition,
      sym_workspace_definition,
      sym_constant,
      sym_variable,
      aux_sym_dsl_repeat1,
  [59] = 1,
    ACTIONS(33), 10,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_value_token1,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      anon_sym_name,
      anon_sym_description,
      sym_comment,
  [72] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_name,
    ACTIONS(39), 1,
      anon_sym_description,
    STATE(7), 5,
      sym__statement,
      sym__children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [89] = 4,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_name,
    ACTIONS(46), 1,
      anon_sym_description,
    STATE(7), 5,
      sym__statement,
      sym__children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [106] = 4,
    ACTIONS(37), 1,
      anon_sym_name,
    ACTIONS(39), 1,
      anon_sym_description,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(6), 5,
      sym__statement,
      sym__children,
      sym_prop_name,
      sym_prop_description,
      aux_sym_block_repeat1,
  [123] = 1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      sym_comment,
  [131] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      sym_comment,
  [139] = 1,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      sym_comment,
  [147] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      sym_comment,
  [155] = 4,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_value_token1,
    STATE(10), 1,
      sym_block,
    STATE(16), 2,
      sym_value,
      aux_sym_workspace_definition_repeat1,
  [169] = 1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_BANGconst,
      anon_sym_BANGvar,
      sym_comment,
  [177] = 3,
    ACTIONS(65), 1,
      aux_sym_value_token2,
    ACTIONS(67), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(17), 2,
      sym_substr,
      aux_sym_value_repeat1,
  [188] = 3,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      aux_sym_value_token1,
    STATE(16), 2,
      sym_value,
      aux_sym_workspace_definition_repeat1,
  [199] = 3,
    ACTIONS(67), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(74), 1,
      aux_sym_value_token2,
    STATE(18), 2,
      sym_substr,
      aux_sym_value_repeat1,
  [210] = 3,
    ACTIONS(76), 1,
      aux_sym_value_token2,
    ACTIONS(78), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(18), 2,
      sym_substr,
      aux_sym_value_repeat1,
  [221] = 1,
    ACTIONS(81), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_description,
  [227] = 2,
    ACTIONS(61), 1,
      aux_sym_value_token1,
    STATE(13), 2,
      sym_value,
      aux_sym_workspace_definition_repeat1,
  [235] = 1,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_description,
  [241] = 2,
    ACTIONS(61), 1,
      aux_sym_value_token1,
    STATE(11), 1,
      sym_value,
  [248] = 2,
    ACTIONS(61), 1,
      aux_sym_value_token1,
    STATE(19), 1,
      sym_value,
  [255] = 1,
    ACTIONS(85), 2,
      aux_sym_value_token2,
      anon_sym_DOLLAR_LBRACE,
  [260] = 2,
    ACTIONS(61), 1,
      aux_sym_value_token1,
    STATE(9), 1,
      sym_value,
  [267] = 2,
    ACTIONS(61), 1,
      aux_sym_value_token1,
    STATE(21), 1,
      sym_value,
  [274] = 1,
    ACTIONS(87), 1,
      sym_identifier,
  [278] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [282] = 1,
    ACTIONS(91), 1,
      sym_identifier,
  [286] = 1,
    ACTIONS(93), 1,
      aux_sym_value_token1,
  [290] = 1,
    ACTIONS(95), 1,
      sym_identifier,
  [294] = 1,
    ACTIONS(97), 1,
      aux_sym_value_token2,
  [298] = 1,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
  [302] = 1,
    ACTIONS(101), 1,
      aux_sym_value_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 227,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 241,
  [SMALL_STATE(23)] = 248,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 267,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 278,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 286,
  [SMALL_STATE(31)] = 290,
  [SMALL_STATE(32)] = 294,
  [SMALL_STATE(33)] = 298,
  [SMALL_STATE(34)] = 302,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_definition, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_definition_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_name, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_description, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substr, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
