#include <iostream>
using namespace std;

int main()
{
	float xa;
	cout << "Nhap xa: ";
	cin >> xa;
	float ya;
	cout << "Nhap ya: ";
	cin >> ya;

	float xb;
	cout << "Nhap xb: ";
	cin >> xb;
	float yb;
	cout << "Nhap yb: ";
	cin >> yb;

	float xc;
	cout << "Nhap xc: ";
	cin >> xc;
	float yc;
	cout << "Nhap yc: ";
	cin >> yc;

	float a = sqrt(pow((xb - xc), 2) + pow((yb - yc), 2));
	float b = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
	float c = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));

	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "La tam giac";
	}
	else
	{
		cout << "Khong la tam giac";
	}
}
