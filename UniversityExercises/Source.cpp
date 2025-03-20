#include <iostream>
#include "EasyExercises.h"

using namespace std;

int main()
{
	int number;
	while (1)
	{
		cout << "Enter number of exercise, what you need(from 0 to 2): ";
		cin >> number;
		if (number == 0)
		{
			firstExercise();
		}
		else if (number == 1)
		{
			secondExercise();
		}
		else if (number == 2)
		{
			thirthExercise();
		}
	}
}