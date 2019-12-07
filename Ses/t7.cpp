#include <iostream>

using namespace std;

void task7()
{
	int n;

	cout << "Enter number n" << endl;
	cin >> n;

	while (n < 0)
	{
		cout << "You entered a non-natural number" << endl;
		cin >> n;
	}

	if (n % 10 == 3)
	{
		cout << "There are  3" << endl;
	}
	else
	{
		cout << "missing 3" << endl;
	}
}