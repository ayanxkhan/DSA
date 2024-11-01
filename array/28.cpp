// C++ program to determine the array is a subset of another array

// same as disjoint but have changed the condition
// for(int i=0;i<m;i++){
//     /*this line means that there is no elem in arr2[] which is present in arr1 */
//     if(s.find(arr2[i]) == s.end()){   
//         return 0;
//     } 
//      return 1;

// }



#include<bits/stdc++.h>
using namespace std;

int subset(int arr1[],int arr2[],int n,int m){

    set<int> s;

    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }

    for(int i=0;i<m;i++){
        if(s.find(arr2[i]) == s.end()){
            return 0;
        }
    }
    return 1;


}

int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={9,8,11,34,2,1};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    if(subset(arr1,arr2,n,m)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}