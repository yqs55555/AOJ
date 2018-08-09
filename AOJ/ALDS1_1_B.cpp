#if 0
#include<iostream>
using namespace std;

int gcd(int x, int y)
{
	if(x == 0 || y == 0)
	{
		return x > y ? x : y;
	}
	if(x >= y)
	{
		gcd(y, x % y);
	}
	else
	{
		gcd(x, y % x);
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	int c = gcd(a, b);
	cout << c << endl;
	return 0;
}
#endif
