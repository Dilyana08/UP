# include <iostream>
using namespace std;

int main ()
{
  int a, sum = 0;

    cout << "Enter number: ";
    cin >> a ;

    if ((a >= 0) && (a <= 999))
      {
          for (int i=0; i <= a-1; ++i)
          {
            if (i%2==0)
            cout << i << endl;
          }
      }

    else cout << "Error!";


  return 0;
}
