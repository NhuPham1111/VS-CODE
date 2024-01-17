#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int  at = -2;
	int i = 2;
	int  ahh = 0;
	int b = 3;
	int c = 7;

	while (i <= n)
	{
		b = b * 3;
		c = c * 7;
		ahh = (5 * at) + (2 * b) -(6 * c)+12;
		i = i + 1;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}