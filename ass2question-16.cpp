//C++ Program to Reverse a Number.
#include <iostream>
using namespace std;
int main() 
{
   int num , rev = 0;
   cout<<"\n enter the number : ";
   cin>>num;
   while(num > 0) 
   {
      rev = rev*10 + num%10;
      num = num/10;
   }
   cout<<"\n Reverse of number is : "<<rev;
   return 0;
}

