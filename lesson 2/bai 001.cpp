﻿#include <iostream>
using namespace std;

int main()
{
	float x1;
	cout << "Nhap x1: ";
	cin >> x1;

	float x2;
	cout << "Nhap x2: ";
	cin >> x2;

	float y1;
	cout << "Nhap y1: ";
	cin >> y1;

	float y2;
	cout << "Nhap y2: ";
	cin >> y2;

	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "khoang cach: " << d <<"cm";





	return 1;
}
