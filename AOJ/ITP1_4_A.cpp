#if 0
#include <iomanip>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << a / b << " " << endl;
	cout << a % b << " " << endl;
	cout << fixed << setprecision(5) << static_cast<double>(a) / static_cast<double>(b) << endl;

	return 0;
}
#endif