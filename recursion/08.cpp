// factorial using recursion
#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 0 || num ==1){
        return 1;
    }

    return num * factorial(num-1);
}

int main(){
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is : " << factorial(num);
    return 0;
}