//����� ��� ����������� �����, ������� ������� �� n ��� �������� ����� n (n �������� � ����������)
#include <iostream>

using namespace std;

void task4()
{
	int n;

	cout << "������� n" << endl;
	cin >> n;

	while (n < 100 || n > 999)
	{
		cout << "�� ����� �� ������������ �����" << endl;
		cin >> n;
	}

	for (int i = 100; i <= 999; i++)
	{
		if (i % n == 0)
		{
			cout << "����� " << i << " ������� �� " << n << endl;
		}
		else
		{
			cout << "����� " << i << " �� ������� �� " << n << endl;
		}

		while (i > 0)
		{
			if (i % 10 == n)
			{
				n = n / 10;
			}

			if (n > 0)
			{
				cout << "����� " << n << " ������������ � ����� " << i << endl;
			}
			else
			{
				cout << "����� " << n << " ����������� � ����� " << i << endl;
			}
		}
	}
}