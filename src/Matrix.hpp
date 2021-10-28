#pragma once

#include <iostream>
#include <map>
#include <vector>

#define MAX_H 64
#define MAX_W 64
#define MIN_H 3
#define MIN_W 3

class Matrix {
    private:
        int **arr;
        int H, W;
    public:
        Matrix();
        ~Matrix();

        int& operator[](const int& i);
};

/*

3 2 6
1 4 0
8 7 5

6 -> 0
5 -> 0
4 -> 0

*/