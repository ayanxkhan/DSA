// find words containing characters 2942
#include <bits/stdc++.h>
using namespace std;

int main() {
    string words[2] = {"leet", "code"};
    int n = sizeof(words) / sizeof(words[0]);

    vector<int> result;
    char x = 'e';

    for (int i = 0; i < n; i++) {
        string A = words[i];
        for (int j = 0; j < A.size(); j++) {
            if (A[j] == x) {
                result.push_back(i);
                break;
            }
        }
    }

    // Print the result
    cout << "Indices where '" << x << "' appears: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
