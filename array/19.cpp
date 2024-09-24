// // COunting distinct elements from array
// method 1 using two pointer



// method 2 using map
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {10,20,40,20,10,20,50,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    cout << mp.size();
    return 0;
}