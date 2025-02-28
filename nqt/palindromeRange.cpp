#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num){

    int temp = num;
    int rev = 0;
    int lastDigit;

    while(num!=0){
        lastDigit = num % 10;
        rev = (rev*10) + lastDigit;
        num = num/10;
    }

    return rev == temp;
}

void printPalindrome(int lower,int upper){
    for(int i=lower;i<upper;i++){
        if(isPalindrome(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int lower;
    int upper;
    cin >> lower >> upper;

    printPalindrome(lower,upper);
    return 0;
}