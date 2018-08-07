#if 0
#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	long double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long double res = sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << fixed << setprecision(8) << res << endl;
	return 0;
}
#endif
