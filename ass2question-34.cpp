//C++ program to Calculate Factorial of a Number Using Recursion.
#include <iostream>
using namespace std;
int fact(int n) 
{
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
int main() 
{
   int n;
   cout<<"\n enter the value of n : ";
   cin>>n;
   cout<<"\n Factorial of "<<n<<" is "<<fact(n);
   return 0;
}

