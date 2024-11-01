// C++ Program to find sum of minimum absolute difference of the given array
// Example Walkthrough
// For the array {2, 4, 5, 3}:

// Sorted Array: {2, 3, 4, 5}
// Finding the Median:
// n = 4 (even), so the median is the average of arr[1] and arr[2]: (3 + 4) / 2 = 3.5.
// However, due to integer division, median would be 3 (in the corrected code).
// Calculating Absolute Differences:
// Differences from 3 are: |2 - 3| = 1, |3 - 3| = 0, |4 - 3| = 1, and |5 - 3| = 2.
// Total sum of absolute differences: 1 + 0 + 1 + 2 = 4.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    int median;

    if (n % 2 == 0)
    {
        median = ((arr[n / 2] + arr[n / 2 + 1]) / 2);
    }
    else{
        median = arr[n/2];
    }

    int sum = 0;

    for(int i=0;i<n;i++){
        int x = arr[i]-median;

        if(x<0){
            sum+= -x;
        }
        else{
            sum+=x;
        }
    }
    cout << "Min absolute difference sum = " << sum;
    return 0;
}