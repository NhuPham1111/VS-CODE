#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double x = M_PI;
	cout << "Nhap x: ";
	//cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	long double s = 0;
	double t = 1;
	int i = 1;

	while (i<=n)
	{
		t = t * sin(x);
		s = s + t;
		i = i + 1;

	}
	cout << "Tong la: " << s;

	return 1;

}
