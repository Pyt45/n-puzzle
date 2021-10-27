#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include "ReadFile.hpp"

auto main(int argc, char **argv) -> int {
    ReadFile rf(argv[argc - 1]);
    std::map<int, std::string> m = rf.__get_data();

    for (int i = 0; i < 5; i++)
        std::cout << m[i] << std::endl;
    return 0;
}