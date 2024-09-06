// Problem Statement : Given an unsorted array, find the median of the given array.

//                                              Examples :

//     Example 1 : Input : [ 2, 4, 1, 3, 5 ] Output : 3

//                         Example 2 : Input : [ 2, 5, 1, 7 ] Output : 3.5 What is a Median
//                     ? Median is defined as the value which is present in the middle for a series of values.Note,
//                     in order to find the median of an array of integers,
//                     we must make sure they are sorted.


#include<bits/stdc++.h>
using namespace std;

int medianArr(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    if(n%2==0){
        int m1 = (n/2)-1;
        int m2 = n/2;
        cout<<(double)(arr[m1]+arr[m2])/2;
    }
    else{
        cout << arr[(n/2)];
    }

}

int main(){
    vector<int> arr={7,8,9,2,4,3};
    int n = arr.size();

    medianArr(arr,n);    
    return 0;


}