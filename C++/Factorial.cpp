#include<iostream>
using namespace std;
int factor(int n)
{
    if(n==1)
        return 1;
    else
        return n*factor(n-1);
}
unsigned long long factorialLoop(int n)
{
  if(n < 0)
    return -1;
  else if (n <= 1)
    return 1;
  else
  {
    unsigned long long product = 1;
    for(int i = 1; i <= n; i++)
    {
      product *= i;
    }
    return product;
  }
}
int main()
{
    int n;
    cout << "Enter a positive integer ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factor(n);
    return 0;
}
