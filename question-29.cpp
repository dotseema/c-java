//Write a program in C++ to compute quotient and remainder
#include<iostream>
using namespace std;
int main()
	{
		int divider, divisor, quotient, remainder ;
		cout<<"\n enter the value of divider : ";
		cin>> divider;
		cout<<"\n enter the value of divisor : ";
		cin>>divisor;
		quotient = divider/divisor;
		remainder = divider% divisor;
		cout<<"\n the quotient of division is = "<< quotient << endl;
		cout<<"\n remainder of division is = "<< remainder << endl;
		return 0;
		
	}
