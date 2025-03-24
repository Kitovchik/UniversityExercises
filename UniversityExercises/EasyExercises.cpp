#include <iostream>
#include <math.h>
#include <locale>;
#include "windows.h";


using namespace std;


void firstExercise()
{
	float alpha, d = 1.8, o = 0.01, b = 0.6, y = 0.03;
	alpha = (d * sin(o)) / (pow(tan(b - y), 2));

	cout << "Answer: " << alpha << endl;
}


void secondExercise()
{
	float y, x, floatNumber = 3.9;
	cout << "Enter number from 0 to 10: ";
	cin >> x;
	cout << "x = " << x << endl;
	if (x < 0 || x > 10)
	{
		cout << "Please, enter number from 0 to 10" << endl;
	}
	if (x <= 5)
	{
		y = x - 1;
		cout << "Answer: y = " << y << endl;
	}
	if (5 < x && x <= 10)
	{
		y = 3 * pow(x, 2) + 4;
		cout << "Answer: y = " << y << endl;
	}
	else if (x == floatNumber)
	{
		y = 7.1 * x - 5.6;
		cout << "Answer: y = " << y << endl;
	}
}

void thirthExercise()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number;
	cout << "Enter number from 1 to 5" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "Погано" << endl;
		break;
	case 2:
		cout << "Незадовільно" << endl;
		break;
	case 3:
		cout << "Задовільно" << endl;
		break;
	case 4:
		cout << "Добре" << endl;
		break;
	case 5:
		cout << "Відмінно" << endl;
		break;
	}
}

