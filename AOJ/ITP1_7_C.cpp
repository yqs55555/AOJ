#if 0
#include<iostream>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;
	int table[101][101] = {0};
	int sum = 0;
	for(int i = 0;i < r;i++)
	{
		for(int j = 0;j < c;j++)
		{
			cin >> table[i][j];
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
			sum += table[i][j];
		}
	}
	table[r][c] = sum;
	for(int i = 0;i <= r;i++ )
	{
		for(int j = 0;j < c;j++)
		{
			cout << table[i][j] << " ";
		}
		cout << table[i][c] << endl;
	}
	return 0;
}
#endif
