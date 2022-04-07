 //Write a C++ program to replace all the lower-case letters 
 //of a given string with the corresponding capital letters
 #include <iostream>
#include <algorithm>
using namespace std;

int main() 
	{
    	string text;
    	cout<<"\n enter text to replace : ";
    	cin>>text;
    	getline(cin, text);
    	transform(text.begin(), text.end(), text.begin(), ::toupper);
    	cout << text << endl;
    	return 0;
	}
