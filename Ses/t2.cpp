//Дано натуральное число.Определить, какая цифра встречается чаще : 0 или 9.
#include <iostream>

using namespace std;

void task2()
{
	int n;
	int nine = 0;
	int zero = 0;

	cout << "Введите натуральное число" << endl;
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
		cout << "9 больше";
	else if (nine < 0)
		cout << "0 больше";
	else
		cout << "одинаково";
}