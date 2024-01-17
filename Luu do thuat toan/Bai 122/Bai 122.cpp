#include <iostream>
using namespace std;

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;

	int  at = 1;
	int bt = 1;
	int i = 2;

	int  ahh = 0;
	int  bhh = 0;

	while (i <= k)
	{
		ahh = (3 * bt) + (2 * at);
		bhh = at + (3 * bt);
		i = i+1;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << k << " cua day la: " << "\n  a = " << ahh << "\n b = " << bhh;
	return 1;
}