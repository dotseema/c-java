#include<iostream>
#include<string>
using namespace std;
int main()
		{
			string food = "pizza";
			string* ptr = &food;
			cout<< food<<"\n";  // o\p is pizza
			cout<<&food <<"\n";  // o\p is 0x6dfed4
			cout<< *ptr <<"\n";  // o\p is pizza
			*ptr = "coldcoffee";  // changing the value of pointer
			cout<< *ptr <<"\n";  // o\p is coldcoffee
			cout << food <<"\n";   //o\p is coldcoffee
			return 0;
		}
