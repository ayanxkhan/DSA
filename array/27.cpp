// Two arrays are considered disjoint if they have no elements in common
// Iterate through the first array and store every element in the set.
// Iterate through the second array and check if any element is present in the set.
// If present, then returns false, else ignore the element. 
// If all elements of the second array are not present in the set, return true.

#include<bits/stdc++.h>
using namespace std;

int disjoint(int arr1[],int arr2[],int n,int m){

    set<int> s;

    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }


    for(int i=0;i<m;i++){
        if(s.find(arr2[i])!=s.end()){
            return 0;
        }

    }
    return 1;
}

int main(){
    int arr1[]={1,2,8,6,4};
    int arr2[]={9,10,11,1,45};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    if(disjoint(arr1,arr2,n,m)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}




// if in output we have to give 0 and 1 
#include<bits/stdc++.h>
using namespace std;

int subarray(int arr1[],int arr2[],int n,int m){

    set<int> s;

    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }


    for(int i=0;i<m;i++){
        if(s.find(arr2[i]) != s.end()){
            return 0;
        }
    }

    return 1;
}

int check(int arr1[],int arr2[],int n,int m){
    if(subarray(arr1,arr2,n,m)){
        return 1;
    }
    return 0;
}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={34,78,63};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout << check(arr1,arr2,n,m);


    return 0;
}