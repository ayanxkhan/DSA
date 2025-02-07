// substring from a string
#include <bits/stdc++.h>
using namespace std;

void printSubstrings(string s) {
    int n = s.length();

    // Generate all possible substrings
    for (int i = 0; i < n; i++) {
        string sub = "";
        for (int j = i; j < n; j++) {
            sub += s[j];
            cout << sub << endl;
        }
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Substrings of the given string:\n";
    printSubstrings(s);

    return 0;
}
