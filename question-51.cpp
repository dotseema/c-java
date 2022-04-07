//Write a program in C++ that converts kilometers per hour to miles per hour
#include<iostream>
using namespace std;
int main()
	{
		float kmph, miph;
		cout<<"\n enter the distance in kilometer per hour : ";
		cin>>kmph;
		miph = ( kmph * 0.6213712 );
		cout<<"\n the distance in mile per hour = " << miph << endl;
		return 0;
	}
