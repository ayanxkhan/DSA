#include<bits/stdc++.h>
using namespace std;

// pairs
void explainPair(){


    // to store two values in a variable
    // pair <int , int> p ={1,3};
    // cout << p.first << " " << p.second;

    // we can use nested pair to store multiple values
    // pair <int , pair <int , int>> p = {1,{3,4}};
    // cout << p.first << " " << p.second.first << " " << p.second.second;


    // pair array {1,2} is index 0, {2,5} is index 1 and so on 
    pair <int , int> arr[] = {{1,2} , {2,5} , {5,1}};
    cout << arr[0].second;
}

int main(){
    explainPair();

}