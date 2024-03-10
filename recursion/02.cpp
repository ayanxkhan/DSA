// print 1 to n without loop
#include<bits/stdc++.h>
using namespace std;

int cnt=1;
int func(int num){
    if(cnt > num){
        return {};
    }

    cout << cnt << " ";
    cnt++;
    func(num);
}


int main(){
    int num;
    cin >> num;
    func(num);
    return 0;
}

