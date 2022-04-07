// write a programme in c++ to enter P, T, R  and calculate the simple interest
#include<iostream>
using namespace std;
int main()
	{
		float p, t, r, interest ;
		cout<<"\n enter the value of principle : ";
		cin>>p;
		cout<<"\n enter the value time : ";
		cin>>t;
		cout<<"\n enter the value of rate of interest : ";
		cin>>r;
		interest = (p*t*r)/100;
		cout<<"\n the simple interest is = "<< interest << endl;
		return 0;
	}
