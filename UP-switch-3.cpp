# include <iostream>
using namespace std;

int main ()
{
  int a, b, h, r;
  double const PI = 3.14;

  cout << "Enter the value of figure`s side (a):" ;
  cin >> a;
  cout << "Enter the value of another side of the figure (b):" ;
  cin >> b;
  cout << "Enter the value of figure`s height (h):" ;
  cin >> h;
  cout << "Enter the value of figure`s radius (r):" ;
  cin >> r;

  int f;
  cout << "Figure f= ";
  cin >> f;

  ((f>0) && (f<6)) ? (cout << "f=" << f << endl) : (cout << "Wrong value of f" << endl);

  switch (f)
  {
    case 1:
        cout << "S=" << (a*h)/2 << endl;
        break;
    case 2:
        cout << "S=" << a*a << endl;
        break;
    case 3:
        cout << "S=" << PI*r*r << endl;
        break;
    case 4:
        cout << "S=" << a*b << endl;
        break;
    case 5:
        cout << "S=" << ((a+b)/2)*h << endl;
        break;
  }


return 0;
}
