// shift the array clockwise
#include <bits/stdc++.h>
using namespace std;

// Function to rotate array by one position in clockwise direction
void rotateArray(vector<int> &arr) {
    int n = arr.size();
    if (n == 0) return; // Edge case: Empty array

    int last = arr[n - 1]; // Store last element

    // Shift all elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; // Place last element at the first position
}

// Function to print array
void printArray(vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array

    cout << "Original Array: ";
    printArray(arr);

    rotateArray(arr);

    cout << "Rotated Array: ";
    printArray(arr);

    return 0;
}
