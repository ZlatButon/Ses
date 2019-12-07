//Вычислить: y=1!+2!+3!+...+n! (n>1)
#include <iostream>

using namespace std;

void task11()
{
	int i, n, j;
	double s = { 0 }, s1;
	
	cout << "Enter n" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		s1 = { 1 };
		for (int j = 0; j < i; j++)
			s1 = s1 * j;
		s = s + s1;
	}
	cout << "s = " << s << endl;
}