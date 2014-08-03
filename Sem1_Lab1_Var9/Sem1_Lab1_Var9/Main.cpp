#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double a = 0.7, b = 0.05, x = 0.43;

	cout << "a = " << a << ", b = " << b << ", x = " << x << "\n\n";

	double y = pow(x, 2) * (x + 1) / b;
	double z = pow(sin(x - a), 2);

	double R = y - z;

	double l = pow(x * b / a, 0.5);
	double m = cos(pow(x + b, 3));
	double n = fabs(m);

	double S = l + n;
	
	cout << "R = " << R << ", S = " << S << "\n\n";

	system("pause");
	return 0;
}