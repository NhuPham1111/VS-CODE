#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int  a0 = -1;
	int a1 = 3;
	int i = 2;

	int  ahh = 0;
	
	while (i <= n)
	{
		ahh = (5 * a1) + (6 * a0);
		i = i ++;
		a0 = a1;
		a1 = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}