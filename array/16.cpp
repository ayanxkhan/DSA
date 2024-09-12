// move zeroes to end
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
    int n = arr.size();


// created a temp arr to store non zero element
    vector<int> temp = {};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }


// created nz to find the size of temp
// then put all the temp elements in front.
    int nz = temp.size();
    for(int i=0;i<nz;i++){
        arr[i] = temp[i];
    }


// now from nz we will start a loop until end and put all the zeroes
    for(int i=nz;i<n;i++){
        arr[i] = 0;
    }

    for(auto it=arr.begin();it!=arr.end();it++){
        cout << *it << " ";
    }

    return 0;
}