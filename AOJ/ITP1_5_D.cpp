#if 0
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for(int i = 1;i <= n;i++)
	{
		if(i % 3 == 0 || i % 10 == 3)
		{
			cout << " " << i;
		}
		else
		{
			int j = i;
			while(j != 0)
			{
				if((j /= 10) % 10 == 3)
				{
					cout << " " << i;
					break;
				}
			}
		}
	}
	cout << endl;
	return 0;
}
#endif


