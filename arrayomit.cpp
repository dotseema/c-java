#include<iostream>
#include<string>
using namespace std;
int main()
		{
			string cars[5];
			// omit the elements in declairation
			cars[0]={"volvo"};
			cars[1]={"BMW"};
			cars[2]={"ford"};
			cars[3]={"marrazo"};
			cars[4]={"renault-loggy"};
			for(int i=0;i<5;i++)
						{
							cout<< cars[i] << "\n";
						}
						return 0;
		}
