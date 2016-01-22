#include <iostream>
using namespace std;


void swap(int* a, int* b)
{

   int change = *a;
   *a = *b;
   *b = change;

    return;
}


int main()
{
    int a;
    int b;

    cout << "Please enter the value of a: ";
    cin >> a;
    cout << "Please enter the value of b: ";
    cin >> b;

    swap(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}

