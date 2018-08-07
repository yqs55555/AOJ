#if 0
#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	int h, m, s;
	h = i / 3600;
	int tmp = i % 3600;
	m = tmp / 60;
	s = tmp - m * 60;
	cout << h << ":" << m << ":" << s << endl;

	return 0;
}
#endif