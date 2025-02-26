// #include<bits/stdc++.h>
// using namespace std;

// bool isPerfectNumber(int num){
//     if(num<=0){
//         return false;
//     }

//     int sum = 0;

//     for(int i=1;i<num;i++){
//         if(num%i==0){
//             sum = sum + i;
//         }
//     }

//     return sum == num;
// }

// int main(){
//     int num;
//     cin >> num;

//     if(isPerfectNumber(num)){
//         cout << "Perfect";
//     }
//     else{
//         cout << "Not Perfect";
//     }

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

void isPerfect(int num){
    int sum = 0;

    for(int i=1;i<num;i++){
        if(num%i==0){
            sum = sum + i;
        }
    }

    if(num == sum){
        cout << "Perfect";
    }
    else{
        cout << "Not";
    }
}

int main(){
    int num;
    cin >> num;

    isPerfect(num);
    return 0;
}