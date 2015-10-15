#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Vavedete shestcifreno chislo: ";
    cin >> number;

    int a = (number/1000);
    int b = (number%1000);

    if (a<b)
    {
        cout << a << " e po-malko ot " << b << endl;
    }
        if (a>b)
        {
            cout << a << " e po-golqmo ot " << b << endl;
        }
            if (a==b)
            {
                cout << a << " e ravno na " << b << endl;
            }


    return 0;
}


