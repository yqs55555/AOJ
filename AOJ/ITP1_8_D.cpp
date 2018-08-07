#if 0
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char p[100], s[100];
	cin >> p >> s;
	int pLength = strlen(p);
	int sLength = strlen(s);
	bool HasFind = false;
	for(int i = 0;i < pLength;i++)
	{
		if(p[i] == s[0])
		{
			HasFind = true;
			for(int j = 1;j < sLength;j++)
			{
				if (p[(i + j) % pLength] != s[j])
					HasFind = false;
			}
			if(HasFind)
				break;
		}
	}

	if (HasFind)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
#endif
