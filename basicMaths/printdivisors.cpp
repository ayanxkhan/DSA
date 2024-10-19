// #include<bits/stdc++.h>
// using namespace std;

// void printDivisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i == 0){
//             cout << i << " ";
//         }
//     }

// }

// int main(){
//     int n;
//     cin >> n;
//     printDivisors(n);
//     return 0;
// }

// // time complexity = 0(n)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=15;
    // cin >> num;

    vector <int> ls;

    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            ls.push_back(i);
        }

        if((num/i)!=i){
            ls.push_back(num/i);

        }
    }

    sort(ls.begin(),ls.end());
    for(auto it: ls) cout << it << " ";

    // or
    // for(auto it=ls.begin();it!=ls.end();it++){
    //     cout << *it << " ";
    // }

return 0;
}

// // time complexity = 0(sqrt(n)) + 0(n*log(n)) + 0(n*log(n))
