// C++ program to find maximum scalar product of two vectors
// In this method we will use inbuilt sort function to sort the array.

// For, sorting arr1 in ascending order, use sort(arr1, arr1+n)
// For, sorting arr2 in ascending order, use sort(arr2, arr2+n).
// Time and Space Complexity :
// Time Complexity : O(n log(n))
// Space Complexity : O(1)

// same as minimum scalar here we just sort both the arrays or vectors in ascending order

#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr1[]={3,8,1,3,4};
    // int arr2[]={77,8,3,1,2};

    int arr1[] = {1, 2, 6, 3, 7};
    int arr2[] = {10, 7, 45, 3, 7};


    int n = sizeof(arr1)/sizeof(arr1[0]);

    sort(arr1,arr1+n);

    sort(arr2,arr2+n);

    int product = 0;

    for(int i=0;i<n;i++){
        product = product + arr1[i]*arr2[i];
    }

    cout << product;
    return 0;
}