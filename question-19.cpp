//Write a program in C++ to find the area and circumference of a circle. 
#include<iostream>
using namespace std;
int main()
		{
			int diameter;
			float area, circumference , radius;
			cout<<"\n enter the value of diameter : ";
			cin>> diameter;
			radius=(diameter/2);
			cout<<"\n radius of circle is : "<< radius<< endl;
			circumference= 2*3.14*radius;
			area = 3.14*(radius*radius);
			cout<<"\n the circumference of circle is = " << circumference;
			cout<<"\n area of circle is = "<< area ;
			return 0;
		}  
