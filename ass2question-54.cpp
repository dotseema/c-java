//C++ Program to Concatenate Two Strings
#include<iostream>
using namespace std;
int main() 
{
   char str1[100] = "\n Hello...";
   char str2[100] = "\n who are you";
   int i,j;
   cout<<"\n String 1: "<<str1<<endl;
   cout<<"\n String 2: "<<str2<<endl;
   for(i = 0; str1[i] != '\0'; ++i);
   j=0;
   while(str2[j] != '\0') 
   {
      str1[i] = str2[j];
      i++;
      j++;
   }
   str1[i] = '\0';
   cout<<"\n String after concatenation: "<<str1;
   return 0;
}

