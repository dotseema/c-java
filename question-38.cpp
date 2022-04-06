//Write a program in C++ that takes a number as input and prints its multiplication table upto 10.
#include<iostream>
using namespace std;
int main()
	{
		int a, i=0;
		cout<<"\n enter the value for a : ";
		cin>>a;
		for(int i=1;i<=10;i++)
			{
				cout<< a << "x" <<i <<" = "<<a*i << endl;
			}
		return 0;
	}
	
	
