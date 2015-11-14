#include <iostream>
using namespace std;

int main()
{
    int start, end, step, sum = 0;

    cout << "Please enter the value of start:";
    cin >> start;
    cout << "Please enter the value of end:";
    cin >> end;
    cout << "Please enter the value of step:";
    cin >> step;

	int copystart = start;
	while (copystart <= end)
	{
		sum += copystart;
		copystart += step;
	}

	cout << "The sum of the numbers between " << start << " and " << end << " with a step of " << step << " is = " << sum << endl;

    return 0;
}
