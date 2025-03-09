{
  description = "Scuttle";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/de0fe301211c267807afd11b12613f5511ff7433";
  inputs.systems.url = "github:nix-systems/default/da67096a3b9bf56a91d16901293e51ba5b49a27e";
  inputs.flake-utils = {
    url = "github:numtide/flake-utils/11707dc2f618dd54ca8739b309ec4fc024de578b";
    inputs.systems.follows = "systems";
  };

  outputs =
    { nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        devShells.default = pkgs.mkShell {
          name = "scuttle-dev";
          packages = [
            pkgs.nodejs_22
            pkgs.tree-sitter
          ];
        };
      }
    );
}
