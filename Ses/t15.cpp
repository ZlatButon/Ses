//���� ������� ���� �������������. ����� ����� �� �������� (������������ ��������� ���������� ������� ������������).
#include <iostream>
#include <math.h>

using namespace std;

void task15()
{
	int a, b, c;

	cout << "������� ������ ������� ������������" << endl;
	cin >> a;

	cout << "������� ������ ������� ������������" << endl;
	cin >> b;

	cout << "������� ������ ������� ������������" << endl;
	cin >> c;

	double p = (a + b + c) / 2;

	double s = pow(p * (p - a) * (p - b) * (p - c), 0.5);

	cout << "������� ������������ ����� " << s << endl;
}