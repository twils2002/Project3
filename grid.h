//
// Created by tedmw on 3/9/2024.
//

#ifndef PROJECT3_GRID_H
#define PROJECT3_GRID_H

#include <vector>
#include <string>

using namespace std;


class grid {
private:
    vector<vector<char>> matrix;
    int rows;
    int cols;
public:
    grid(const string& filename);
    void printGrid() const;
    int getSize() const;
    char getChar(int row, int col) const;

};


#endif //PROJECT3_GRID_H
