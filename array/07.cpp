// Problem Statement : Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order
// Example 1:
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7
// Explanation: First three elements are in the ascending order and next three elements are in the descending order.

// Example 2:
// Input: 4 2 8 6 15 5 9 20
// Output: 2 4 5 6 20 15 9 8

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,5,2,7,9,8};

    sort(arr.begin(),arr.end());

    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout << *it << " ";
    // }

    for(int i=0;i<arr.size()/2;i++){
        cout << arr[i] << " ";
    }

    for(int j=arr.size()-1;j>=arr.size()/2;j--){
        cout << arr[j] << " ";
    }
    return 0;
}