/**
 * @file Grammar for Structurizr DSL
 * @author Roger Steve Ruiz <hi@rog.gr>
 * @license AGPLv3
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'structurizr_dsl',

  /**
   * @description Tree-sitter rules definitions
   */
  rules: {

    dsl: ($) => choice($.comment),


    /**
     * @description Defines supported comment lines and comment blocks
     * @link https://docs.structurizr.com/dsl/basics#comments
     */
    comment: (_) => token(choice(
      // BUG: Esta recogiendo los colores hex como `#bada55` y lo tengo que
      // cambiar antes de activarlo
      // seq('#', /\\(.|\r?\n)|[^\\\n]*/),
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
