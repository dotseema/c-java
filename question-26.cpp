//Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
#include<iostream>
using namespace std;
int main()
	{
		float fahrenheit, kelvin;
		cout<<"\n enter the value of temperature in fahrenheit ; ";
		cin>> fahrenheit;
		kelvin=(5.0/9)*(fahrenheit-32)+273.15;
		cout<<"\n temperature in fahrenheit is = " << fahrenheit << endl;
		cout<<"\n tempeature in kelvin is = "<< kelvin << endl;
		return 0;
	}

