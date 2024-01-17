#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int flag = 1;//xem nhu n toan le
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
		{
			flag = 0;
		}
			t = t / 10;
		}
	if (flag == 1)
	{
		cout << " Toan so le";
	}
	else
		cout << "Khong la so le";
}

