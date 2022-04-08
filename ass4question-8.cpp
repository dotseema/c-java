// C++ Program to find sum of elements in a given array
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0, pro = 1;
    cout << "\n Enter the size of the array : ";
    cin >> n;
    cout << "\n Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "\n Sum of array elements : " << sum;
    return 0;
}
