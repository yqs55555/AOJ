#if 0
#include<iostream>
using namespace std;
int main()
{
	int a[100], size;
	cin >> size;
	for(int i = 0;i < size;i++)
		cin >> a[i];

	for (int i = size - 1; i > 0; i--)
		cout << a[i] << " ";
	cout << a[0] << endl;
	return 0;
}
#endif
