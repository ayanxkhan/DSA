// C++ program to count numbers of even and odd elements in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,2,6,8,8,13,66,123,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int evenCount = 0;
    int oddCount = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    cout << "Even Count = " << evenCount << endl;
    cout << "Odd Count = " << oddCount;

    return 0;
}