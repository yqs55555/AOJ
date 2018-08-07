#if 0
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	int n;
	int score[1000];
	while(true)
	{
		double average = 0;
		cin >> n;
		if(n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			cin >> score[i];
			average += score[i];
		}
		average /= n;
		double a2 = 0;
		for(int i = 0;i < n;i++)
		{
			a2 += (average - score[i]) * (average - score[i]);
		}
		a2 /= n;
		cout << fixed << setprecision(8) << sqrt(a2) << endl;
	}
	return 0;
}
#endif
