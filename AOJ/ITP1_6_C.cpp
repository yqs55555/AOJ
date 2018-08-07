#if 0
#include<iostream>
using namespace std;
void print(int arr[3][10],int width,int height)
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << " " << arr[i][j];
		}
		cout << endl;
	}
}
int main()
{
	int b1[3][10] = { 0 }, b2[3][10] = { 0 }, b3[3][10] = { 0 }, b4[3][10] = { 0 };
	int num;
	int b, f, r, v;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> b >> f >> r >> v;
		switch (b)
		{
		case 1:
			b1[f - 1][r - 1] += v;
			break;
		case 2:
			b2[f - 1][r - 1] += v;
			break;
		case 3:
			b3[f - 1][r - 1] += v;
			break;
		case 4:
			b4[f - 1][r - 1] += v;
			break;
		}
	}
	print(b1, 3, 10);
	cout << "####################" << endl;
	print(b2, 3, 10);
	cout << "####################" << endl;
	print(b3, 3, 10);
	cout << "####################" << endl;
	print(b4, 3, 10);
	return 0;
}
#endif
