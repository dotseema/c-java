#include<iostream>
using namespace std;
int main()
		{
   			cout<<"\n----------checking overflow / underflow during various arithmetic operations.----------\n\n";
   			int n1=2147483647;
   			cout<<"\n    overflow the integer range and set in minimum range : "<< n1+1 <<endl;
   			cout<<"\n    increasing from its minimum range : "<< n1+2<<endl;
   			cout<<"\n    product is : " << n1 * n1 << endl;
   			int n2=-2147483648;
   			cout<<"\n    underflow the integer range and set in maximum range : "<< n2-1 <<endl;
   			cout<<"\n    decreasing from its maximum range : "<< n2-2<<endl;
   			cout<<"\n    product is : " <<n2 * n2 << endl;
			return 0;
		}
