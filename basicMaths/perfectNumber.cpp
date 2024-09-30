// A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.

// For Example: 28
// Divisors : 1 + 2 + 4 + 7 + 14 = 28
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 28;
    int sum = 0;

    for(int i=1;i<num;i++){
        if(num%i==0){
            sum = sum + i;
        }
    }
    if(sum == num) cout << "Perfect";
    else cout << "Not";
    return 0;
}