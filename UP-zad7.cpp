#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int r = 5;
    cout << "Vavedete koordinati na tochka po abscisnata os (x): ";
    cin >> x;
    cout << "Vavedete koordinati na tochka po ordinatnata os (y): ";
    cin >> y;
    cout << " \(" << x << "\," << y << "\) " << endl;

    if (x*x + y*y <= r*r)
    {
        cout << "Tochkata se namira v okrajnostta. " << endl;
    }
        else
        {
            cout << " Tochkata se namira izvan okrajnostta. " << endl;
        }

    return 0;
}


