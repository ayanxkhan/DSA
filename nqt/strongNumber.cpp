// #include<bits/stdc++.h>
// using namespace std;

// int facto(int num){
//     int fact = 1;
//     for(int i=1;i<=num;i++){
//         fact = fact * i;
//     }

//     return fact;
// }

// void printAns(int num){
//     int sum = 0;
//     int temp = num;
//     int ans = 0;
//     int lastDigit;

//     while(num!=0){
//         lastDigit = num % 10;
//         ans = ans + facto(lastDigit);
//         num = num/10;
//     }

//     if(temp==ans){
//         cout << "strong";
//     }
//     else{
//         cout << "Not";
//     }
// }

// int main(){
//     int num;
//     cin >> num;

//     printAns(num);
//     return 0;
// }



#include <iostream>
using namespace std;

// function to calculate factorial
int facto(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int detectStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + facto(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num = 145;
    
    if(detectStrong(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";

}