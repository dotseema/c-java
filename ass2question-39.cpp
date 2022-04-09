//C++ program to Reverse a Sentence Using Recursion.
#include <iostream>
using namespace std;
void reverse(char *str) {
   if(*str == '\0')
   return;
   else {
      reverse(str+1);
      cout<<*str;
   }
}
int main() {
   char str[] = "how are you .....";
   cout<<"\n  Original String: "<<str<<endl;
   cout<<"\n  Reversed String: ";
   reverse(str);
   return 0;
}

