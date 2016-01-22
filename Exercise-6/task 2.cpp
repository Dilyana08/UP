#include <iostream>
using namespace std;


void swap(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = temp;

    return;
}


void replacing(int* arr, int number)
{

    for(int i = 0; i < number/2; i++)
        {
           swap(*(arr + i), *(number + arr - i - 1)) ;
        }

    return;
}


int main()
{
    int number;
    cout << "Please enter the value of number = " ;
    cin >> number;

    int arr[] = {7, 10, 12, 3, 9};

    int* pointer = arr;

    replacing(pointer, number);
    for(int i = 0; i < number; i++)
    {
        cout << arr[i] << " " ;
    }



    return 0;
}

