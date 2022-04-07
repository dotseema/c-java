 //Write a C++ program to swap first and last digits of any number.
 #include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 	{
 		int n, first, last, sum, digits, swap, a, b;
    	cout << " Input any number: ";
    	cin >> n;
    	digits = (int)log10(n);
    	first = n / pow(10, digits);
    	last = n % 10;
    	a = first * (pow(10, digits));
    	b = n % a;
    	n = b / 10;
    	swap = last * (pow(10, digits)) + (n * 10 + first);
    	cout << " The number after swaping the first and last digits are: " << swap;
    	return 0;
	}
