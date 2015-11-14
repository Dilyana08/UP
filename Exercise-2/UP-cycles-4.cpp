# include <iostream>
using namespace std;

int main ()
{
  char a;

     do
      {
       cout << "Enter symbol: ";
       cin >> a;
       cout << "Your symbol is: " << a << endl;
      }
     while (a != '!');


return 0;
}
