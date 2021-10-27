#include "ReadFile.hpp"

ReadFile::ReadFile(std::string filename) {
    std::string line;
    int i = 0;
    std::ifstream ifs(filename, std::ifstream::in);
    if (ifs.is_open()) {
        while (std::getline(ifs, line) && i != -1) {
            __data[i++] = line;
        }
        ifs.close();
    }
}

const std::map<int, std::string>& ReadFile::__get_data() const {
    return __data;
}

ReadFile::~ReadFile() {
    __data.clear();
}