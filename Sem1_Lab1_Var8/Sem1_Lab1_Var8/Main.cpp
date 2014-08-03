#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double x = 1.82, y = 18.5, z = - 3.4;

	cout << "x = " << x << ", y = " << y << ", z = " << z << "\n\n";

	double a = pow(x, (y / x));
	double b = pow((y / x), 0.33333);
	
	double P = fabs(a - b);

	double c = x - y;
	double d = y - z * (y - x);
	double e = 1 + pow((y - x), 2);

	double Q = c * (d / e);

	cout << "P = " << P << ", Q = " << Q << "\n\n";
	
	system("pause");
	return 0;
}