#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c;

	cout << "Input a, b, c\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	double p = (a + b + c) / 2.0;

	double h = (2.0 / a) * pow((p * (p - a) * (p - b) * (p - c)), 0.5);

	cout << "h = " << h;

	cout << '\n';
	system("pause");
	return 0;
}