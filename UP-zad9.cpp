#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cout << "Vavedete koordinati na tochka po abscisnata os (x): ";
    cin >> x;
    cout << "Vavedete koordinati na tochka po ordinatnata os (y): ";
    cin >> y;
    cout << " \(" << x << "\," << y << "\) " << endl;

    if ((x * x + y * y <= 2 * 2) || (x * x + ((y - 3) * (y - 3)) <= 1 * 1))
       {
        cout << " Tochkata leji v zashtrihovanata oblast ot figurata. " << endl;
       }
    else
       {
        cout << " Tochkata ne leji v zashtrihovanata oblast ot figurata. " << endl;
       }

    return 0;
}
