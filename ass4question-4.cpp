//reverse of string
#include <iostream>
#include <string>
using namespace std;

string reverse_string(string str) 
	{
		string temp_str = str;
		int index_pos = 0;

		for (int x = temp_str.length()-1; x >= 0; x--)
		{
			str[index_pos] = temp_str[x];
			index_pos++;
		}
		return str;
	}

int main() 
	{
		cout << "Original string: techrel "; 
		cout << "\nReverse string: " << reverse_string(" techrel ");
		return 0;
	}
