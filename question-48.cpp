//Write a program in C++ which swap the values of two variables not using third variable
#include<iostream>
using namespace std;
  int add( int a,int b)
  {
  	  return (a+b);
  }
  int subtract(int a, int b)
  {
  	  return (a-b);
  }
 
  
  int main()
     {
     	 int a,b;
     	
     	
     	 cout<<" enter the first value ";
     	  cin>>a;
     	 cout<<" enter the second value" ;
     	  cin>>b;
     	 cout<<"\nbefore swapping a and b " << a << " and " << b << endl;
     	 a=add(a,b);
     	 b=subtract(a,b);
     	 a=subtract(a,b);
     	 cout<<" \nafter swapping a and b " << a << " and " << b << endl;
     	 return 0;
     	 
     	 
	 }
