//-
#include <iostream>

using namespace std;
void task3() {
	int ArrayA[39] = { 0 };
	int ArrayB[39] = { 0 };
	int ArrayC[39] = { 0 };

	cout << "Array A" << endl;
	for (int i = 12; i < 39; i)	{
		ArrayA[i] += 10;
		cout << ArrayA[i] << endl;
	}

	cout << "Array B" << endl;
	for (int i = -2; i < 39; i)
	{
		ArrayB[i] -= 10;
		cout << ArrayB[i] << endl;
	}
}