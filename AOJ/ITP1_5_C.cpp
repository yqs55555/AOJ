#if 0
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while(true)
	{
		cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		for(int i = 0;i < a;i++)
		{
			for(int j = 0;j < b;j++)
			{
				if((i & 1) == 0)
				{
					if ((j & 1) == 0)
						cout << "#";
					else
						cout << ".";
				}
				else
				{
					if ((j & 1) == 0)
						cout << ".";
					else
						cout << "#";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
#endif
