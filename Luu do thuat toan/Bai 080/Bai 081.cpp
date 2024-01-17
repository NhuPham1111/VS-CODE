#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1 / x;
	float m = x;
	int i = 1;

	while (i<=n)
	{
		m = m * (x + i);
		s = s + 1/ m;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}
