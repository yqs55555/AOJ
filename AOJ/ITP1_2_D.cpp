#if 0
#include<iostream>
using namespace std;
int main()
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	if ((x + r <= w) && (x - r >= 0))
		if ((y + r <= h) && (y - r) >= 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	else
		cout << "No" << endl;
	return 0;
}
#endif
