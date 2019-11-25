//Среди чисел 1, 4, 9, 16, 25, . . . найти первое число, большее заданного числа N.
#include <iostream>

using namespace std;

void task9()
{
	int n;
	int decision;
	int i = 1;

	cout << "Введите число" << endl;
	cin >> n;

	while (i * i <= n)
	{
		i++;
	}
	decision = i * i;
	cout << "Первое число больше указанных = " << decision << endl;
}