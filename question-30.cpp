//Write a program in C++ to compute the total and average of four numbers
#include<iostream>
using namespace std;
int main()
	{
		int a,b,c,d, total;
		float average;
		cout<<"\n enter the value of a : ";
		cin>> a;
		cout<<"\n enter the value of b : ";
		cin>> b;
		cout<<"\n enter the value of c : ";
		cin>> c;
		cout<<"\n enter the value of d : ";
		cin>> d;
		total = (a+b+c+d);
		average = total/4;
		cout<<"\n the sum of all four number is = "<< total<< endl;
		cout<<"\n the average of four number is = "<< average << endl;
		return 0;
	}
