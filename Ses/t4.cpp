#include <iostream>

using namespace std;

void task4()
{
	int n;

	cout << "Enter n" << endl;
	cin >> n;

	while (n < 100 || n > 999)
	{
		cout << "this is not a three digit number" << endl;
		cin >> n;
	}

	for (int i = 100; i <= 999; i++)
	{
		if (i % n == 0)
		{
			cout << "number " << i << " divided by " << n << endl;
		}
		else
		{
			cout << "number " << i << " not divided by " << n << endl;
		}
	}
}