#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int i = 1;
	int s = 0;
	
	while (i < n)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
		i = i + 1;
	}
	cout << "Tong uoc so la: " << s;

	if (s == n)
	{
		cout << " La so hoan thien ";
	}
	else
	{
		cout << " Khong la so hoan thien";
	}
}