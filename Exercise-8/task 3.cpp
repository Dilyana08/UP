#include <iostream>
using namespace std;

int digitOfNumber (int n)
{
    if (n < 10) return 1;

    return 1 + digitOfNumber(n / 10);
}



int main()
{
    cout << digitOfNumber(351);

    return 0;
}
