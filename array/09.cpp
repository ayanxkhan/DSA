// rotate array by one place on the left
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;

    for(int i=0;i<n;i++){
        cout << arr[i];
    }

    return 0;

}


// rotate an array by k places
