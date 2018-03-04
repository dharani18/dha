#include <iostream>
using namespace std;

int main()
{
  int n, i;
cout << "enter number: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "prime number";
  else
      cout << " not a prime number";

  return 0;
}
