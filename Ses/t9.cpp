//����� ����� 1, 4, 9, 16, 25, . . . ����� ������ �����, ������� ��������� ����� N.
#include <iostream>

using namespace std;

void task9()
{
	int n;
	int decision;
	int i = 1;

	cout << "������� �����" << endl;
	cin >> n;

	while (i * i <= n)
	{
		i++;
	}
	decision = i * i;
	cout << "������ ����� ������ ��������� = " << decision << endl;
}