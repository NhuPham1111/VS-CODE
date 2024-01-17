#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	while (a > b)
	{
		float temp = a;
		a = b;
		b = temp;

	}

	cout << "So thuc lan luot la: " << a << " - " << b;;
	return 1;
}