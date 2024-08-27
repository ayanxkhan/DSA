// reverse array
#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[],int n,int left,int right){
    if(left>=right){
        return;
    }

    swap(arr[left],arr[right]);
    reverseArr(arr,n,left+1,right-1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array: ";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    reverseArr(arr,n,0,n-1);

    cout << "Reversed Array: ";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}