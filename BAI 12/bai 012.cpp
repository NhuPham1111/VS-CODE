#include <iostream>
using namespace std;

int main() {
	float x;
	cout << "nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x2 * x4;
	float x7 = x6 * x;
	cout << "x7 la: " << x7;

	return 1;
}