#include <iostream>
#include "CommandLineParser.hpp"
#include "FileOutput.hpp"
#include "FileManipulation.hpp"

int main(int argc, char* argv[]) {
    CommandLineParser parser;
    parser.parse(argc, argv);

    auto input_path = parser.getInputPath();

    FileOutput fileOutput;
    fileOutput.printFile(input_path);

    // Example usage of FileManipulation
    FileManipulation fileManip;
    std::vector<std::string> lines = fileManip.readLines(input_path);
    std::string out = "output_test.txt";
    fileManip.writeLines(out, lines);
    fileManip.appendLine(out, "This is a new line");

    return 0;
}
