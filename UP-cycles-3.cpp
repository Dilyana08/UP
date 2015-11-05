# include <iostream>
using namespace std;

int main ()
{
    char a;


    do
    {
        cout << "Enter a symbol:";
        cin >> a;

        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
          {
            if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
                cout << "The symbol you entered is a letter of the Latin alphabet!" << endl;


            if (a >= '0' && a <= '9')
                cout << "The symbol you entered is a digit!" << endl;
          }

        else
         cout << "You have entered another type of symbol." << endl;
    }
    while (cin);


    return 0;
}
