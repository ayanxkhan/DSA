// print 1 to n linearly
#include<bits/stdc++.h>
using namespace std;

void func(int i,int num){
    if(i>num){
        return;
    }

    cout << i << endl;
    func(i+1,num);
}

int main(){
    int num;
    cin >> num;
    func(1,num);
    return 0;
}