// #include <iostream>
// using namespace std;

// // Function to calculate the sum of first n Fibonacci numbers
// int fibonacciSum(int n) {
//     if (n <= 0) return 0;

//     int a = 0, b = 1, sum = a + b;

//     for (int i = 3; i <= n; ++i) {
//         int next = a + b;
//         sum += next;
//         a = b;
//         b = next;
//     }
    
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;
    
//     cout << fibonacciSum(n);
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int fibonacciSum(int n) {
//   int sum = 0;
//   int a = 0;
//   int b = 1;

//   for (int i = 0; i < n; i++) {
//     sum += a;
//     int temp = a;
//     a = b;
//     b = temp + b;
//   }

//   return sum;
// }

// int main() {
//   int n;
//   cin >> n;

//   cout << fibonacciSum(n);

//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=3;
  int a=0;
  int b=1;
  int sum=1;

  int fib=0;

  for(int i=1;i<n;i++){
    fib=a+b;
    // cout << fib << endl;
    sum=sum+fib;
    a=b;
    b=fib;
  }

  cout << sum;

  return 0;
}
// }

// int fibSum(int n){
//   int a=0;
//   int b=1;
//   int fib=0;

//   int sum=1;

//   for(int i=1;i<n;i++){
//     fib=a+b;
//     // cout << fib << endl;
//     sum=sum+fib;
//     a=b;
//     b=fib;
//   }
//   cout << "Sum of " << n << "th " << "fibonacci series is: " << sum;
// }

// int main(){
//   int num;
//   cin >> num;

//   fibSum(num);
//   return 0;
// }