#include <iostream>
#include <filesystem>
#include "CommandLineParser.hpp"
#include "FileOutput.hpp"
#include "FileManipulation.hpp"

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    CommandLineParser parser;
    parser.parse(argc, argv);

    auto input_path = parser.getInputPath();

    FileOutput fileOutput;
    fileOutput.printFile(input_path);

    // Example usage of FileManipulation
    FileManipulation fileManip;
    std::vector<std::string> lines = fileManip.readLines(input_path);
    fileManip.writeLines("output.txt", lines);
    fileManip.appendLine("output.txt", "This is a new line");

    return 0;
}
