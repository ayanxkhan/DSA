#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
    if(num<=1){
        return false;
    }

    // for(int i=2;i*i<=num;i++)
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}

void printPrime(int lower,int upper){
    for(int i=lower;i<upper;i++){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int lower;
    int upper;

    cin >> lower >> upper;

    printPrime(lower,upper);
    return 0;
}