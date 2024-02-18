#include<bits/stdc++.h>
using namespace std;


void primeNo(int n){
    int cnt=0;  /*Counter variable*/
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt == 2){
            cout << n << " is prime no";
        }
        else
        {
            cout << n << " is not a prime no";
        }
}

int main(){
    int n;
    cin >> n;
    primeNo(n);
    return 0;
}