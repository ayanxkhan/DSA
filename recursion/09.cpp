// sum of N numbers using recursion.
// There can be two ways - parameterised recursion and functional recursion.

// Parameterised Way-
// #include<bits/stdc++.h>
// using namespace std;

// void func(int i,int sum){
//     if(i < 1){
//         cout << "Sum = " << sum;
//         return;
//     }

//     func(i-1,sum+i);

// }


// int main(){
//     int num;
//     cin >> num;
//     func(num,0);
//     return 0;
// }


// Functional Way-
#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n == 0){
        return 0;
    }

    return n + func(n-1);
}

int main(){
    int num;
    cin >> num;
    cout << "Sum = " << func(num);
    return 0;
}