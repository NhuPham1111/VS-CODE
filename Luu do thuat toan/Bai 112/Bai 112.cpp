#include <iostream>
using namespace std;

int main()
{

	double  s = 4 - (2 / 4) - (1 / 5) - (1 / 6);
	double i = 1;
	double  t = 1;
	double e = 1;

	while (e >= pow(10, -6))
	{ 
		t = t * 16;
		e = ((4 / (8 * i + 1)) - (2 / (8 * i + 4)) - (1 / (8 * i + 5)) - (1 / (8 * i + 6))) / t;
		s = s + e;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}