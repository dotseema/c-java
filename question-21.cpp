//Write a program in C++ to convert temperature in Fahrenheit to Celsius
#include<iostream>
using namespace std;
int main()
		{
			float celsius, fahrenheit;
			cout<<"\n enter the temperature in fahrenheit : " ;
			cin>> fahrenheit;
			celsius = ((fahrenheit*5.0)-(5.0*32))/9 ;
			cout<<"\n the tempereture in fahrenheit = " << fahrenheit <<endl;
			cout<<"\n the temperature in celsius = "<< celsius <<endl ;			
			return 0;
		}
		
