// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

// For Example : 153
// Sum of digits = 1 + 5 + 3 = 9

// 153is divisible by 9 so 153 is a Harshad Number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 13;
    int temp = n;
    int sum = 0;
    int ld;

    while(temp>0){
        ld = temp % 10;
        sum = sum  + ld;
        temp = temp / 10;
    }

    if(n%sum == 0){
        cout << "yees";
    }
    else{
        cout << "no";
    }

}