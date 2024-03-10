#include <iostream>
#include <fstream>

#include "grid.h"

grid::grid(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        vector<char> row;
        for (char c: line) {
            row.push_back(c);
        }
        matrix.push_back(row);
    }

    rows = matrix.size();
    cols = (rows > 0) ? matrix[0].size() : 0;
}

void grid::printGrid() const {
    for (const auto &row: matrix) {
        for (char c: row) {
            cout << c << " ";
        }
        cout << endl;
    }
}

// Function to get the size of the grid
int grid::getSize() const {
    return matrix.size();
}

// Function to get the character at a specific position in the grid
char grid::getChar(int row, int col) const {
    return matrix[row][col];
}