//C++ Program to Remove all Characters in a String Except Alphabets.
#include <iostream>
using namespace std;
int main() 
{
   char str[100] = "\n seemajadhav@1918 ";
   int i, j;
   cout<<"\n String before modification : "<<str<<endl;
   for(i = 0; str[i] != '\0'; ++i) 
   {
      while(!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] ==          '\0'))
	   {
         for(j = i; str[j] != '\0'; ++j) 
		 {
            str[j] = str[j+1];
         }
      }
   }
   cout<<"\n String after modification : "<<str;
   return 0;
}

