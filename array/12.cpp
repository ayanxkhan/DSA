// Check if array is sorted or not
#include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
        }
        else
        {
            return false;
        }
    }
    return true;

}

int main(){
    int n=5;
    int arr[n]={7,8,9,4,100};

    check(arr,n);
    return 0;

    
}