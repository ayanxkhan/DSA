#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,0,2,0,0,4,5,0,1,8,7,2,0,1};
    int n = arr.size();

    vector<int> temp={};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }


    int nz = temp.size();
    for(int i=0;i<nz;i++){
        arr[i] = temp[i];
    }

    for(int i=nz;i<n;i++){
        arr[i] = 0;
    }

    for(auto it=arr.begin();it!=arr.end();it++){
        cout << *it << " ";
    }
    return 0;
}