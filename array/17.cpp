// codebashers playlist tcs 
// consider the series - 1,1,2,3,4,7,8,15,9,24,16,,40,32,72..
// this series is a mixture of three series
// 1) all prime psoition values are power of 2
// 2) all the perfect square position are power of 3
// c) remaining positions are sum of previous two __valueless

// ex n=15 , the 15th term in series is 104, so only 104 should be printed.

// N will not exceed 40 which means series is of size 40

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    unordered_map<int, bool> mp;
    mp[2] = true;
    mp[3] = true;
    mp[5] = true;
    mp[7] = true;
    mp[11] = true;
    mp[13] = true;
    mp[17] = true;
    mp[19] = true;
    mp[23] = true;
    mp[29] = true;
    mp[31] = true;
    mp[37] = true;
    mp[39] = true;

    return mp[n];
}

bool isPerfectSquare(int n)
{
    unordered_map<int, bool> mp;
    mp[1] = true;
    mp[4] = true;
    mp[9] = true;
    mp[16] = true;
    mp[25] = true;
    mp[36] = true;

    return mp[n];
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int power_of_2 = 1;
    int power_of_3 = 1;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(i + 1))
        {
            arr[i] = power_of_2;
            power_of_2 *= 2;
        }
        else if (isPerfectSquare(i + 1))
        {
            arr[i] = power_of_3;
            power_of_3 *= 3;
        }
        else
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }

    cout << arr[n - 1];
    return 0;
}