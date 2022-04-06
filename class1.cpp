#include<iostream>
using namespace std;
class myclass
		{
			// access specifier
			public:
				int k, x;
			private:
				int y;
			protected:
				int z;
			// syntax for method is returntype   method name(){}
			public:
				void printdata()
					{
						cout<<"\n we are inside the method ";
					}			
		};
	int main()
		{
			cout<<"\n hello world ";
			myclass my;
			my.x= 10;
			my.printdata();	
			cout<<"\n value of x = "<< my.x<< endl;
			return 0;
		}
