alias a := default
alias ayuda := default
alias h := default
alias help := default

[private]
@default:
    just --list

alias tsg := ts-generar
alias tsp := ts-procesar
alias tse := ts-ensayo
alias tsm := ts-mire
alias tsme := ts-mire-ensayos

[doc('Genera la gramática para Tree-sitter')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('ops')]
ts-generar:
    tree-sitter generate

[doc('Ejecute los ensayos con la gramática')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('test')]
ts-ensayo: (ts-generar)
    tree-sitter test

[doc('Procesa un <archivo> usando la gramática generada')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('test')]
ts-procesar archivo: (ts-generar)
    tree-sitter parse {{ absolute_path(join("tree-sitter-structurizr-dsl", archivo)) }}

[doc('Ponga le <pilas> a archivo(s) y ejecute la "<receta>" incluyendo parametros')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('dev')]
ts-mire pilas receta:
    {{ pilas }} | entr just {{ receta }}

[doc('Ayuda con desarrollo de ensayos')]
[working-directory: './tree-sitter-structurizr-dsl']
[group('dev')]
ts-mire-ensayos:
    just tsm "{ ls grammar.js; ls test/**/*.txt; }" "tse"
