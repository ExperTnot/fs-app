#ifndef FILE_MANIPULATION_HPP
#define FILE_MANIPULATION_HPP

#include <string>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;

class FileManipulation {
public:
    std::vector<std::string> readLines(const fs::path& filepath) const;
    void writeLines(const fs::path& filepath, const std::vector<std::string>& lines) const;
    void appendLine(const fs::path& filepath, const std::string& line) const;
};

#endif // FILE_MANIPULATION_HPP
