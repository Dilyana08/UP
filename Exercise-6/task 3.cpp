#include <iostream>
using namespace std;

void swap(int* first, int* second)
{
    int temp = *first;
        *first = *second;
        *second = temp;

        return;
}

void sortArray(int* arr, int number)
{

    for(int i = 0; i < number - 1; i++)
    {
        for(int j = 0; j < number - 1 - i; j++)
        {
            swap(*(arr + j), *(arr + j + 1));
        }
    }

    return;
}


int main()
{

    int arr[] = {2, 4 , 6 , 9 , 8};
    int number = 5;


    int* pointer = arr;


   sortArray(pointer, number);

    return 0;
}
