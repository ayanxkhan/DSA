#include<bits/stdc++.h>
using namespace std;

int func(int num){
    if(num<=1){
        return num;
    }

    return func(num-2) + func(num-1);
}

int main(){
    cout << func(3);
    return 0;
}