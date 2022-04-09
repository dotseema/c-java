//C++ program to Find Sum of Natural Numbers using Recursion
#include <iostream>
using namespace std;
int sum(int n)
 {
   if(n == 0)
   return n;
   else
   return n + sum(n-1);
}
int main() 
{
   int n;
   cout<<"\n enter the value of n : ";
   cin>>n;
   cout<<"\n Sum of first "<<n<<"\n natural numbers is "<<sum(n);
   return 0;
}

