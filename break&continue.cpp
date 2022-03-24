#include<iostream>
using namespace std;
int main()
		{
			cout<<" ***** code for continue *****\n" ;
			for(int i=0;i<10;i++)
				{
					if(i==4)
						{
							continue;
						}
					cout<< i << "\n";
				}
			cout<<"\n***** code for break *****\n";
			for(int i=0;i<10;i++)
				{
					if(i==4)
						{
							break;
						}
					cout<< i << "\n";
				}
			return 0;
		}
