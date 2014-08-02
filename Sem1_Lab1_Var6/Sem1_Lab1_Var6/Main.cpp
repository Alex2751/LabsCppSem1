#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double a = 1.5, b = 15.5, x = -2.9;

	cout << "a = " << a << ", b = " << b << ", x = " << x << "\n\n";

	double l = pow(cos(pow(x, 3)), 2);
	double m = pow(a, 2) + pow(b, 2);

	double y = l - x / pow(m, 0.5);

	cout << "y = " << y << '\n';

	double c = pow(x, 2) + b;
	double d = pow(c, 0.5);
	
	double e = sin(x + a);
	double f = pow(b, 2) * pow(e, 3);
	double g = f / x * y;

	double P = d - g;

	cout << "P = " << P << '\n';
	
	system("pause");
	return 0;
}