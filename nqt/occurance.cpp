#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={11,1,2,3,2,2,4,5,6,5,5,5,9,8};
    int n = arr.size();

    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second >1){
            cout << it->first << " ";
        }
    }

    return 0;
}