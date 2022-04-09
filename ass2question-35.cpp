//C++ Program to Find G.C.D Using Recursion.
#include<iostream>
using namespace std;
int gcd(int a, int b) 
{
   if (a == 0 || b == 0)
   return 0;
   else if (a == b)
   return a;
   else if (a > b)
   return gcd(a-b, b);
   else return gcd(a, b-a);
}
int main() 
{
   int a, b;
   cout<<"\n enter the value of a : ";
   cin>>a;
   cout<<"\n enter the value of b : ";
   cin>>b;
   cout<<"\n GCD of "<< a <<" \n GCD of  "<< b <<"\n is : "<< gcd(a, b);
   return 0;
}
