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

    if (x>0)
    {
        if (y>0)
            {
            cout << "Tochkata se namira v 1 kvadrant. " << endl;
            }
        if (y<0)
            {
            cout << "Tochkata se namira v 4 kvadrant. " << endl;
            }
        if (y==0)
            {
            cout << " Tochkata se namira na polojitelnata chast na abscisata (x). " << endl;
            }
    }

    if (x<0)
    {
        if (y>0)
            {
            cout << "Tochkata se namira vav 2 kvadrant. " << endl;
            }
        if (y<0)
            {
            cout << "Tochkata se namira v 3 kvadrant. " << endl;
            }
        if (y==0)
            {
            cout << " Tochkata se namira na otricatelnata chast na abscisata (x). " << endl;
            }
    }

    if (x==0)
    {
        if (y>0)
            {
            cout << "Tochkata se namira v polojitelnata chast na ordinatata (y). " << endl;
            }
        if (y<0)
            {
            cout << "Tochkata se namira v otricatelnata chast na ordinatata (y). " << endl;
            }
        if (y==0)
            {
            cout << " Tochkata se namira v centara na koordinatnata os (0). " << endl;
            }
    }


    return 0;
}


