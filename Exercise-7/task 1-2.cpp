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

void NewPlace (char* s, char a, char b)
{

    int number = StringNumber(s);

    for (int i = 0; i <= number; ++i)
    {
        if(s[i] == a)
        {
            s[i] = b;
        }
    }
}


int main()
{
    char* s;
    cin >> s;
    cout << StringNumber(s) << endl;

    NewPlace(s, '#', '*');
    cout << s;


    return 0;
}

