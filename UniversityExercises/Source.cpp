#include <iostream>
#include "EasyExercises.h"

using namespace std;

int main()
{
	int number;
	while (1)
	{
		cout << "Enter number of exercise, what you need(from 0 to 1): ";
		cin >> number;
		if (number == 0)
		{
			firstExercise();
		}
		else if (number == 1)
		{
			secondExercise();
		}
	}
}