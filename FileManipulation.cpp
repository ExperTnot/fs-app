#include "FileManipulation.hpp"

std::vector<std::vector<std::string>> FileManipulation::splitCSV(const std::vector<std::string>& input_lines) const {
    std::vector<std::vector<std::string>> csv_lines;

    for(auto& line : input_lines) {
        std::stringstream ss(line);
        std::string cell;
        std::vector<std::string> csv_line;

        while(std::getline(ss, cell, ',')) {
            csv_line.push_back(cell);
        }
        csv_lines.push_back(csv_line);
    }
    return csv_lines;
}
