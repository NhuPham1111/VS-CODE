#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	int c;
	cout << "Nhap c: ";
	cin >> c;

	float x;

	float d = b * b - 4 * a * c;
	if (d<0&&a!=0)
	{
		cout << "PT vo nghiem";
	}
	if (d==0&&a!=0)
	{
		cout << "PT co nghiem kep x1=x2= " << (float)-b / 2 * a;
		cin >> x;
	}
	if (d>=0&&a!=0)
	{
		cout << "PT co 2 nghiem " << "\n x1 = " << (-b + sqrt(d)) / 2 * a << "\n x2= " << (-b - sqrt(d)) / 2 * a;
	}
}