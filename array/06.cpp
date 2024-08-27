// Count frequency of digits
#include<bits/stdc++.h>
using namespace std;

int countFrequency(int arr[],int n,int d){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i] == d){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int digit;
    cin >> digit;

    cout << countFrequency(arr,n,digit);
    return 0;
}