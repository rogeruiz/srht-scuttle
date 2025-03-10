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
const NAME = /[a-zA-Z0-9\-_\.]+/;
const HEX_COLOR = /#([0-9A-Za-f]{3}){1,2}/;
const QUOTES = /"|'/;
const TEXT = /[^"'\\\r\n]+/;

/**
 *
 * @name lower
 * @description Makes the string lower-case since Structurizr is case-insensitive.
 * @link https://docs.structurizr.com/dsl/basics#dsl-rules
 * @param {string} k - The keyword being evaluated
 * @returns {string} - A lowercase version of the string
 */
function lower(k) {
  if (typeof k !== 'string') {
    throw `Expected ${k} to be a string.`
  }
  return k.toLowerCase();
}

module.exports = grammar({
  name: 'structurizr_dsl',

  word: ($) => $.identifier,

  /**
   * @description Tree-sitter rules definitions
   */
  rules: {

    dsl: $ => repeat($._definition),

    _definition: $ => choice(
      $.constant,
      $.variable,
      $._comment,
      $.workspace_definition
    ),

    workspace_definition: $ =>
      seq(
        'workspace',
        repeat($.string),
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
        // $.hexcode_color,
        // $.substitution,
        // $.number
      ),

    identifier: _ => token(NAME),

    number: _ => token(NUMBER),

    string: _ => seq(QUOTES, TEXT, QUOTES),

    hexcode_color: _ => token(HEX_COLOR),

    substitution: $ => seq('${', $._expression, '}'),

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
        $.single_comment,
        $.alt_single_comment,
        $.multi_comment
      ),

    alt_single_comment: _ => seq('//', ANYTHING_OR_NONE),

    single_comment: _ => seq('#', ANYTHING_OR_NONE),

    multi_comment: _ =>
      seq(
        '/*',
        optional(NEWLINE),
        optional(ANYTHING_OR_NONE),
        optional(NEWLINE),
        '*/'
      ),
  },
});
