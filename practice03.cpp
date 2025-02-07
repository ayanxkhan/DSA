// #include<bits/stdc++.h>
// using namespace std;

// int countDigit(vector<int> &arr,int n){
//     int count = 0;

//     map<pair<int,int>,bool> mp;

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             int a = arr[i];
//             int b = arr[j];

//             pair<int,int> p = make_pair(a,b);

//             int c = a+b;

//             if(c%2==0 && mp[p]!=true){
//                 count++;
//                 mp[p] = true;
//             }
//         }
//     }
//     return count;

// }

// int main(){
//     vector<int> arr={1,2,4,6,5,1,3};
//     int n = arr.size();
//     cout << countDigit(arr,n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int zeroTriplet(vector<int> &arr,int n){
    int count = 0;


    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                
                int a = arr[i];
                int b = arr[j];
                int c = arr[k];

                int d = a+b+c;


                if(d==0){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    int n = arr.size();

    cout << zeroTriplet(arr,n);
    return 0;
}