#if 0
//date : 2018.9.11
#include <iostream>
using namespace std;
int main()
{
	int n = 0, x;
	int max_profit = -2e9, min;
	cin >> n;
	cin >> min;
	n--;
	while (n--)
	{
		cin >> x;
		max_profit = x - min > max_profit ? x - min : max_profit;
		min = x < min ? x : min;
	}
	cout << max_profit << endl;
	return 0;
}
#endif
