#if 0
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int i = 0;
	for(int j = a;j <= b;j++)
	{
		if (c % j == 0)
			i++;
	}

	cout << i << endl;
	return 0;
}
#endif
