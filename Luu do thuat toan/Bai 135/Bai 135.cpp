#include <iostream>
using namespace std;
int main() 
{

	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dk1 = (n % 4 == 0 && n != 100);
	int dk2 = (n % 400 == 0);

		if (dk1 or dk2)
		{
			cout << "Nam " << n << " la nam nhuan";
		}
		else
		{
			cout << "Nam " << n << " khong phai nam nhuan";
		}
}