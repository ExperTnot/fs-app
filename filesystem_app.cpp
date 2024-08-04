#include <iostream>
#include <filesystem>
#include <argparse/argparse.hpp>

namespace fs = std::filesystem;
namespace arg = argparse;

int main(int argc, char* argv[]) {
    arg::ArgumentParser app("fs_app");

    app.add_argument("-i", "--input")
        .required()
        .help("path to input file");

    try {
        app.parse_args(argc, argv);
    }
    catch (const std::exception& err) {
        std::cerr << err.what() << std::endl;
        std::cerr << app;
        std::exit(1);
    }

    auto input_path = fs::path(app.get<std::string>("--input"));
    std::cout << fs::relative(input_path);
    fs::file_status s = fs::status(input_path);
    if (fs::is_regular_file(s))
        std::cout << " is a regular file\n";
    if (fs::is_directory(s))
        std::cout << " is a directory\n";
    if (fs::is_block_file(s))
        std::cout << " is a block device\n";
    if (fs::is_character_file(s))
        std::cout << " is a character device\n";
    if (fs::is_fifo(s))
        std::cout << " is a named IPC pipe\n";
    if (fs::is_socket(s))
        std::cout << " is a named IPC socket\n";
    if (fs::is_symlink(s))
        std::cout << " is a symlink\n";
    if (!fs::exists(s))
        std::cout << " does not exist\n";

    return 0;
}