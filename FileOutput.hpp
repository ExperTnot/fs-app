#ifndef FILE_OUTPUT_HPP
#define FILE_OUTPUT_HPP

#include <filesystem>
#include <string>
#include <iostream>
#include <fstream>

namespace fs = std::filesystem;

class FileOutput {
public:
    void printFile(const fs::path& filepath) const;
};

#endif // FILE_OUTPUT_HPP
