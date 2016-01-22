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


int main()
{
    char* s;
    cin >> s;
    cout << StringNumber(s);


    return 0;
}

