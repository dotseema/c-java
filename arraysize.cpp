#include<iostream>
#include<string>
using namespace std;
int main()
		{
			int num[5]={3,5,7,9,11};
			// coz int type datavariable usually of 4 bytes so 
			//it showa 20 =4(int size in bytes)*5(size of element.
			cout<< sizeof(num)<< endl;
			int getarraylength=sizeof(num)/sizeof(int);
			cout<< "\n" <<getarraylength<< endl;
			
			return 0;
		}
