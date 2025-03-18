#include <iostream>
#include <math.h>

using namespace std;

void first_exercise()
{
	int a;
	float alpha, d = 1.8, o = 0.01, b = 0.6, y = 0.03;
	alpha = (d * sin(o)) / (pow(tan(b - y), 2));

	cout << "Answer: " << alpha;
}