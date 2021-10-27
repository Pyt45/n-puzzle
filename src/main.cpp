#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include "ReadFile.hpp"

int main() {
    ReadFile rf("../puzzles/puzzle_1.txt");
    std::map<int, std::string> m = rf.__get_data();

    for (int i = 0; i < 5; i++)
        std::cout << m[i] << std::endl;
}