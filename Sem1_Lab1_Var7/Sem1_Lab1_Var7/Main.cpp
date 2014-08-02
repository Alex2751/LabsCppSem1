#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double a = 16.5, b = 3.4, x = 0.61, e = 2.7183;

	cout << "a = " << a << ", b = " << b << ", x = " << x << "\n\n";

	double y = b * pow(x, 2) - a;
	double z = pow(e, a * x);

	double c = y / z;

	cout << "c = " << c << "\n\n";

	double l = pow(tan(pow(x + b, 2)), 2);
	double m = pow(x + b, 0.5);
	double n = pow(x, 3) + l + a;

	double S = n / m;

	cout << "S = " << S << "\n\n";
	
	system("pause");
	return 0;
}