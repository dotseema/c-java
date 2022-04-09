//C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String.
#include <iostream>
using namespace std;
int main() 
{
   char str[] = {"rainbow has seven colours  123"};
   int vowels, consonants, digits, spaces;
   vowels = consonants = digits = spaces = 0;
   for(int i = 0; str[i]!='\0'; ++i) {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
      str[i]=='o' || str[i]=='u' || str[i]=='A' ||
      str[i]=='E' || str[i]=='I' || str[i]=='O' ||
      str[i]=='U') 
	  {
         ++vowels;
      } else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')) {
         ++consonants;
      } 
	  else if(str[i]>='0' && str[i]<='9')
	   {
         ++digits;
       } 
	  else if (str[i]==' ')
	   {
         ++spaces;
       }  
   }
   cout << "The string is: " << str << endl;
   cout << "Vowels: " << vowels << endl;
   cout << "Consonants: " << consonants << endl;
   cout << "Digits: " << digits << endl;
   cout << "White spaces: " << spaces << endl;
   return 0;
}
