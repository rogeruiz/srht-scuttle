/**
 * @file Grammar for Structurizr DSL
 * @author Roger Steve Ruiz <hi@rog.gr>
 * @license AGPLv3
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "structurizr_dsl",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
