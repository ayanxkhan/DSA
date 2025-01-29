// Sum of even digits from a list. ignore odd numbers

#include<bits/stdc++.h>
using namespace std;

int sumEvenDigits(const vector<int>  &numbers){
    int sum = 0;
    for(int num : numbers){
        while(num>0){
            int digit = num % 10;
            if(digit % 2 == 0){
                sum = sum + digit;
            }
        num = num / 10;
        }
    }
    return sum;

}

int main(){
    vector<int> numbers = {123,456,789};
    cout << "Output = " << sumEvenDigits(numbers) << endl;
    return 0;
}