#include <iostream>
using namespace std;

int main ()
{
    char a;
    int x, y;

    cout << "Enter symbol:" ;
    cin >> a;
    cout << "Enter two numbers:" ;
    cin >> x >> y;

    switch (a)
    {
        case '+':
            cout << "Result: " << x+y << endl;
             break;
        case '-':
            cout << "Result: " << x-y << endl;
             break;
        case '*':
            cout << "Result: " << x*y << endl;
             break;
        case '/':
            cout << "Result: " << x/y << endl;
             break;
        case '%':
            cout << "Result: " << x%y << endl;
             break;
        default:
            cout << "Error in the operation!" << endl;
             break;
     }


    return 0;
}
