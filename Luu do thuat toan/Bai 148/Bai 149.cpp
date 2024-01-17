#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	a = abs(a);

	int b;
	cout << "Nhap b: ";
	cin >> b;
	b = abs(b);


	while (a*b!=0)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
	cout << "Uoc so chung lon nhat la: " <<a+b;

	return 1;
}