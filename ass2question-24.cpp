//C++ Program to Display Prime Numbers Between Two Intervals.
#include <iostream>
using namespace std;
 
bool isPrime(int n) 
{
    bool isPrime = true;
    if (n == 0 || n == 1) 
	{
        isPrime = false;
    }
    else 
	{
        int i = 0;
        for (i = 2; i <= n / 2; ++i) 
		{
            if (n % i == 0) 
			{
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
 
int main() 
{
    int n1, n2;
    cout <<"\n Enter first number  : ";
    cin >> n1;
    cout <<"\n Enter second number : ";
    cin >> n2;
     
    int temp = (n1 > n2)? n2: n1;
    int upperlimit = (n1 > n2)? n1: n2;
     
    cout <<"\n Prime Numbers : ";
    while (temp < upperlimit) {
        if (isPrime(temp)) {
            cout << temp << " ";
        }
        temp++;
    }
    return 0;
}

