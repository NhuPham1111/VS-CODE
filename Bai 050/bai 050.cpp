#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	int s = 0;
	cout << "Cac uoc so: \n";

	
	while (i<=n)
	{
		if (n % i == 0) {
			s = s + i;
			cout  << i << "\n";

		}
		i = i + 1;
		
	}
	cout << "Tong la: " << s;
	return 1;

}
