//���� ����������� �����. ����������, ���� �� � ��� ����� 3
#include <iostream>

using namespace std;

void task7()
{
	int n;

	cout << "������� ����� n" << endl;
	cin >> n;

	while (n < 0)
	{
		cout << "�� ����� �� ����������� �����" << endl;
		cin >> n;
	}

	if (n % 10 == 3)
	{
		cout << "� ����� ���� ����� 3" << endl;
	}
	else
	{
		cout << "� ����� ��� ����� 3" << endl;
	}
}