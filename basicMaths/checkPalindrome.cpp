#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int dup = num;

    int rev_no=0;
    
    while(num>0){
        int last_digit = num % 10;
        rev_no = (rev_no*10) + last_digit;
        num=num/10;
    }

    if(rev_no == dup){
        cout << dup << " is a palindrome number";
    }
    else
    {
        cout << dup << " is not a palindrome number";
    }

    return 0;
}


