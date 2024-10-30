// C++ program to find minimum scalar of two vectors
// In this method we will use inbuilt sort function to sort the array.

// For, sorting arr1 in ascending order, use sort(arr1, arr1+n)
// For, sorting arr2 in descending order, use sort(arr2, arr2+n, greater()).
// Time and Space Complexity :
// Time Complexity : O(n log(n))
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 2, 6, 3, 7};
    int arr2[] = {10, 7, 45, 3, 7};

    int n = sizeof(arr1)/sizeof(arr1[0]);

    // sort in ascending order
    sort(arr1,arr1+n);

    // sort in descending order
    sort(arr2,arr2+n,greater<int>());

    int product = 0;

    for(int i=0;i<n;i++){
        product = product + arr1[i]*arr2[i];
    }

    cout << product;
    return 0;

}