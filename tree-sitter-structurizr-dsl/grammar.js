/**
 * @file Grammar for Structurizr DSL
 * @author Roger Steve Ruiz <hi@rog.gr>
 * @license AGPLv3
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NEWLINE = /\r?\n/;
const ANYTHING_OR_NONE = /[^\n\r]*/;
const ANYTHING = /[^\n\r]+/;
const NUMBER = /[0-9]+(\.[0-9]+)?/;
// const VALID_NAME = token(/[a-zA-Z_*][a-zA-Z0-9\-_\.]+/);
const VALID_NAME = token(/[a-zA-Z0-9\-_\.]+/);
const HEX_COLOR = token(/#([0-9A-Za-f]{3}){1,2}/);
const QUOTES = /"|'/;
const TEXT = /[^"'\\\r\n]+/;

module.exports = grammar({
  name: 'structurizr_dsl',
  word: $ => $.identifier,

  /**
   * @description Tree-sitter rules definitions
   */
  rules: {

    dsl: $ => repeat($._definition),

    _definition: $ => choice(
      $.constant,
      $.variable,
      $._comment,
      $.workspace_definition,
      $.workspace_extend_definition
    ),

    workspace_definition: $ =>
      seq(
        'workspace',
        repeat($.string),
        $.block
      ),

    model_definition: $ =>
      seq(
        'workspace',
        repeat($.string),
        $.block
      ),

    workspace_extend_definition: $ =>
      seq(
        'workspace',
        'extends',
        $._extends_path,
        $.block
      ),

    constant: $ => seq('!const', $._expression, $._value),

    variable: $ => seq('!var', $._expression, $._value),

    _expression: $ =>
      choice(
        $.identifier
      ),

    block: $ =>
      seq(
        '{',
        repeat($._workspace_children),
        '}'
      ),

    _value: $ =>
      choice(
        $.string,
        $.hexcode_color
        // $.number
      ),

    identifier: _ => token(VALID_NAME),

    number: _ => token(NUMBER),
    string: $ => seq(
      choice('"', "'"),
      repeat(
        choice(
          prec(2, $.substitution),
          prec(1, /[^"'$]+/)
        )
      ),
      choice('"', "'")
    ),
    substitution: $ => seq('${', $.identifier, '}'),

    _extends_path: $ => choice($.url_path, $.file_path),
    url_path: _ => /("|')http(s)?:\/\/.+("|')/,
    file_path: _ => /("|')\.\/workspace\.(?:json|dsl)("|')/,

    hexcode_color: _ => token(HEX_COLOR),

    _workspace_children: $ =>
      choice(
        $.prop_name,
        $.prop_description
      ),

    prop_name: $ => seq('name', $._value),

    prop_description: $ => seq('description', $._value),

    /**
     * @description Defines supported comment lines and comment blocks
     * @link https://docs.structurizr.com/dsl/basics#comments
     */
    _comment: $ =>
      choice(
        $.alt_single_comment,
        $.single_comment,
        $.block_comment
      ),

    alt_single_comment: $ => seq('//', optional($.comment_text)),
    single_comment: $ => seq('#', optional($.comment_text)),
    block_comment: $ =>
      seq(
        '/*',
        optional($.comment_text),
        '*/'
      ),
    comment_text: _ => repeat1(/.|\r|\n/),
  },
});
