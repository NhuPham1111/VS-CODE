#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int a = abs(n);
	while (a>=10)
	{
		a = a / 10;
	}
		cout << "so dau tien cua so " << n << "la " << a;
	return 1;
}
