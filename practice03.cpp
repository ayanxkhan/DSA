#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
    if(num == 1){
        return false;
    }

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void printPrime(int a, int b)
{
  for (int i = a; i <= b; i++)
  {
    if (checkPrime(i))
    {
      cout << i << " ";
    }
  }
}

int main(){
    int upper,lower;
    cin >> upper >> lower;

    printPrime(upper,lower);
    return 0;
}