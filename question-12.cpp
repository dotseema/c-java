//12. Write a program in C++ to add two numbers accept through keyboard.   
//Sample Output:
//Original array:
//[10, 20, 30]
//After append values to the end of the array:
//[10 20 30 40 50 60 70 80 90]
#include<iostream>
#include<string>
using namespace std;
int main()
		{
			int number[10];
			number[0]={10};
			number[1]={20};
			number[2]={30};
			number[3]={40};
			number[4]={50};
			number[5]={60};
			number[6]={70};
			number[7]={80};
			number[8]={80};
			number[9]={100};
			for(int i=0; i<10;i++)
					{
						cout<< number[i] <<"\n";
						return 0;
					}
			
		}
