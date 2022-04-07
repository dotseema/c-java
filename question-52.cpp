
//Write a program in C++  to enter two angles of triangle and find the third angle.
#include<iostream>
using namespace std;
int main()
	{
		float angle1, angle2, angle3;
		cout<<"\n enter the first angle of triangle : ";
		cin>>angle1;
		cout<<"\n enter the second angle of triangle : ";
		cin>>angle2;
		angle3 = 180 - ( angle1+ angle2);
		cout<<"\n the third angle of triangle is = " << angle3 << endl;
		return 0;
	}
