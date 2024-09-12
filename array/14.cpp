// Adding Element in an Array


// 19

// 1
// Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.

// Example:
// Input: N = 5, array[] = {1,2,3,4,5}
// insertbeginning(6)
// insertending(7)
// insertatpos(8,4)
// Output: 6,1,2,8,3,4,5,7
// Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4 



// inserting at begining
// #include<bits/stdc++.h>
// using namespace std;

// int insertAtBegin(int* arr,int n,int value){
//     for(int i=n-1;i>=0;i--){
//         arr[i+1] = arr[i];
//     }
//     arr[0] = value;
// }

// int main(){
//    int n=5;
//    int arr[6]={1,2,3,4,5};
//    int value = 99;

//    cout << "Before inserting value at begining: ";
//    for(int i=0;i<n;i++){
//     cout << arr[i] << " ";
//    }

//    cout << endl;

//    insertAtBegin(arr,n,value);

//    cout << "After inserting value at begining: ";
//    for(int i=0;i<=n;i++){
//     cout << arr[i] << " ";
//    }


//    return 0;
// }




// Inserting at ending
// #include <bits/stdc++.h>
// using namespace std;
// void insertatEnd(int *arr, int n, int value)
// {
//     arr[n] = value;
// }

// int main()
// {
//     int n=8;
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatEnd(arr,n,value);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



// insert at a position
#include<bits/stdc++.h>
using namespace std;

int insertAtPos(int *arr,int n,int value,int pos){
    for(int i=n;i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
}

int main(){
    int n = 5;
    int arr[6] = {1,2,3,4,5};
    int value = 99;
    int pos = 3;

    cout<<"Before inserting the value at a position:" << endl;
     for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    insertAtPos(arr,n,value,pos);

    cout << endl;

    cout<<"After inserting the value at a position:" << endl;
     for(int i=0;i<=n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}