# include <iostream>
using namespace std;

int main ()
{
    int a;
    cout << "Enter the number of the week`s day:" ;
    cin >> a;

    ((a>0) && (a<8)) ? (cout << "Day = " << a << endl) : (cout << "Wrong number of the day!" << endl);

    switch (a)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Work day" << endl;
             break;
        case 6:
        case 7:
            cout << "Weekend" << endl;
             break;

     }

return 0;
}
