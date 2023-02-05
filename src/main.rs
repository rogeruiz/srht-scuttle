mod constants;
mod export;

use std::io::{Error, ErrorKind};
use std::path::PathBuf;
use std::process;

use crate::constants::structurizr;
use crate::export::command::run_export;

use clap::{Parser, Subcommand};

#[derive(Parser)]
#[command(author, version, about, long_about = None)]
struct Cli {
    #[command(subcommand)]
    command: Option<Commands>,
}

#[derive(Subcommand)]
enum Commands {
    /// The export command exports DSL files into specified formatted files using Structurizr-CLI
    Export {
        /// A file path for DSL files to be read from
        #[arg(short, long)]
        workspace: PathBuf,

        /// A format that Structurizr-CLI supports
        #[arg(short, long, value_enum, default_value_t = structurizr::Formatters::PlantUML)]
        format: structurizr::Formatters,

        /// A file path for PlantUML files to be exported to
        #[arg(short, long, default_value = "out")]
        output: PathBuf,
    },
    /// The render command renders DSL files into PNG files using a specific format
    Render {
        /// A format that Structurizr-CLI supports
        #[arg(short, long, value_enum, default_value_t = structurizr::Formatters::PlantUML)]
        format: structurizr::Formatters,

        /// Input file path for files
        #[arg(short, long)]
        input: PathBuf,
    },
}

fn exit_on_error(error: std::io::Error) {
    println!("{:#?}", error);
    process::exit(1);
}

fn main() {
    let cli = Cli::parse();

    match cli.command {
        Some(Commands::Export {
            workspace,
            format,
            output,
        }) => {
            // Check to see if the workspace is pointing to a file and a DSL file at that.
            let mut valid_workspace: &str = "";
            match workspace.is_file() {
                true => match workspace.extension() {
                    None => {
                        unreachable!();
                    }
                    Some(ext) => {
                        if "dsl" != ext {
                            exit_on_error(Error::new(
                                ErrorKind::Other,
                                "ay ay ay, no es un archivo con extension de .dsl",
                            ))
                        }
                        valid_workspace = workspace.to_str().unwrap();
                    }
                },
                false => exit_on_error(Error::new(
                    ErrorKind::NotFound,
                    "ay ay ay, no es un archivo",
                )),
            }

            // Get the format and send it as a String
            match format {
                structurizr::Formatters::PlantUML => {
                    f = "plantuml";
                }
                structurizr::Formatters::Mermaid => f = "mermaid",
            }

            run_export(valid_format, valid_workspace, output).ok();
        }
        Some(Commands::Render { input, format }) => {
            assert_eq!(input, input);
            assert_eq!(format, format);
            todo!()
        }
        None => {}
    }
}
