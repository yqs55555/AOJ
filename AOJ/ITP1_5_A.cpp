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
				cout << "#";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
#endif
