//C++ Program to Check if a Given String is Palindrome
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}
 
// Driver Code
int main()
{
    string S ;
    cout<<"\n enter the text :";
    cin>>S;
    cout << isPalindrome(S);
 
    return 0;
}
