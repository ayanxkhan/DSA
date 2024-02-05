/*A function is a group of statements that together perforn any task.
It avoids rewritting the same code or logic again and again.
It increases readability of code.
types-
void 
return
parameterised
non parameterised

*/

#include<bits/stdc++.h>
using namespace std;

// void means it did not return me anything also it is non parameter.
void printName(string name){
    cout << "Hello " << name << endl;
}

int main(){
    string name1;
    cout << "Enter your name:";
    cin >> name1;
    printName(name1);

    string name2;
    cout << "Enter your name:";
    cin >> name2;
    printName(name2);
    return 0;
}



// sum of two numbers
// return function
// #include<bits/stdc++.h>
// using namespace std;

// int sum(int num1, int num2){
//     int num3= num1 + num2;
//     return num3;
// }


// int main(){
//    int num1,num2;
//    cin >> num1 >> num2;
//    int result = sum(num1,num2);
//    cout << result;
//     return 0;
// }


// void function
// #include<bits/stdc++.h>
// using namespace std;

// void sum(int num1, int num2){
//     int num3= num1 + num2;
//     cout << num3;
// }


// int main(){
//    int num1,num2;
//    cin >> num1 >> num2;
//    sum(num1,num2);
//     return 0;
// }




// array always go with reference.
// #include<bits/stdc++.h>
// using namespace std;

// void doSomething(int arr[], int n){
//     arr[0] += 100;
//     cout << "Value inside function:" << arr[0] << endl;

// }

// int main(){
//     int n=5;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     doSomething(arr,n);
//     cout << "Value inside main:" << arr[0] << endl;


//     return 0;

// }
  


