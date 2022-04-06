#include<iostream>
#include <iomanip>  
using namespace std;
int main()
	{
		cout<<"--------- to formatting the output-------"<< endl;
		double gravity=9.80665; 
		 // this is floating point number
		cout<< fixed << setprecision(4);
		 // number is set to display with 4 decimal places
		cout<<"\nvalue of gravity is = " << gravity << endl;
		// setw() sets the total width
		cout<<"\nvalue of gravity 4 decimal of total width 8 is : |"<< setw(8) << gravity << "|" <<endl;
		cout<<"\nvalue of gravity 4 decimal place of total width 10 : |" << setw(10) << gravity << "|" << endl;
		cout<< setfill('-');
		// setfill() sets to fill the blanks with specified character
		cout<<"\nvalue of gravity 4 decimal of total width 8 is : |"<< setw(8) << gravity << "|" <<endl;
		cout<<"\nvalue of gravity 4 decimal place of total width 10 : |" << setw(10) << gravity << "|" << endl;
		cout<< scientific ;
		 // set value in scientific format with exponent
		cout << "\n value of gravity in scientific format is : " << gravity << endl;
		bool done = false;  		 		// this is boolean variable
		cout<<"\n status in number : "<<done << endl;
		cout<<boolalpha;   		// set output in alphabet true or false
		cout<<"\n status in alphabet : " << done << endl; 		
		return 0;
	}
