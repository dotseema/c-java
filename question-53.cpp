// write a programme in c++ to calculate the area of equilateral triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
	{
		float side, area;
		cout<<"\n enter the value of side of triangle : ";
		cin>>side;
		area = ( sqrt(3)/4 ) * (side*side);
		cout<<"\n the area of equilateral triangle is = " << area << endl;
		return 0;
			
	}
