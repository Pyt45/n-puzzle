#pragma once

#include <iostream>
#include <map>
#include <fstream>

class ReadFile {
    private:
        std::map<int, std::string> __data;
    public:
        ReadFile(std::string filname);
        ~ReadFile();

        const std::map<int, std::string>& __get_data() const;
};