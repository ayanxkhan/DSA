// occurance of characters in string
#include <bits/stdc++.h>
using namespace std;

void countCharacters(string s) {
    unordered_map<char, int> freq;

    // Count occurrences of each character
    for (char c : s) {
        freq[c]++;
    }

    // Print the occurrences
    cout << "Character frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s; // Takes input string

    countCharacters(s);

    return 0;
}
