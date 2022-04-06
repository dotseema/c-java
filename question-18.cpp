//Write a program in C++ to find the area of any triangle using Heron's Formula.
#include<iostream>
#include<cmath>
using namespace std;
int main()
		{
			int side1, side2, side3;
			float s,area;
			cout<<" enter the value of side1 : ";
			cin>>side1;
			cout<<"\n enter the value of side2 : ";
			cin>>side2;
			cout<<"\n enter the value of side3 : ";
			cin>>side3;
			s=(side1+side2+side3)/2;
			area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
			cout<<"\n area of any triangle using heron's formula is : " << area << endl;
			return 0;
		}
	
