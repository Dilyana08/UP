# include <iostream>
# include <cmath>
using namespace std;

int main ()
{
  double x, y;
  double const PI = 3.14159265;

  cout << "Enter the value of x:" ;
  cin >> x;
  y = (x * PI)/ 180.0;

  int a;
  cout << "Enter number:";
  cin >> a;
  
  ((a>0) && (a<5)) ? (cout << "a=" << a << endl) : (cout << "Wrong value of a" << endl);

  switch (a)
  { 
    case 1:
        cout << "y= " << x-5 << endl;
        break;
    case 2:
        cout << "y= " << sin(y) << endl;
        break;
    case 3:
        cout << "y= " << cos(y) << endl;
        break;
    case 4:
        cout << "y= " << exp(y) << endl;
        break;

  }

return 0;
}
