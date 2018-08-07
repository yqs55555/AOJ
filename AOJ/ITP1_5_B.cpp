#if 0
#include <iostream>
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
			if(i == 0 || (i == (a - 1)))
			{
				for (int j = 0; j < b; j++)
					cout << "#";
			}else
			{
				cout << "#";
				for(int j = 1;j < b - 1;j++)
					cout << ".";
				if (b > 1)
					cout << "#";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
#endif
