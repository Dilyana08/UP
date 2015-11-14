#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << " a= ";
    cin >> a ;
    if ( (a%2==0) && (a%3==0) && (a%5!=0) )
    {
        cout << a << " se deli ednovremenno na 2 i na 3 i ne se deli na 5 " << endl;
    }
    else
        {
        cout << a << " ne se deli ednovremenno na 2 i na 3 i ne se deli na 5 " << endl;
        }
    return 0;
}
