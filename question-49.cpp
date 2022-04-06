// Write a program in C++ to print the code 
//(ASCII code / Unicode code etc.) of a given character.
#include<iostream>
using namespace std;
int main()
	{
		char unq_ch;
		cout<<"\n enter the character ";
		cin>>unq_ch;
		cout<<"\n the ASCII value of "<<unq_ch <<" is = " <<(int)unq_ch;
		cout<<"\n character of the ASCII value " <<(int)unq_ch <<" is = " <<(char)((int)unq_ch) ;
		return 0;
	}
