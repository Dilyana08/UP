#include <iostream>
using namespace std;

int digitOfNumber (int n, int k)
{
    if (n < 10)
    {
        if (n == k)
        {
            return 1;
        }

        else return 0;
    }

    if (n % 10 == k)
    {
        return 1 + digitOfNumber(n / 10, k);
    }

    else return digitOfNumber(n / 10, k);
}



int main()
{
    cout << digitOfNumber(555676, 9);

    return 0;
}
