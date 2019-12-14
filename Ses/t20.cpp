#include <iostream>

using namespace std;

void task20 () {
	int arr[6] = { 1,2,3,4,5,6 };

	cout << "Input:" << endl;
	for (int i = 0; i < 6; i++)
		cout << " " << arr[i];

	for (int i = 1; i < 6; i += 2) {
		int t = arr[i - 1];
		arr[i - 1] = arr[i];
		arr[i] = t;
	}

	cout << "\n\nOutput:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << " " << arr[i];
		cout << endl;
	}
}