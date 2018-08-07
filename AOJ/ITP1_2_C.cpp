#if 0
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int t;
	if(a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if(a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if(b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	cout << a << " " << b << " " << c << endl;
	cin >> a;

	return 0;
}
#endif
