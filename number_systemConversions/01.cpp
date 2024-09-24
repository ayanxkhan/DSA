// binary to decimal
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=1111;
    int base = 1;
    int ans = 0;
    int rem =0;

    while(num!=0){  
        rem = num % 10;
        ans = ans + rem * base;
        num = num/10;
        base = base * 2;
    }

    cout << ans;
    return 0;
}