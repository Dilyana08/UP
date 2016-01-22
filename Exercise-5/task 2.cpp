#include <iostream>
using namespace std;

double f (double number)
{
    return (number * number * number) - 5 * number;
}

double SecondFunction (size_t n, double a, double b)
{
    double h = (b - a) / n;
    double x = a, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (h / 2) * (f(x) + f(x + h));
        x += h;
    }

    return sum;
}

int main()
{
    cout << SecondFunction (100, 0.0, 10.0);


    return 0;
}
