#include <iostream>
using namespace std;
int main()
{

	int x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = x;
		s = s + t;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}