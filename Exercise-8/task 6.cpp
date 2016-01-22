#include <iostream>
using namespace std;

bool Symbols (char* symbol1, char* symbol2)
{
    if (*symbol1 == '\0' && *symbol2 == '\0')
    {
       return true;
    }

    else if (*symbol1 == '\0' && *symbol2 != '\0')
    {
       return false;
    }

    else if (*symbol2 == '\0' && *symbol1 != '\0')
    {
       return false;
    }

    if (*symbol1 == *symbol2)
    {
        return Symbols(symbol1 + 1, symbol2 + 1);
    }

    else
    {
        return false;
    }
}



int main()
{
    cout << Symbols("/-*+++", "-*/");

    return 0;
}
