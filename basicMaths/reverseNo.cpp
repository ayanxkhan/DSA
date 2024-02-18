#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int rev_no=0;

    while(num>0){
        rev_no = rev_no*10 + num%10;
        num=num/10;
    }

    cout << "Reversed number is: " << rev_no;
    return 0;
}