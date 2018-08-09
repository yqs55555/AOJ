#if 0
#include <iostream>
#include <math.h>
using namespace std;
bool is_prime(int x)
{
	if ((x & 1) == 0)
		return x == 2;
	int num1 = (int)sqrt(x);
	int num2 = 3;
	while (num2 <= num1)
	{
		if (x % num2 == 0)
			return false;
		num2 += 2;
	}
	return true;
}
int main()
{
	int n, num = 0;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		if(is_prime(x))
		{
			num++;
		}
	}
	cout << num << endl;
	return 0;
}
#endif
