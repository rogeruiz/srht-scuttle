alias h := default
alias help := default

[private]
@default:
    just --list

alias tsg := ts-generate
alias tsp := ts-parse

[working-directory: './tree-sitter-structurizr-dsl']
ts-generate:
    tree-sitter generate

[working-directory: './tree-sitter-structurizr-dsl']
ts-parse archivo: (ts-generate)
    tree-sitter parse {{ absolute_path(join("tree-sitter-structurizr-dsl", archivo)) }}
