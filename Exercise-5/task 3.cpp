#include <iostream>
using namespace std;

int f(int n, int m)
{
    int arr[n][m];

    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j <= m; j++)
        {
            if (i == j)
            {
                arr[i][j] = i + 1;
            }

            if (i < j)
            {
                arr[i][j] = (j + 1) - (i + 1);
            }

            if (i > j)
            {
                arr[i][j] = (j + 1) * (i + 1);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return arr[n][m];
}


int main()
{
    f(4, 4);

    return 0;
}
