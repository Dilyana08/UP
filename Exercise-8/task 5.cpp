#include <iostream>
using namespace std;

void Pyramid (int n, int row)
{
    for (int i = n; i > n- row; i--)
    {
        cout << i << " ";
    }

    cout << endl;

    if (n == row)
        {
            return;
        }

    else
        {
          return Pyramid(n, row + 1);
        }
    }



int main()
{
    Pyramid(6, 1);

    return 0;
}
