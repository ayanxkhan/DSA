// count frequency of each element 
// example 
// 1 : 3 (times)
// 2 : 1 (times)
// 3 : 4 


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,1,1,2,3,3,4,5,5,5,5,6,6};
    int n = arr.size();

    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        cout << it->first << ":" << it->second << endl;
    }
    return 0;
}