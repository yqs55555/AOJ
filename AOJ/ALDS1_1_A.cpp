#if 0
#include<iostream>
using namespace std;
void print(int arr[],int n)
{
	for (int i = 0; i < n - 1; i++)
		cout << arr[i] << " ";
	cout << arr[n - 1] << endl;
}
int main()
{
	int n, arr[100];
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	print(arr, n);
	for(int i = 1;i <= n - 1;i++)
	{
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		print(arr, n);
	}
	return 0;
}
#endif
