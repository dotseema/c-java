//C++ Program to Find GCD.
#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() 
{
   int a = 105, b = 30;
   cout<<"\n  GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   return 0;
}

