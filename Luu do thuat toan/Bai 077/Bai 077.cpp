#include <iostream>
using namespace std;
int main()
{
	float k;
	cout << "Nhap k: ";
	cin >> k;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + pow(i, k);
		i = i + 1;
	} 
	cout << "Tong la: " << s;
	return 1;
}