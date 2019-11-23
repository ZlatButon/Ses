//Дано натуральное число N. Найти сумму его четных делителей.
#include <iostream>

using namespace std;

void task1()
{
	int n;
	int	summ{ 0 };

	cout << "Введите n: ";
	cin >> n;

	while (n < 0)
	{
		cout << "Вы ввели не натуральное число" << endl;
		cin >> n;
	}

	for (int i = 2; i < n + 2; i += 2)
	{
		if (n % i == 0)
			summ += i;
	}

	cout << "Сумма четных делителей числа " << n << " равна " << summ << endl;
}