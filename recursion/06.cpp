// print 1 to N using backtracking. we arent allowed to call function like func(i+1,num)
#include<bits/stdc++.h>
using namespace std;

void func(int i,int num){
    if(i<1){
        return;
    }

    func(i-1,num);
    cout << i << " ";
}

int main(){
    int num;
    cin >> num;
    func(num,num);
    return 0;
}