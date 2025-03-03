// Problem Statement: Given an array, we have to find the average of all the elements in the array.

// Examples:

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 3
// Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

// Example 2:
// Input:  N=6, array[] = {1,2,1,1,5,1}
// Output: 1.8
// Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8

#include<bits/stdc++.h>
using namespace std;

int avgArr(int arr[],int n){
    int sum = 0;
    int avg = 0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    avg = (double)sum/2;
    return avg;

}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    cout << avgArr(arr,n);
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n = 5;
// 	int arr[] = {1, 2, 3, 4, 5};
// 	double sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		sum += (double)arr[i];
// 	}
// 	double average = sum / n;
// 	cout << "The average is "<<average;

// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[n]={1,2,3,4,5};

//     double avg = 0;
//     double sum = 0;
//     for(int i=0;i<n;i++){
//         sum = (double)sum + arr[i];
//     }

//     avg = sum/2;
//     cout << avg;
//     return 0;

// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    double sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Sum all elements
    }
    
    cout << "Sum: " << sum << endl;

    double avg = sum / double(n); // Convert n to double for decimal result
    cout << "Average: " << fixed << setprecision(2) << avg; // 2 decimal places

    return 0;
}
