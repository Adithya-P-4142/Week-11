#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> freq;
    string word;

    cout << "Enter words (press Ctrl+D or Ctrl+Z to finish):" << endl;
    while (cin >> word) {
        freq[word]++;
    }

    string mostFrequentWord;
    int maxCount = 0;

    cout << "\nWord Frequencies:\n";
    for (const auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentWord = pair.first;
        }
    }

    if (!mostFrequentWord.empty()) {
        cout << "\nMost frequent word: \"" << mostFrequentWord 
             << "\" (appeared " << maxCount << " times)" << endl;
    }

    return 0;
}