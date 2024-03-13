// #include <iostream>
// using namespace std;
// //Function to print array
// void printArray(int ans[], int n) {
//   cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << ans[i] << " ";
//    }
// }
// //Function to reverse array using an auxiliary array
// void reverseArray(int arr[], int n) {
//    int ans[n];
//    for (int i = n - 1; i >= 0; i--) {
//       ans[n - i - 1] = arr[i];
//    }
//    printArray(ans, n);
// }
// int main() {
//    int n = 5;
//    int arr[] = {5,4,3,2,1};
//    reverseArray(arr, n);
//    return 0;
// }



// another method using single pointer i.e, only starting index 0
#include <bits/stdc++.h>
using namespace std;

void func(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }

    swap(arr[i], arr[n - i - 1]);
    func(i + 1, arr, n);
}

void printArray(int arr[], int n)
{
    cout << endl << "Reversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


   // printing original array
    cout << "Original array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    func(0, arr, n);
    printArray(arr,n);

    return 0;
}