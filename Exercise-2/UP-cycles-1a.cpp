# include <iostream>
using namespace std;

int main ()
{
    int a;

       cout << "Enter the number of a month:" ;
       cin >> a;

       ((a>0) && (a<13)) ? (cout << "Month = " << a << endl) : (cout << "Wrong number of the month!" << endl);


    switch (a)
    {
        case 1:
        case 2:
        case 3:
            cout << "Winter" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "Spring" << endl;
            break;
        case 7:
        case 8:
        case 9:
            cout << "Summer" << endl;
            break;
        case 10:
        case 11:
        case 12:
            cout << "Fall" << endl;
            break;
     }


 return 0;
}
