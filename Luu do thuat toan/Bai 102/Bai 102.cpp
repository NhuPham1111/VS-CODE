#include <iostream>
using namespace std;
int main()
{

	float s = 0;
	float i = 2;
	float e = 1;

	while (1 / i >= pow(10, -6))
	{
		s = s + 1 / i;
		i = i + 1;

	}
	cout << "Tong la: " << s;
	return 1;
}