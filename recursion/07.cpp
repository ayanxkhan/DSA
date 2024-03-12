// print N to 1 using backtracking.
#include<bits/stdc++.h>
using namespace std;

void func(int i,int num){
    if(i>num){
        return ;
    }

    func(i+1,num); /*Backtrack*/
    cout << i << " ";
}

int main(){
    int num;
    cin >> num;

    func(1,num);
    return 0;
}