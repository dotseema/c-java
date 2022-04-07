//Write a program in C++ to print the area of a polygon
#include<iostream>
#include<cmath>
using namespace std;
int main()
	{
		float s, l, area;
		cout<<"\n enter the number of sides of polygown : ";
		cin>>s;
		cout<<"\n enter the length of each side of polygoan : ";
		cin>>l;
		area = ( l* (s*s)) / (4.0 * tan((M_PI / l))) ;
		cout<<"\n area of polygoan is = " << area << endl ;
		return 0;
	}
