#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double  a = - 0.5, b = 1.7, t = 0.44, e = 2.7183;

	cout << "a = " << a << ", b = " << b << ", t = " << t << "\n\n";
	
	double l = pow(e, - b * t);
	double m = sin(a * t + b);
	double n = pow(fabs(b * t + a), 0.5);
	
	double y = l * m - n;
	
	cout << "y = " << y << "\n\n";

	double k = a * pow(t, 2) * cos(2 * t);
	
	double s = b * sin(k) - 1;

	cout << "s = " << s << '\n';

	cout << '\n';
	system("pause");
	return 0;
}