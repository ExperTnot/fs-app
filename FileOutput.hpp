#ifndef FILE_OUTPUT_HPP
#define FILE_OUTPUT_HPP

#include <filesystem>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

namespace fs = std::filesystem;

class FileOutput {
public:
    void printFile(const fs::path& filepath) const;
    void printLines(const std::vector<std::string>& input_lines) const;
    void printWords(const std::vector<std::string>& input_words) const;
    void printCells(const std::vector<std::vector<std::string>>& input_lines) const;
};

#endif // FILE_OUTPUT_HPP
