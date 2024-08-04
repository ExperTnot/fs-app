#include "FileOutput.hpp"

void FileOutput::printFile(const fs::path& filepath) const {
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

void FileOutput::printLines(const std::vector<std::string>& input_lines) const {
    for(auto& line : input_lines) {
        std::cout << line << std::endl;
    }
}

void FileOutput::printCells(const std::vector<std::vector<std::string>>& input_lines) const {
    for(auto& line : input_lines) {
        int size = line.size();
        for(auto& cell : line) {
            size--;
            std::cout << cell;
            if(size)
                std::cout << ";";
        }
        std::cout << std::endl;
    }
}

void FileOutput::printWords(const std::vector<std::string>& input_words) const {
    for(auto& word : input_words) {
        std:: cout << word << " ";
    }
    std::cout << std::endl;
}