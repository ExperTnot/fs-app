#include "CommandLineParser.hpp"
#include <iostream>

CommandLineParser::CommandLineParser() 
    : app("fs_app") {
    app.add_argument("-i", "--input")
        .required()
        .help("path to input file");
}

void CommandLineParser::parse(int argc, char* argv[]) {
    try {
        app.parse_args(argc, argv);
    }
    catch (const std::exception& err) {
        std::cerr << err.what() << std::endl;
        std::cerr << app;
        std::exit(1);
    }
}

fs::path CommandLineParser::getInputPath() const {
    return fs::path(app.get<std::string>("--input"));
}
