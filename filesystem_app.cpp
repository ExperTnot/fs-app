#include <iostream>
#include <fstream>
#include <filesystem>
#include "CommandLineParser.hpp"

namespace fs = std::filesystem;

void print_file(const fs::path& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filepath << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
}

int main(int argc, char* argv[]) {
    CommandLineParser parser;
    parser.parse(argc, argv);

    auto input_path = parser.getInputPath();
    print_file(input_path);

    return 0;
}