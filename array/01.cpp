// calculate pairs count in arr such that sum of pairs is divisble by 2

#include<bits/stdc++.h>
using namespace std;

int countPair(int arr[],int n){
    int cntPair=0; 
    // to count pairs
    map<pair<int,int>,bool> mp;
    // used map to handle duplicate pairs
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a=arr[i];
            int b=arr[j];
            int c=a+b;

            pair<int,int> p = make_pair(a,b);

            if(c%2==0 && mp[p]!=true){
                cntPair++;
                mp[p] = true;
            }
        }
    }
    return cntPair;

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << endl;

    int ans=countPair(arr,n);
    cout << "number of pairs which are divisible by 2 is : " << ans;
    return 0;
}