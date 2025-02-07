// number of unique cbar in string
#include <bits/stdc++.h>
using namespace std;

void findUniqueCharacters(string s) {
    unordered_map<char, int> freq;

    // Count occurrences of each character
    for (char c : s) {
        freq[c]++;
    }

    // Print unique characters (characters that appear only once)
    cout << "Unique characters: ";
    for (auto it : freq) {
        if (it.second == 1) {
            cout << it.first << " ";
        }
    }
    cout << endl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;  // Take input string

    findUniqueCharacters(s);

    return 0;
}
