import XCTest
import SwiftTreeSitter
import TreeSitterStructurizrDSL

final class TreeSitterStructurizrDSLTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_structurizr_dsl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading StructurizrDSL grammar")
    }
}
