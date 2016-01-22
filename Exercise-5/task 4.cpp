#include <iostream>
using namespace std;

bool prime (int p)
{
    for (int i = p - 1; i > 1; i--)
    {
        if (p % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool f (size_t a, size_t b)
{
    return (prime(a) && prime(b) && (b == a +2) || (a == b +2));
}


int main()
{
    cout << f(6, 3);

    return 0;
}
