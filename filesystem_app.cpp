#include <iostream>
#include "CommandLineParser.hpp"
#include "FileOutput.hpp"
#include "FileManipulation.hpp"
#include "FileInput.hpp"

int main(int argc, char* argv[]) {
    CommandLineParser parser;
    parser.parse(argc, argv);

    auto input_path = parser.getInputPath();

    FileInput fileIn;
    FileOutput fileOut;
    FileManipulation fileMan;

    fileOut.printCells(fileMan.splitCSV(fileIn.readLines(input_path)));

    fileOut.printWords(fileIn.readWords(input_path));

    return 0;
}
