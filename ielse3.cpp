#include<iostream>
using namespace std;
int main()
		{
				int x,y,z;
				x=10,y=50,z=30;
				cout<<"\n find the greatest number out of 3";
				string output2 = (x<y)?"\n y is greater than all":"\n x is greater than all";
				cout<< output2<< endl;
				string output = (x<y)?(y<z)? " \n z is greater than all": 
				"\n y is greater than all": "\n x is greater than all";
				cout << output;
				return 0;
		}
