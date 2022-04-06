//Write a program in C++ to enter length in centimeter and convert it into meter and kilometer.
#include<iostream>
using namespace std;
int main()
	{ 
		float cm,m,km;
		cout<<"\n enter the distance in centimeter(cm) : ";
		cin>>cm;
		m=(cm/100);
		km=(m/1000);
		cout<<"\n  the distance in meter(m) is = "<<m;
		cout<<"\n the distance in kilometer (km) is = "<<km;
		return 0;
	}
