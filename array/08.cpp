// Problem Statement: Given an array, we have to find the sum of all the elements in the array.

// Examples:

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 15
// Explanation: Sum of all the elements is 1+2+3+4+5 = 15

// Example 2:
// Input:  N=6, array[] = {1,2,1,1,5,1}
// Output: 11
// Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11


// method 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int n=arr.size();
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout << "Sum of elements of array is : " << sum;
//     return 0;
// }

// method 2 using collections STL
// Approach:

// For C++: “accumulate” is used to calculate the sum of all the elements in the array.    

// For Java: Instream sum() gives the sum of all the elements in the stream.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int initialSum=0;
    cout << accumulate(arr,arr+n,initialSum);
    return 0;
}