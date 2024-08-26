// // largest element of array

// #include<bits/stdc++.h>
// using namespace std;

// int maxArr(vector<int>arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }

// int main(){
//     vector<int> arr={1,5,8,5,33};
//     cout << maxArr(arr);
//     return 0;
// }


// using max 
#include<bits/stdc++.h>
using namespace std;

int maxArr(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n=5;
    int arr[n]={1,5,8,99,4};
    cout << maxArr(arr,n);
    return 0;
}