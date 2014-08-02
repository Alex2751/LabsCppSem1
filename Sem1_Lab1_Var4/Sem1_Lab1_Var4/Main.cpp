#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double pi = 3.1416;
	
	double R, r, h;
	
	cout << "Input R, r, h\n";
	
	cout << "R: ";
	cin >> R;
	cout << "r: ";
	cin >> r;
	cout << "h: ";
	cin >> h;
	
	double a = pow(h, 2) + (R - r);
	double l = pow(a, 0.5);
	
	double S = pi * (R + r) * l + pi * pow(R, 2) + pi * pow(r, 2);
	
	cout << "S = " << S << "\n";
	
	double V = (pi / 3) * (pow(R, 2) + pow(r, 2) + R * r) * h;
	
	cout << "V = " << V << "\n";
	
	cout << "\n";
	system("pause");
	return 0;
}