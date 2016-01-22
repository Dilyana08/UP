#include <iostream>
using namespace std;


int main()
{
   int n = 6, m = 5;
   int min = 100, max = 0;

   int array[6][5]= {{48, 72, 13, 14, 15},
                      {21, 22, 53, 24, 75},
                      {31, 57, 33, 34, 35},
                      {41, 95, 43, 44, 45},
                      {59, 52, 53, 54, 55},
                      {61, 69, 63, 64, 65}};

   for (int i = 0; i < n - 1; i++)
   {
       for (int j = 0; j < m - 1; j++)
       {
           if (array[i][j] > max)
           {
               max = array[i][j];
           }

           else
           {
               continue;
           }
       }
   }

   for (int i = 0; i < n - 1; i++)
   {
       for (int j = 0; j < m - 1; j++)
       {
           if (array[i][j] < min)
           {
               min = array[i][j];
           }

           else
            {
                continue;
            }
       }
   }


    cout << "The lowest value is: " << min << endl;
    cout << "The highest value is: " << max << endl;



    return 0;
}
