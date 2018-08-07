#if 0
#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double a, b, angleC;
	cin >> a >> b >> angleC;
	angleC = angleC * 3.1415926 / 180;
	double area = a * b * sin(angleC) * 0.5;
	double c = sqrt(a * a + b * b - 2 * a * b * cos(angleC));
	cout << fixed << setprecision(8) << area << " " << a + b + c << " " << b * sin(angleC);

	return 0;
}
#endif
