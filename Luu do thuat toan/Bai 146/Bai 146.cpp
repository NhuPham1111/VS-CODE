#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int t = n;
	int  dn = 0;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
	{
		cout << " La so doi xung";
	}
	else
		cout << " Khong la so doi xung";
}


