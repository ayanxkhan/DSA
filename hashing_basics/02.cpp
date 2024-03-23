#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // pre compute
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << "Number of times " << c << " appears: "<< hash[c - 'a'] << endl;
    }
    return 0;
}

/*input table-

abcdabehf
5
a
g
h
b
c

*/

/*output table-

2
0
1
2
1

*/