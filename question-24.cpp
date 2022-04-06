//Write a program in C++ to convert temperature in Kelvin to Fahrenheit
#include<iostream>
using namespace std;
int main()
	{
		float fahrenheit, kelvin;
		cout<<"\n enter the value of temperature in kelvin : ";
		cin>> kelvin;
		fahrenheit = ( 9.0/5 ) * ( kelvin- 273.15 ) + 32;
		cout<<"\n temperature in kelvin = "<< kelvin << endl;
		cout<<"\n temperature in fahrenheit = "<< fahrenheit << endl;
		return 0;
	}

