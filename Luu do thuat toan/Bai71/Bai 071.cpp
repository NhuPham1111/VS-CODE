#include<iostream>
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
	float t = 1;
	int i = 1;
	
	while (i<=2*n+1)
	{
		t = pow(x, i);
		s = s+t;
		i = i+2;
		
		cout << "\nt = " << t;
		cout << "      i = " << i;
		cout << "      s = " << s;


	}
	cout << "\nTong la: " << s;
	return 1;
	
}