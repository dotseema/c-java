//C++ Program to Display Factors of a Number.
#include<iostream>
using namespace std;
int main() 
{
   int n, i;
   cout<<"\n enter the value of n : ";
   cin>>n;
   cout << "The factors of " << n << " are : ";
   for(i=1; i <= n; i++) 
   {
      if (n % i == 0)
      cout << i << " ";
   }
   return 0;
}

