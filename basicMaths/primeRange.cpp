#include <iostream>
#include <math.h>
using namespace std;
bool checkprime(int num)
{
  if (num == 1)
    return false;
  int i = 2;
  for (i = 2; i < num; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}
void PrintPrimesbwrange(int a, int b)
{
  for (int i = a; i <= b; i++)
  {
    if (checkprime(i))
    {
      cout << i << " ";
    }
  }
}
int main()
{
  int a = 1, b = 23;
  PrintPrimesbwrange(a, b);
  return 0;
}