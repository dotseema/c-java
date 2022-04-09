//C++ Program to Convert Octal Number to Decimal and vice-versa.
#include <iostream>
#include <cmath>
using namespace std;
void DecimalToOctal(int decimalNum) 
{
   int octalNum = 0, placeValue = 1;
   int dNo = decimalNum;
   while (decimalNum != 0) 
   {
      octalNum += (decimalNum % 8) * placeValue;
      decimalNum /= 8;
      placeValue *= 10;
   }
   cout<<"\n Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;
}
void OctalToDecimal(int octalNum) 
{
   int decimalNum = 0, power = 0;
   int oNo = octalNum;
   while(octalNum != 0) 
   {
      decimalNum += (octalNum%10) * pow(8,power);
      ++power;
      octalNum/=10;
   }
   cout<<"\n Decimal form of octal number "<<oNo<<" is "<<decimalNum<<endl;
}
int main() 
{
   DecimalToOctal(25);
   OctalToDecimal(38);
   return 0;
}

