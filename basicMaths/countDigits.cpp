// count the no. of digits in a number

#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt=0;
    while(n>0){
        int lastdigit = n % 10;  /*this lastdigit is not necessary*/
        cnt = cnt + 1;
        n=n/10;
    }

    cout << "Total digits in a number is : " << cnt; 
}

int main(){
    int n;
    cin >> n;
    count(n);
    return 0;
}