//Дано натуральное число. Определить, есть ли в нем цифра 3
#include <iostream>

using namespace std;

void task7()
{
	int n;

	cout << "Введите число n" << endl;
	cin >> n;

	while (n < 0)
	{
		cout << "Вы ввели не натуральное число" << endl;
		cin >> n;
	}

	if (n % 10 == 3)
	{
		cout << "В числе есть цифра 3" << endl;
	}
	else
	{
		cout << "В числе нет цифры 3" << endl;
	}
}