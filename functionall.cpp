#include<iostream>
#include<string>
using namespace std;
	void addfun()
		{
			cout<<"\n --------function start --------";
			int a,b;
			a=30,b=20;
			cout<<"\n addition of a & b is = "<< a+b << endl;
			cout<<"/n---------- function end ----------";
		}
	void addfun(int a, int b , int c); // this is only declaration
	int addfun(int a, int b)
		{
			cout<<"\n add return type function";
			int x,y;
			x=a;
			y=b;
			int sum = x+y;
			return sum;	
		}
	int main()
		{
			int a,b;
			addfun();
			cout<<"\n enter the value of a and b ";
			cin>>a>>b;
			addfun(a,b,10);
			int output = addfun(a,b); // o/p is 300
			cout<<"\n value of return output is " << output << endl;
			cout<<"\n value of return add function directly is " << addfun(a,b);
			return 0;		
		}
	void addfun(int a, int b , int c) 
		{
			cout<<"\n --------function start --------";
			int x,y;
			x=a;
			y=b;
			cout<<"\n addition of a and b is " << x+y+c << endl;
			cout<<"\n ---------function end ----------" ;
		}
