//C++ Program to Calculate Power Using Recursion.
#include <iostream>
using namespace std;
int FindPower(int base, int power) {
   if (power == 0)
   return 1;
   else
   return (base * FindPower(base, power-1));
}
int main() {
   int base , power;
   cout<<"\n enter the value of base : ";
   cin>>base;
   cout<<"\n enter the value of power : ";
   cin>>power;
   cout<< "\n "<<base<<" raised to the power "<<power<<" is " <<FindPower(base, power);
   return 0;
}

