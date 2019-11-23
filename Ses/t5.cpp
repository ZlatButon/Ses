//Дано натуральное число n . Вычислить: P = 2 × 4 × 6 × . . . × (2n)
#include <iostream>

using namespace std;

void task5()
{
	int n;
	int p = 0;

	cout << "Введите число n" << endl;
	cin >> n;
	
	while (n < 1)
	{
		cout << "Вы ввели не натуральное число" << endl;
		cin >> n;
	}

	for (int i = 2; i < 2 * n; i + 2)
	{
		p = i * 2 * n;

		cout << p;

		break;
	}
}