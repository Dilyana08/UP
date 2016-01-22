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

void Remove (char* s, char a)
{

    int number = StringNumber(s);
    bool forward = false;

    for (int i = 0; i < number; ++i)
    {
        if(s[i] == a)
        {
            if (s[i] == s[i+1])
            {
                forward = false;
            }

            else
            {
                forward = true;
            }

            for (int j = i; j < number - 1; ++j)
            {
                s[j] = s [j+1];
            }

            --number;

            if(!forward)
            {
                --i;
            }
        }
    }

    s[number] = '\0';
}


int main()
{
    char* s;
    cin >> s;
    cout << StringNumber(s) << endl;

    Remove(s, '*');
    cout << s;


    return 0;
}

