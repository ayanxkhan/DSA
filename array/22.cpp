// Finding the longest palindrome in an array in C++
// Method 1 :
// Create a function ispalindrome(int n), it will return 1 if the passing number is palindrome otherwise return 0.
// Inside the main function, create a variable say res =INT_MIN, that hold the maximum palindrome number.
// Run a loop from [0, n),  and check if(ispalindrome(arr[i]) && res<arr[i]), then set res = arr[i].
// After complete iteration, check if(res==INT_MIN), set res = -1;
// Print the value of res.

#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int n){
    int temp = n;
    int rev = 0;
    int lastDigit;

    while(temp!=0){
        lastDigit = temp % 10;
        rev = (rev * 10) + lastDigit;
        temp = temp / 10;
    }

    if(n==rev) return 1;

    return 0;
}

int main(){
    int arr[]={910,2112,10,303,31113};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = INT_MIN;

    for(int i=0;i<n;i++){
        if(isPalindrome(arr[i]) && res < arr[i]){
            res = arr[i];
        }
    }

    // if there is no longest palindrome
    if(res == INT_MIN){
        res = -1;
    }

    cout << res;

    return 0;
}