//Write a language program in C++ which accepts the 
//user's first and last name and print them in reverse order with a space between them
#include<iostream>
using namespace std;
int main()
	{
		char firstname[30],lastname[30];
		cout<<"\n enter first name : ";
		cin>>firstname;
		cout<<"\n enter last name : ";
		cin>>lastname;
		cout<<"\n name in reverse is : \n "<<lastname <<" "<<firstname <<" ";
		return 0;
		
	}
