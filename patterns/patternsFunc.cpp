#include<bits/stdc++.h>
using namespace std;

// void printStar1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void printStar2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void printStar3(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void printStar4(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void printStar4(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void printStar5(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void printStar6(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

void printStar7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    // printStar1(n);
    // printStar2(n);
    // printStar3(n);
    // printStar4(n);
    // printStar5(n);
    // printStar6(n);
    printStar7(n);

    return 0;
}