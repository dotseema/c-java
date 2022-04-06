//Write a program in C++ to convert temperature in Celsius to Kelvin
#include<iostream>
using namespace std;
int main()
	{
		float celsius, kelvin;
		cout<<"\n enter the value of temperature in celsius :";
		cin>> celsius;
		kelvin = celsius + 273.15;
		cout<<"\n temperature in celsius is = "<< celsius << endl;
		cout<<"\n temperature in kelvin is = "<< kelvin << endl;
		return 0;
	}
