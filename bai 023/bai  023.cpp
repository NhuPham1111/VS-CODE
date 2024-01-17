#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int hangchuc = (n /10) % 10;
	cout << "hang chuc la: " << hangchuc;

	return 1;
}