#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;;

	while (a  <0)
	{
		a = -a;
	}
	while (b <0)
	{
		b = -b;
	}
	cout << "a= " << a << "\nb= " << b;
	return 1;
}