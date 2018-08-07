#if 0
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int S[13], H[13], C[13], D[13];
	memset(S, 0, sizeof(int) * 13);
	memset(H, 0, sizeof(int) * 13);
	memset(C, 0, sizeof(int) * 13);
	memset(D, 0, sizeof(int) * 13);

	char n;
	int index, num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> n >> index;
		switch (n)
		{
		case 'S':
			S[index - 1] = 1;
			break;
		case 'H':
			H[index - 1] = 1;
			break;
		case 'C':
			C[index - 1] = 1;
			break;
		case 'D':
			D[index - 1] = 1;
			break;
		}
	}
	for (int i = 0; i < 13; i++)
	{
		if (S[i] == 0)
			cout << "S " << i + 1 << endl;
	}

	for (int i = 0; i < 13; i++)
	{
		if (H[i] == 0)
			cout << "H " << i + 1 << endl;
	}

	for (int i = 0; i < 13; i++)
	{
		if (C[i] == 0)
			cout << "C " << i + 1 << endl;
	}

	for (int i = 0; i < 13; i++)
	{
		if (D[i] == 0)
			cout << "D " << i + 1 << endl;
	}
	return 0;
}
#endif
