#if 0
#include<iostream>
using namespace std;
int main()
{
	int s;
	cin >> s;
	int array[10000];
	int min, max;
	long sum;
	cin >> array[0];
	sum = max = min = array[0];
	for(int i = 1;i < s;i++)
	{
		cin >> array[i];
		min = min < array[i] ? min : array[i];
		max = max > array[i] ? max : array[i];
		sum += array[i];
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}
#endif