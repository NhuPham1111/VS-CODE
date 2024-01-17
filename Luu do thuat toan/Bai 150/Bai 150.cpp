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
	int ucln;
	float bcnn;

	int x = a;
	int y = b;

	while (a * b != 0)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
		ucln= a + b;
		cout << "uoc chung lon nhat la: " << ucln;
		bcnn = (float)abs(x*y) / ucln;

		cout << "\nBoi chung nho nhat la: " << bcnn;
	
}
