#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double x = 1.45, y = 1.22, z = 3.5, pi = 3.1416;
	
	cout << "x = " << x << ", y = " << y << ", z = " << z << "\n\n";

	double b = 1.0 + (pow(z, 2)) / (3.0 + pow(z, 2) / 5);

	cout << "b = " << b << '\n';

	double c = 2.0 * cos(x - pi / 6.0) * b;
	double d = 0.5 + pow(sin(y), 2);
	double a = c / d;

	cout << "a = " << a << '\n';

	cout << '\n';
	system("pause");
	return 0;
}
