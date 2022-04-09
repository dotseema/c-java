//C++ Program to Convert Binary Number to Octal and vice-versa.
#include <iostream>
#include <cmath>
using namespace std;
int BinarytoOctal(int binaryNum)
 {
   int octalNum = 0, decimalNum = 0, count = 0;

   while(binaryNum != 0) {
      decimalNum += (binaryNum%10) * pow(2,count);
      ++count;
      binaryNum/=10;
   }
   count = 1;
   while (decimalNum != 0) 
   {
      octalNum += (decimalNum % 8) * count;
      decimalNum /= 8;
      count *= 10;
   }
   return octalNum;
}
int OctalToBinary(int octalNum)
 {
   int decimalNum = 0, binaryNum = 0, count = 0;
   while(octalNum != 0) 
   {
      decimalNum += (octalNum%10) * pow(8,count);
      ++count;
      octalNum/=10;
   }
   count = 1;
   while (decimalNum != 0) 
   {
      binaryNum += (decimalNum % 2) * count;
      decimalNum /= 2;
      count *= 10;
   }
   return binaryNum;
}
int main() 
{
   int binaryNum , octalNum ;
   cout<<"\n enter the binary number : ";
   cin>>binaryNum;
   cout<<"\n enter the octal number : ";
   cin>>octalNum ;
   cout <<"\n Binary to Octal"<<endl;
   cout<<"\n Binary number: "<<binaryNum<<endl;
   cout<<"\n Octal number: "<<BinarytoOctal(binaryNum)<<endl;

   cout <<"\n Octal to Binary"<<endl;
   cout<<"\n Octal number: "<<octalNum<<endl;
   cout<<"\n Binary number: "<<OctalToBinary(octalNum)<<endl;
   return 0;
}
