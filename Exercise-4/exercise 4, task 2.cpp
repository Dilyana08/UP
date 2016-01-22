#include <iostream>
using namespace std;
int const MAX_SIZE = 100;

int main()
{
    size_t n;
    while (n > MAX_SIZE)
    {
        cout << "Please enter the size of the array:";
        cin >> n;
    }


    unsigned int array[n][n];

   for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << "array [" << i << "][" << j << "] = " ;
            cin >> array[i][j];
        }
    }

    cout << endl;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << array[i][j] << ", " ;
            }

            else
                {
                    continue;
                }

        }
    }

    cout << endl;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == n - 1 - j)
            {
                cout << array[i][j] << ", " ;
            }

            else
                {
                    continue;
                }

        }
    }





    return 0;
}
