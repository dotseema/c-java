//C++ Program to Calculate Sum of Natural Number.
#include<iostream>
using namespace std;
int main() 
{
   int n, sum=0, i;
   cout<<"\n enter the value for n : ";
   cin>>n;
   for(i=1;i<=n;i++)
   sum=sum+i;
   cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
   return 0;
}
