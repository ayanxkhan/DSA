#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&arr,int n){
    int largest = arr[0];
    int Slargest = -1;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            Slargest= largest;
            largest = arr[i];
        }

        if(arr[i]<largest && arr[i]>Slargest){
            Slargest = arr[i];
        }
    }
    cout << Slargest;
}

int main(){
    vector<int> arr={1,66,7,4,23,87,9,122,90,3};
    int n = arr.size();

    func(arr,n);
    return 0;
}