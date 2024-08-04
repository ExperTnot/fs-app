#ifndef FILE_INPUT_HPP
#define FILE_INPUT_HPP

#include <string>
#include <vector>
#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

class FileInput {
public:
    std::vector<std::string> readLines(const fs::path& filepath) const;
    std::vector<std::string> readWords(const fs::path& filepath) const;
};

#endif // FILE_INPUT_HPP