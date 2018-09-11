#if 1
//date : 2018.9.11
#include<iostream>
using namespace std;
#define MAX_N 100
int bubble_sort(int *arr, int size)
{
	int step = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				step++;
			}
		}
	}
	return step;
}

int main()
{
	int n;
	int arr[MAX_N];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int step = bubble_sort(arr, n);
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << arr[n - 1] << endl << step << endl;
	return 0;
}
#endif