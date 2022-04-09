//C++ Program to Find the Frequency of Characters in a String.
#include <iostream>
using namespace std;

int main()
{
    string str = "\n  hi hello how he she ";
    char checkCharacter = 'h';
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }
    cout << "\n Number of " << checkCharacter << " = " << count;
    return 0;
}

