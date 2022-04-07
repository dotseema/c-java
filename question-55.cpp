//write a program in C++ to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<cmath>
using namespace std;
int main()
	{
		float p,t,r, ci,cp;
		cout<<"\n enter the value of principle : ";
		cin>>p;
		cout<<"\n enter the value time : ";
		cin>>t;
		cout<<"\n enter the value of rate of interest : ";
		cin>>r;
		ci = p*pow((1+r/100),t)-p;
		cp = p*pow((1+r/100),t);
		cout<<"\n the compount interest is = "<< ci << endl;
		cout<<"\n the amount for compounded interest is = "<< cp << endl;
		return 0;
	}

