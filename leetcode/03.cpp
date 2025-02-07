// check if a string is an acronym of word 7004
#include<bits/stdc++.h>
using namespace std;

bool isAcronym(vector<string> &words,int n,string x){
    string ans;

    for(int i=0;i<n;i++){
        ans.push_back(words[i][0]);
    }

    if(ans == x){
        cout << "Yes";
    }
    else{
        cout << "Not";
    }
}

int main(){
    vector<string> words{"alics","bob","charlie"};
    string x = "bbc";
    int n = words.size();

    isAcronym(words,n,x);
    return 0;
}