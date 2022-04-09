//C++ Program to Access Elements of an Array Using Pointer.
#include <iostream>
using namespace std;
int main() 
{
   int arr[5] = {5, 2, 9, 4, 1};
   int *ptr = &arr[2];
   cout<<"\n The value in the second index of the array is : "<< *ptr;
   return 0;
}
