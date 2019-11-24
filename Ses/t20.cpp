//Дан одномерный массив из четного числа элементов. Поменять местами его первый элемент со вторым, третий с четвертым и т.д.
#include <iostream>

using namespace std;

void task20(int &a, int &b)
{
	int arr[6] = { 1,2,3,4,5,6 };

	cout << "Input:" << endl;
	for (int i = 0; i < 6; i++)
		cout << " " << arr[i];

	for (int i = 1; i < 6; i += 2)
	{
		int t = arr[i - 1];
		arr[i - 1] = arr[i];
		arr[i] = t;
	}

	cout << "Output:" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << " " << arr[i];
		cout << endl;
	}
}