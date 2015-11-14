# include <iostream>
using namespace std;

int main ()
{
  int a, sum = 0;

    do
    {
        cout << "Enter number: ";
        cin >> a;
        cout << "Your number is: " << a << endl;

        sum += a;
        cout << sum << endl;

    }
    while (sum <= 100);

return 0;
}

