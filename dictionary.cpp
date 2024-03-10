#include <iostream>
#include <fstream>
#include <algorithm>

#include "dictionary.h"

dictionary::dictionary() {
    words = vector<string>();
}


// Function to read words from the dictionary file
void dictionary::readFromFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file: " << filename << endl;
        return;
    }

    string word;
    while (file >> word) {
        if (word.length() >= 5) {
            words.push_back(word);
        }
    }
    file.close();
}

// Function to print the word vector
void dictionary::printWords() const {
    for (const auto &word: words) {
        cout << word << endl;
    }
}

// Selection sort algorithm to sort words
void dictionary::selectionSort() {
    for (size_t i = 0; i < words.size() - 1; ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < words.size(); ++j) {
            if (words[j] < words[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(words[i], words[minIndex]);
        }
    }
}

// Binary search algorithm to search for a word
bool dictionary::binarySearch(const string &key) const {
    int left = 0;
    int right = words.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (words[mid] == key)
            return true;
        else if (words[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}