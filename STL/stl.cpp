#include<bits/stdc++.h>
using namespace std;


// void function that will not return anything
void print(){
    cout << "Hello";
}

int sum(int a, int b){
    return a+b;
}

int main(){
    // called the void function which prints hello
    print();

    // made a variable s and called a function and finally prints s which will give the output
    int s=sum(1,5);
    cout << s;
    return 0;

}