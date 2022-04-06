//Write a program in C++ to convert temperature in Celsius to Fahrenheit
#include<iostream>
using namespace std;
int main()
		{
			float celsius, fahrenheit;
			cout<<"\n enter the temperature in celsius : ";
			cin>>celsius;
			fahrenheit = (celsius * 9.0) /5.0 +32 ;
			cout<<"\n the temperature in celsius = "<< celsius <<endl ;
			cout<<"\n the tempereture in fahrenheit = " << fahrenheit <<endl;
			return 0;
		}
		
	
