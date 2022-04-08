#include<iostream>
#include<cmath>
using namespace std;
int main()
		{
			cout<<"-------  febonanci series ---------";
		int x=0;
		int y=1;
		int limit;
		cout<<"\n please enter the limit of fabunanci series : ";
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
