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
const WORD = /[0-9a-zA-Z]+/;
const NAME = /[a-zA-Z0-9\-_\.]+/;
const QUOTES = /"|'/;

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

    dsl: ($) => repeat($._definition),

    _definition: ($) => choice(
      $.constant,
      $.variable,
      $.workspace_definition,
      $.comment
    ),

    workspace_definition: ($) =>
      seq(
        'workspace',
        repeat1($.value),
        $.block
      ),

    _expression: ($) =>
      choice(
        $.identifier,
      ),

    _statement: ($) =>
      choice(
        $._children
      ),

    block: ($) =>
      seq(
        '{',
        repeat($._statement),
        '}'
      ),
    identifier: (_) => /[A-Za-z_]+/,
    value: ($) =>
      seq(
        QUOTES,
        ANYTHING,
        repeat($.substr),
        ANYTHING,
        QUOTES,
      ),

    substr: ($) => seq(
      '${',
      $.identifier,
      '}'
    ),

    constant: ($) =>
      seq(
        '\!const',
        $.identifier,
        $.value
      ),

    variable: ($) =>
      seq(
        '\!var',
        $.identifier,
        $.value
      ),

    _children: ($) =>
      choice(
        $.prop_name,
        $.prop_description,
      ),

    prop_name: ($) =>
      seq(
        'name',
        $.value
      ),

    prop_description: ($) =>
      seq(
        'description',
        $.value
      ),

    /**
     * @description Defines supported comment lines and comment blocks
     * @link https://docs.structurizr.com/dsl/basics#comments
     */
    comment: ($) => token(choice(
      // BUG: Esta recogiendo los colores hex como `#bada55` y lo tengo que
      // cambiar antes de activarlo
      // seq('#', /\\(.|\r?\n)|[^\\\n]*/),
      // seq(
      //   token.immediate('#'),
      //   alias(/[^\r\n]*/, $.text),
      //   NEWLINE
      // ),
      // BUG: Esta recogiendo los `//` de un URL pa' las definiciones de URL y
      // lo tengo que cambiar antes de activarlo
      // seq('//', /\\(.|\r?\n)|[^\\\n]*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ),
    ))
  },
});
