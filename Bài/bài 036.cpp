#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int i = 1;
	int t = 1;

	while (i<=n)
	{
		t = t * x;
		i = i + 1;
	}
	cout << "Tich = " << t;
	return 1;
}