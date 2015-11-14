#include <iostream>
using namespace std;

int main()
{
    int n, row = 1, number = 1;

    cout << "Please enter the value of n: ";
    cin >> n;

        if ((n > 0) && (n <= 200))
            {
                for (int i = 1 ; i <= n ; i++)
                    {
                       do
                        {
                           if (i <= n)
                            {
                               cout << i << " ";
                               i++;
                            }

                           else cout << " *";
                                number++;
                        }
                       while (number <= row);

                        i--;
                        row++;
                        cout << endl;
                        number = 1;
                    }
            }
        else cout << "Wrong value of n!" << endl;

    return 0;
}
