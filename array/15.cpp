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


// #include<bits/stdc++.h>
// using namespace std;

// int func(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1]){
//             cout << arr[i] << " ";
//         }
//     }

// }

// int main(){
//     vector<int> arr={1,5,2,2,6,8,5,3,7,3,8,3};

//     func(arr);
//     return 0;

// }



// #include<bits/stdc++.h>
// using namespace std;

// void func(vector<int>& arr){
//     vector<int> arr_copy = arr; // create a copy of the original vector
//     sort(arr_copy.begin(), arr_copy.end());
//     map<int, int> freq; // map to count frequency of each element
//     for(int i=0; i<arr_copy.size(); i++){
//         freq[arr_copy[i]]++;
//     }
//     for(auto& pair : freq){
//         if(pair.second > 1){
//             cout << pair.first << " "; // print duplicates
//         }
//     }
// }

// int main(){
//     vector<int> arr={1,5,2,2,6,8,5,3,7,3,8,3};

//     func(arr);
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
   int arr[] = {10, 30, 40, 20, 10, 20, 40, 10}; 
   int n = sizeof(arr)/sizeof(arr[0]); 

   unordered_map <int, int>mp;
   int count_dis=0;

   for(int i=0; i<n; i++) mp[arr[i]]++; 
   for(auto it=mp.begin(); it!=mp.end(); it++)
{ 
        if(it->second!=1) cout<<it->first<<" ";
   }
   return 0;
}

 