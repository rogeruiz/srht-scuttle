package tree_sitter_structurizr_dsl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_structurizr_dsl "git.sr.ht/~rogeruiz/scuttle/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_structurizr_dsl.Language())
	if language == nil {
		t.Errorf("Error loading StructurizrDSL grammar")
	}
}
