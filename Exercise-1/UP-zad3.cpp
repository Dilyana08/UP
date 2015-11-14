#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << " a= ";
    cin >> a;
    cout << " b= ";
    cin >> b;
    cout << " c= ";
    cin >> c;

    cout << a << "x*x + " << b << "x + " << c << endl;

    if (b*b - 4*a*c >= 0)
    {
        cout << " Kvadratnoto uravnenie ima 2 korena" << endl;
    }
    if (b*b - 4*a*c == 0)
    {
        cout << " Kvadratnoto uravnenie ima 1 dvoen koren" << endl;
    }
    if (b*b - 4*a*c <= 0)
    {
        cout << " Kvadratnoto uravnenie nqma realni koreni" << endl;
    }

return 0;
}
