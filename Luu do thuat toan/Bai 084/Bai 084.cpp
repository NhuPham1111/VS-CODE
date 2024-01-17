#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	double t = x;
	int i = 1;

	while (i<=n)
	{
		
		t =  sin( t);
		s = s + t;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 0;
} 