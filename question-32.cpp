//Write a program in C++ to check whether a number is positive, negative or zero
#include<iostream>
using namespace std;
int main()
	{	
		int num1 = 0; 
		cout << "enter a number : ";
    	cin >> num1;
    	if(num1 > 0)
    	{
        	cout << "\n The entered number is positive";
    	}
    	else if(num1 < 0)
    	{
        	cout << "\n The entered number is negative";
    	}
    	else
    	{
        	cout << "\n The number is zero";
   		}
    	return 0;
	}

