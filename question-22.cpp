//Write a program in C++ to find the third angle of a triangle
#include<iostream>
using namespace std;
int main()
		{
			float angle1, angle2, angle3;
			cout<<"\n enter the value for angle1 : " ;
			cin>>angle1;
			cout<<"\n enter the value of angle2 : " ;
			cin>>angle2;
			angle3 = 180-(angle1-angle2);
			cout<<"\n the value of third angle is = "<< angle3 << endl;
			return 0;
		}
