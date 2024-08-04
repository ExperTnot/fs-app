#ifndef COMMAND_LINE_PARSER_HPP
#define COMMAND_LINE_PARSER_HPP

#include <string>
#include <argparse/argparse.hpp>
#include <filesystem>

namespace fs = std::filesystem;

class CommandLineParser {
public:
    CommandLineParser();
    void parse(int argc, char* argv[]);
    fs::path getInputPath() const;

private:
    argparse::ArgumentParser app;
};

#endif // COMMAND_LINE_PARSER_HPP
