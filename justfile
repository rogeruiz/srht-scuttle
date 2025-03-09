alias a := default
alias ayuda := default
alias h := default
alias help := default

[private]
@default:
    just --list

alias tsg := ts-generar
alias tsp := ts-procesar
alias tsm := ts-mire

[doc('Genera la gramática para Tree-sitter')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('ops')]
ts-generar:
    tree-sitter generate

[doc('Procesa un <archivo> usando la gramática generada')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('test')]
ts-procesar archivo: (ts-generar)
    tree-sitter parse {{ absolute_path(join("tree-sitter-structurizr-dsl", archivo)) }}

[doc('Ponga le <pilas> a un archivo y ejecute la "<receta>" incluyendo parametros')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('dev')]
ts-mire pilas receta:
    ls {{ pilas }} | entr just {{ receta }}
