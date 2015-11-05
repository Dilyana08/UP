# include <iostream>
using namespace std;

int main ()
{
    int a, n = 2;
    bool flag = false;

    cout << "Enter number from 5 to 20:" ;
    cin >> a;

    ((a>4) && (a<21)) ? (cout << "Number = " << a << endl) : (cout << "Invalid number!" << endl);


    switch (a)
    {
        case 6:
        case 8:
        case 10:
        case 12:
        case 14:
        case 16:
        case 18:
        case 20:
            cout << "Even number" << endl;
            break;


        case 5:
        case 7:
        case 9:
        case 11:
        case 13:
        case 15:
        case 17:
        case 19:
            cout << "Odd number" << endl;
            break;
     }

     do
		{
			if (a % n == 0) flag = true;
			n++;
		}
		while (n < a);
		if (flag == false) cout << "Prime number" << endl;
		else cout << "Not a prime number" << endl;


return 0;
}
