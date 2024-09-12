// // reverse array
// #include <bits/stdc++.h>
// using namespace std;

// void reverseArr(int arr[],int n,int left,int right){
//     if(left>=right){
//         return;
//     }

//     swap(arr[left],arr[right]);
//     reverseArr(arr,n,left+1,right-1);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Original Array: ";
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
//     cout << endl;

//     reverseArr(arr,n,0,n-1);

//     cout << "Reversed Array: ";
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void printArr(int ans[],int n){
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}


void reverseArr(int arr[],int n){
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1] = arr[i];
    }

    printArr(ans,n);
}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    reverseArr(arr,n);
    return 0;
}