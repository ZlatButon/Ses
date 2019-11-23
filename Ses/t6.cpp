//Дано вещественное число a. Напечатать все значения n, при которых: 1+1/2+1/3+...+1/n<a
#include <iostream>

using namespace std;

void task6()
{
	int a, value;
	int n = 0;

	cout << "Введите число a" << endl;
	cin >> a;

	for (int i = 1; i < 4; i++)
	{
		value = i + 1 / n;

		if (n < a)
		{
			cout << value;
		}
	}
}