#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,1,2,1,1,2,3,2,1,4,3,1,2,5};
    int n = arr.size();

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it = mp.begin();it!=mp.end();it++){
        if(it->second > 1){
            cout << it->first << endl;
        }
    }
    return 0;
}