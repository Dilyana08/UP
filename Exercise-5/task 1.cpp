#include <iostream>
using namespace std;

int Abs(int number)
{
    return number < 0 ? (-1)*number : number;
}

int Pow(double FirstNumber, int SecondNumber)
{
    int n = 1;

    for (int i = 0; i < SecondNumber; i++)
    {
        n *= FirstNumber;
    }

    return n;
}

double Min (double FirstNumber, double SecondNumber)
{
    return FirstNumber < SecondNumber ? FirstNumber : SecondNumber;
}

double Max (double FirstNumber, double SecondNumber)
{
    return FirstNumber < SecondNumber ? SecondNumber : FirstNumber;
}

double minOf3 (double FirstNumber, double SecondNumber, double ThirdNumber)
{
    return Min(Min(FirstNumber, SecondNumber), Min(FirstNumber, ThirdNumber));
}

double maxOf3 (double FirstNumber, double SecondNumber, double ThirdNumber)
{
    return Max(Max(FirstNumber, SecondNumber), Max(FirstNumber, ThirdNumber));
}

bool isAlpha (char number)
{
    return ((number >= 'A' && number <= 'Z') || (number >= 'a' && number <= 'z')) ? true : false;
}

bool isDigit (char number)
{
    return (number >= '0' && number <= '9') ? true : false;
}



int main()
{

    cout << Abs(-5) << endl;
    cout << Pow(-2, 4) << endl;
    cout << Min(-2, 2) << endl;
    cout << Max(-2, 2) << endl;
    cout << minOf3(4, 2, -6) << endl;
    cout << maxOf3(4, 2, -6) << endl;

    char symbol;
    cin >> symbol;

    cout << isAlpha(symbol) << endl;
    cout << isDigit (symbol) << endl;



    return 0;
}
