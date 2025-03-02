#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[],int n){
    int largest = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << "Largest Element is : "<< largest;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    cout << "The elements of array are: ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    findLargest(arr,n);
    return 0;

}