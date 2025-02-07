// count the no of vowel strings which start ans end with an vowel

#include <bits/stdc++.h>
using namespace std;

bool isvowel(string s) {
    int n = s.length();
    return (
        (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') &&
        (s[n - 1] == 'a' || s[n - 1] == 'e' || s[n - 1] == 'i' || s[n - 1] == 'o' || s[n - 1] == 'u')
    );
}

int main() {
    vector<string> words{"are", "amy", "u"};
    int left = 0;
    int right = 2;

    int ans = 0;
    for (int i = left; i <= right; i++) {
        if (isvowel(words[i])) {
            ans++;
        }
    }

    cout << "Number of vowel strings: " << ans << endl;
    return 0;
}
