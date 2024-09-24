#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	cout << fixed;
	cout << "--------------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |" << setw(15) << "y" << " |" << endl;
	cout << "--------------------------------" << endl;
	
	x = xp;
	while (x <= xk);
	if (x >= -5 && x <= 0)
		y = (3.0 / 5.0) * x + 3;
	else if (x > 0 && x <= R)
		y = sqrt(R * R - x * x);
	else if (x > R && x <= 8)
		y = (R - 3.0) / (8.0 - R) * (x - R) + R;
	else if (x < -5)
		y = -3;
	else
		y = R;

{
	cout << "|" << setw(10) << setprecision(2) << x
		<< " |" << setw(15) << setprecision(3) << y
		<< " |" << endl;
	x += dx;
}

cout << "--------------------------------" << endl;
return 0;
}