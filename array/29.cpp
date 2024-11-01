// C++ program to determine can all numbers of an array be made equal
// We need to check if all the numbers of an array can be made equal to a particular number.In a single operation,    
// any element of the array can be either multiplied by 2 or by 3. If it’s possible to make all the array elements equal with the given operation then print Yes else print No.


#include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n){

    for(int i=0;i<n;i++){
        
        while(arr[i]%2==0){
            arr[i]/=2;
        }

        while(arr[i]%3==0){
            arr[i]/=3;
        }

        if(arr[i]!=arr[0]){
            return 0;
        }
    }
    return 1;

}

int main(){
    int arr[]={50,75,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(check(arr,n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}