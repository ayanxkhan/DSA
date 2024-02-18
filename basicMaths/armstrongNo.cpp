#include<bits/stdc++.h>
using namespace std;

int main(){
    // int num=371;
    int num=123;
    int dupl = num;
    int sum=0;

    while(num>0){
        int last_digit = num%10;
        sum = sum + (last_digit*last_digit*last_digit);
        num=num/10;
    }
    
    if(sum == dupl){
        cout << dupl << " is an Armstrong number";
    }
    else
    {
        cout << dupl << " is not an Armstrong number";
    }
}