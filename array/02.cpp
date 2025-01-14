// // Sort the array
// #include<bits/stdc++.h>
// using namespace std;

// int sortArr(vector<int>& arr){
//     sort(arr.begin(),arr.end());
// }

// int main(){
//     vector<int> arr={5,7,8,3,1};
//     sortArr(arr);

//     for(auto it=arr.begin();it!=arr.end();it++){
//         cout << *it << " ";
//     }

//     return 0;
// // 



// find the smallest element of array
#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){
    vector<int> arr={5,7,8,0,38};
    cout << sortArr(arr);
    return 0;
}




// sort an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,6,4,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}