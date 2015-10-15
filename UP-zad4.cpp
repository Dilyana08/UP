#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Vavedete tricifreno chislo: ";
    cin >> number;

    int a = (number/100);
    int b = (number/10%10);
    int c = (number%10);

    if ((a<b) && (b<c) && (a<c))
    {
        cout << "Cifrite na tricifrenoto chislo sa podredeni vav vazhodqsht red" << endl;
    }
    else
    {
        cout << "Cifrite na tricifrenoto chislo ne sa podredeni vav vazhodqsht red" << endl;
    }

    return 0;
}
