//Write a C++ program to add all the numbers from 1 to a given number. 
#include<iostream>
using namespace std;
int main()
	{
		int n, sum=0;
		cout<<"\n enter the number to do sum upto that number : ";
		cin>>n;
		for(int i=1; i<=n;i++)
			{
				sum += i;
			  }  
		cout<<"\n sum of all the numbers from 1 to given number is = " << sum << endl;
		return 0;
	}
