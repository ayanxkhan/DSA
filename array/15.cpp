// Find all repeating elements in an array

// Problem Statement: Find all the repeating elements present in an array.

// Examples:

// Example 1:
// Input: 
// Arr[] = [1,1,2,3,4,4,5,2]
// Output:
//  1,2,4
// Explanation:
//  1,2 and 4 are the elements which are occurring more than once.

// Example 2:
// Input:
//  Arr[] = [1,1,0]
// Output:
//  1
// Explanation:
//  Only 1 is occurring more than once in the given array.


#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            cout << arr[i] << " ";
        }
    }

}

int main(){
    vector<int> arr={1,5,2,2,6,8,5,3,7,3,8,3};

    func(arr);
    return 0;

}


 