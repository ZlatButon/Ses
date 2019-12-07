#include <iostream>

using namespace std;

void task2()
{
	int n;
	int nine = 0;
	int zero = 0;

	cout << "enter a natural number" << endl;
	cin >> n;

	while (n > 0)
	{
		if (n % 10 == 9)
			nine++;
		else if (n % 10 == 0)
			nine--;
		n /= 10;
	}

	if (nine > 0)
		cout << "more 9";
	else if (nine < 0)
		cout << "more 0";
	else
		cout << "equally";
}