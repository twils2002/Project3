//
// Created by tedmw on 3/9/2024.
//

#ifndef PROJECT3_DICTIONARY_H
#define PROJECT3_DICTIONARY_H

#include <string>
#include <vector>

using namespace std;

class dictionary {
public:
    dictionary();
    void readFromFile(const string& filename);
    void printWords() const;
    void selectionSort();
    bool binarySearch(const string& key) const;
    vector<string> words;

};


#endif //PROJECT3_DICTIONARY_H
