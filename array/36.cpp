#include <bits/stdc++.h>
using namespace std;

bool canFormPalindrome(string s) {
    unordered_map<char, int> freq;

    // Count character frequencies
    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;

    // Count characters with odd occurrences
    for (auto it : freq) {
        if (it.second % 2 != 0) {
            oddCount++;
        }
    }

    // A string can be rearranged into a palindrome if at most one character has an odd frequency
    return oddCount <= 1;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (canFormPalindrome(s)) {
        cout << "Yes, the string can be rearranged into a palindrome." << endl;
    } else {
        cout << "No, the string cannot be rearranged into a palindrome." << endl;
    }

    return 0;
}
