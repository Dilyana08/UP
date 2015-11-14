#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    bool check = false;

    cout << "Please enter the values of x and y:";
    cin >> x >> y;

    if ((x >= -1) && (x <= 2))
    {
        if (x <= 2)
        {
            if ((y >= -1) && (y <= 0.5)) check = true;
            else check = false;
        }

        if ((x <= 1) && (y <= 1)) check = true;

        if ((x <= 0) && (x >= -1))
        {
            if ((y <= 1) && (y >= -1)) check = true;
            if ( pow((x+1),2) + y*y >= 1) check = true;
        else check = false;
        }
    }
    else check = false;

    cout << check;

 return 0;
}
