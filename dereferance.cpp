#include<iostream>
#include<string>
using namespace std;
int main()
		{
			string food = "pizza"; // variable declaration
			string * ptr = &food;  //pointer declaration
			cout<< ptr <<"\n";  // reference output gives memory address
			cout<< * ptr << "\n"; //dereferance output
		}
