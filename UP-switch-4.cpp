# include <iostream>
# include <cmath>
using namespace std;

int main ()
{
  double x;

  cout << "Enter the value of x:" ;
  cin >> x;

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
        cout << "y= " << sin(x) << endl;
        break;
    case 3:
        cout << "y= " << cos(x) << endl;
        break;
    case 4:
        cout << "y= " << exp(x) << endl;
        break;

  }

return 0;
}
