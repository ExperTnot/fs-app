#include "FileManipulation.hpp"
#include <fstream>
#include <iostream>

std::vector<std::string> FileManipulation::readLines(const fs::path& filepath) const {
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

void FileManipulation::writeLines(const fs::path& filepath, const std::vector<std::string>& lines) const {
    std::ofstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filepath << std::endl;
        return;
    }

    for (const auto& line : lines) {
        file << line << std::endl;
    }
    file.close();
}

void FileManipulation::appendLine(const fs::path& filepath, const std::string& line) const {
    std::ofstream file(filepath, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filepath << std::endl;
        return;
    }

    file << line << std::endl;
    file.close();
}
