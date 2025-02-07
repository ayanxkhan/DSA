// sum of triplets is zero
#include <bits/stdc++.h>
using namespace std;

int zeroTriplet(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());  // Step 1: Sort the array
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;  // Step 2: Two pointers
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                count++;
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();

    cout << zeroTriplet(arr, n);

    
    return 0;
    return 0;
}
