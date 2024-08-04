#include "FileInput.hpp"

std::vector<std::string> FileInput::readLines(const fs::path& filepath) const {
    std::vector<std::string> lines;
    std::ifstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filepath << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

std::vector<std::string> FileInput::readWords(const fs::path& filepath) const {
    std::vector<std::string> words;
    std::ifstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filepath << std::endl;
        return words;
    }

    std::string word;
    while(file >> word) {
        words.push_back(word);
    }
    return words;
}