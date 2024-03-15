// Print Nth fibonacci element.Here we will use multiple recursion calls.

#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int last = func(n - 1);
    int s_last = func(n - 2);
    return last + s_last;
}

int main()
{
    cout << func(4);
}