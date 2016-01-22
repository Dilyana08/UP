#include <iostream>
using namespace std;

int StringNumber (char* str)
{
    int count = 0;

    while(*str != '\0')
    {
        ++count;
        ++str;
    }

    return count;
}

bool Palindrome (char* str)
{

    int number = StringNumber(str);


    for (int i = 0; i < (number)/2; ++i)
    {
        if(str[i] != str[number - i - 1])
        {
          return false;
        }

    }

    return true;
}


int main()
{
    char* str;
    cin >> str;
    cout << StringNumber(str) << endl;
    cout << Palindrome(str);


    return 0;
}

