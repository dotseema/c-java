// wrie i programme in c++ to swap two number.
#include<iostream>
using namespace std;
int main()
		{
			cout<<" --------SWAP OF TWO NUMBER USING THIRD NUMBER-------";
			int a=10,b=22;
			cout<< " \nthe value of a " << a<< endl;
			cout<< " the value of b is " << b << endl;
			int temp;
			temp=a;
			a=b;
			b=temp;
			cout<<" after swap the values are "<< endl;
			cout<<" the value of a is "<< a << endl;
			cout<<" the value of b is " << b << endl;
		}
