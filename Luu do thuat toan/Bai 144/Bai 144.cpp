#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int i = 1;
	int dem = 0;

	while (i <=n)
	{
		if (n % i == 0)
		{
			dem = dem++;
		}
		i = i+1;
	}
	cout << "dem so uoc so la: " << dem;

	if (dem == 2)
	{
		cout << " \n la so nguyen to";
	}
	else
		cout << "\n Khong la so nguyen to";
}