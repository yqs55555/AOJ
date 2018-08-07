#if 0
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
	int n, x[1000], y[1000];
	int x_y[1000];
	int p1 = 0;
	double p2 = 0, p3 = 0, pMax = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> y[i];
		x_y[i] = abs(x[i] - y[i]);
		p1 += x_y[i];
		p2 += x_y[i] * x_y[i];
		p3 += x_y[i] * x_y[i] * x_y[i];
		if (i == 0)
			pMax = x_y[i];
		else
			pMax = pMax > x_y[i] ? pMax : x_y[i];
	}
	p2 = sqrt(p2);
	p3 = pow(p3, 1.0 / 3.0);
	cout << fixed << setprecision(6) << p1 << endl << p2 << endl << p3 << endl << pMax << endl;
	return 0;
}
#endif
