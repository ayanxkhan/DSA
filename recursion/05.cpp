// print N to 1
#include<bits/stdc++.h>
using namespace std;

void func(int i , int num){
    if(i<1){
        return;
    }

    cout << i << " ";
    func(i-1,num);
}

int main(){
    int num;
    cin >> num;
    func(num,num);
    return 0;
}