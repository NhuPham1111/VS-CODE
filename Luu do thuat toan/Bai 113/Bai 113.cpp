#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float at = 2;
	int i = 2;
	float ahh = 0;

	while (i <= n)
	{
		ahh = at + (2 * i) + 1;
		i = i + 1;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}