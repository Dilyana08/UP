#include <iostream>
using namespace std;

int main()
{
    int x, n, number = 1;

    do
        {
          cout << "Please enter the value of x: ";
          cin >> x;
          cout << "Please enter the value of n: ";
          cin >> n;
        }
    while (x < 1);

    while (number <= n)
    {
        x++ ;
        if ((x % 7 == 0) || (x % 9 == 0))
        {
            cout << number << ". " << x << endl;
            number ++ ;
        }
    }

    return 0;
}
