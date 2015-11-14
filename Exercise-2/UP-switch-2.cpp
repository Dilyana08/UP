# include <iostream>
using namespace std;

int main ()
{
    int a;

    cout << "Enter number:" ;
    cin >> a;

    a%2==0 ? (cout << "Divides by 2") << endl : (cout << "Does not divide by 2") << endl;
    a%3==0 ? (cout << "Divides by 3") << endl : (cout << "Does not divide by 3") << endl;
    a%4==0 ? (cout << "Divides by 4") << endl : (cout << "Does not divide by 4") << endl;
    a%5==0 ? (cout << "Divides by 5") << endl : (cout << "Does not divide by 5") << endl;
    a%6==0 ? (cout << "Divides by 6") << endl : (cout << "Does not divide by 6") << endl;
    a%7==0 ? (cout << "Divides by 7") << endl : (cout << "Does not divide by 7") << endl;
    a%8==0 ? (cout << "Divides by 8") << endl : (cout << "Does not divide by 8") << endl;
    a%9==0 ? (cout << "Divides by 9") << endl : (cout << "Does not divide by 9") << endl;
    a%10==0 ? (cout << "Divides by 10") << endl : (cout << "Does not divide by 10") << endl;

    return 0;
}
