// // Count frequency of digits
// #include<bits/stdc++.h>
// using namespace std;

// int countFrequency(int arr[],int n,int d){
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == d){
//             cnt++;
//         }
//     }
//     return cnt;
// }

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int digit;
//     cin >> digit;

//     cout << countFrequency(arr,n,digit);
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int main(){
   
    vector<int> arr={1,1,1,2,1,2,3,5};
    int n = arr.size();
  
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        cout << it->first << " occurs " << it->second << " Times" << endl;
    }
    return 0;
}