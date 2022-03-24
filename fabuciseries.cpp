#include<iostream>
#include<cmath>
using namespace std;
int main()
		{
			cout<<"------- FABUNUS SERIES ---------";
		int x=0;
		int y=1;
		int limit;
		cout<<" please enter the limit of fabunaci series";
		cin>>limit;
		int nextvalue=0;
		cout<<x<<"  , "<<y <<"  , "<< endl;
		for(int i=0; i<limit; i++)
		{
			nextvalue = x+y;
			cout<<nextvalue <<" , " ;
			x=y;
			y=nextvalue;
				
		}
	
			return 0;
		}
