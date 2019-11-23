//Найти все трехзначные числа, которые делятся на n или содержат цифру n (n вводится с клавиатуры)
#include <iostream>

using namespace std;

void task4()
{
	int n;

	cout << "Введите n" << endl;
	cin >> n;

	while (n < 100 || n > 999)
	{
		cout << "Вы ввели не трехзначеное число" << endl;
		cin >> n;
	}

	for (int i = 100; i <= 999; i++)
	{
		if (i % n == 0)
		{
			cout << "Число " << i << " делится на " << n << endl;
		}
		else
		{
			cout << "Число " << i << " не делится на " << n << endl;
		}

		while (i > 0)
		{
			if (i % 10 == n)
			{
				n = n / 10;
			}

			if (n > 0)
			{
				cout << "Цифра " << n << " присутствует в числе " << i << endl;
			}
			else
			{
				cout << "Цифра " << n << " отсутствует в числе " << i << endl;
			}
		}
	}
}