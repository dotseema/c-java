//Write a program in C++ to find the Area and Perimeter of a Rectangle. 
#include<iostream>
using namespace std;
int main()
		{
			int length,width,perimeter, area;
			cout<<"\n enter the length of rectangle : " ;
			cin>>length;
			cout<<"\n enter the width of rectangle : " ;
			cin>>width;
			perimeter = 2*(length+width);
			area = (length*width);
			cout<<"\n the perimeter of rectangle is = " << perimeter;
			cout<<"\n the area of rectangle is = " << area;
			return 0;
		}
