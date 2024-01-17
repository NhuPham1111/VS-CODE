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
	float x;

	if (a != 0)
	{
		x = (float)-b / a;
	}

	if (a == 0)
	{
		if (a == 0 && b == 0)
		{
			cout << "PT co vo so nghiem";
		}
		else
		{
			cout << "PT vo nghiem ";
		}
	}
	cout << "x= " << x;
	cin >> x; 
}
