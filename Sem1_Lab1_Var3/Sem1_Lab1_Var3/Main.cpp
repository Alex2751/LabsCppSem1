#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double x = 1.2, y = -0.8;

	int rezultat = 1, resultat = 1, rez = 1;
	
	const int a = 2;
	for (int i = 1; i < 3; ++i)
	{
		rezultat = i * rezultat;
	}

	const int b = 3;
	for (int i = 1; i < 4; ++i)
	{
		resultat = i * resultat;
	}

	const int c = 4;
	for (int i = 1; i < 5; ++i)
	{
		rez = i * rez;
	}

	double s = 1 + x + pow(x, 2) / rezultat + pow(x, 3) / resultat + pow(x, 4) / rez;

	cout << "s = " << s << '\n';

	double z = sin(pow(x, 3)) + pow(sin(y), 2);
	
	cout << "z = " << z << '\n';

	system("PAUSE");
	return 0;
}