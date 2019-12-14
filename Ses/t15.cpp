#include <iostream>

#include <math.h>

using namespace std;

void task15() {
	int a, b, c;

	cout << "Enter the first side of the triangle" << endl;
	cin >> a;

	cout << "Enter the second side of the triangle" << endl;
	cin >> b;

	cout << "Enter the third side of the triangle" << endl;
	cin >> c;

	double p = (a + b + c) / 2;

	double s = pow(p * (p - a) * (p - b) * (p - c), 0.5);

	cout << "The area of the triangle is " << s << endl;
}