#include <iostream>

using namespace std;

void task1(), task2(), task3(), task4();
void task5(), task6(), task7(), task8();
void task9(), task10(), task11(), task12();
void task13(), task14(), task15(), task16();
void task17(), task18(), task19(), task20();
void task21(), task22(), task23(), task24();
void task25(), task26(), test123();

int main()
{
	setlocale(LC_ALL, "rus");

	int assignment;

	cout << "Введите номер задания" << endl;
	cin >> assignment;

	while (assignment < 1 || assignment > 33)
	{
		cout << "Вы ввели неверный номер задания" << endl;
		cin >> assignment;
	}

	switch (assignment)
	{
	case 1:
		task1();
		break;

	case 2:
		task2();
		break;

	case 3:
		task3();
		break;

	case 4:
		task4();
		break;

	case 5:
		task5();
		break;

	case 6:
		task6();
		break;

	case 7:
		task7();
		break;

	case 8:
		task8();
		break;

	case 9:
		task9();
		break;

	case 10:
		task10();
		break;

	case 11:
		task11();
		break;

	case 12:
		task12();
		break;

	case 13:
		task13();
		break;

	case 14:
		task14();
		break;

	case 15:
		task15();
		break;

	case 16:
		task16();
		break;

	case 17:
		task17();
		break;

	case 18:
		task18();
		break;

	case 19:
		task19();
		break;

	case 20:
		task20();
		break;

	case 21:
		task21();
		break;

	case 22:
		task22();
		break;

	case 23:
		task23();
		break;

	case 24:
		task24();
		break;

	case 25:
		task25();
		break;

	case 26:
		task26();
		break;
	case 33:
		test123();
		break;
	}

	return 0;
}