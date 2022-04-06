//Write a program in C++ to convert temperature in Kelvin to Celsius
#include<iostream>
using namespace std;
int main()
	{
		float kelvin, celsius;
		cout<<"\n enter the value of temperature in kelvin : ";
		cin>> kelvin;
		celsius = kelvin - 273.15;
		cout<<"\n temperatue in kelvin is = "<< kelvin << endl;
		cout<<"\n temperature in celsius is = "<< celsius << endl;
		return 0;
	}
