// Find Repeating Elements In An Array  in C++
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,30,40,20,10,20,40,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int , int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second!=1){
            cout << it->first << " ";
        }
    }
    return 0;
}


// non repeating
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={10,30,40,20,10,20,40,10};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     unordered_map<int , int> mp;

//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }

//     for(auto it=mp.begin();it!=mp.end();it++){
//         if(it->second==1){
//             cout << it->first << " ";
//         }
//     }
//     return 0;
// }