#include <iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n)
{
  if (n == 0)
    return true;
  else
    return isOdd(n - 1);
}

bool isOdd(int n)
{
  return !isEven(n);
}

int main(int argc, char **argv)
{
  int n = 8;
  bool kq = isEven(n);
  if (kq == true)
    cout << n << " la so chan" << endl;
  else
    cout << n << " la so le" << endl;
  return 0;
}