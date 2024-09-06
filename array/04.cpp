// second largest or second smallest element of array
// optimal solution
#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }

        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }

    return slargest;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << func(arr,n);
    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// int secondSmallest(vector<int>& arr,int n){
//     int small  = arr[0];
//     int sSmall = -1;

//     for(int i=0;i<n;i++){
//         if(arr[i]<small){
//             sSmall = small;
//             small = arr[i];
//         }
//         if(arr[i]>small && arr[i]< sSmall){
//             sSmall = arr[i];
//         }
//     }
//     return sSmall;
// }

// int main(){
//     vector<int> arr={9,8,2,1,11};
//     int n = arr.size();

//     cout << secondSmallest(arr,n);
//     return 0;
// }