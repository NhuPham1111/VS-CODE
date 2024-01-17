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

	float xm;
	cout << "Nhap xm: ";
	cin >> xm;
	float ym;
	cout << "Nhap ym: ";
	cin >> ym;
	
	float sabc = 0.5 * abs(xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc);
	float smab = 0.5 * abs(xm * ya + xa * yb + xb * ya - xa * ym - xb * ya - xa * yb);
	float smbc = 0.5 * abs(xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc);
	float smac = 0.5 * abs(xm * ya + xa * yc + xc * ym - xa * ym - xc * ya - xm * yc);
	float s = smab + smbc + smac;

	if (sabc == s)
	{
		cout << "M thuoc tam giac ABC";
	}
	else
	{
		cout << "M nam ngoai tam giac ABC";
	}
}