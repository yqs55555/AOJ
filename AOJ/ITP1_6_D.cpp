#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][100], b[100];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < m;i++)
	{
		cin >> b[i];
	}
	int sum;
	for(int i = 0;i < n;i++)
	{
		sum = 0;
		for(int j = 0;j < m;j++)
		{
			sum += a[i][j] * b[j];
		}
		cout << sum << endl;
	}

	return 0;
}
#endif
