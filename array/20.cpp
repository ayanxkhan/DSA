// count the even occurance of element 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,3,3,4,4,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second %2==0){
            cout << it->first << " ";
        }
    }

   return 0;
}