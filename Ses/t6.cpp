#include <iostream>

using namespace std;

void task6() {
	double a, value;
	double n = 0;

	cout << "Enter number a" << endl;
	cin >> a;

	for (int i = 1; i < 4; i++) {
		value = i + 1 / n;

		if (n < a)
			cout << value;
}