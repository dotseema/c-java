//Write a program in C++ to find the area of Scalene Triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
	{
		float area , side1 , side2 , angle ;
		cout<<"\n enter the value of triangle side1 : ";
		cin>>side1;
		cout<<"\n enter the value of triangle side2 : ";
		cin>>side2;
		cout<<"\n enter the angle value between these sides : ";
		cin>>angle;
		area = (side1 * side2 * sin((3.14/180)*angle))/2;
		cout<<"\n area of scalene triangle is = " << area << endl;
		return 0;
	}
	
	
