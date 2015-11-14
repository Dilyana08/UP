#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;

    if (a%b==0)
    {
        cout << a <<  " e delitel na " << b << endl;
    }

    else
    {
      cout << a << " ne e delitel na " << b << endl;
    }

return 0;
}
