#include <iostream>;
using namespace std;


struct donthuc
{
	float a;
	int n;

};
typedef struct donthuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);

int main()
{
	DONTHUC F;
	Nhap(F);
	cout << "\n Don thuc vua nhap:";
	Xuat(F);
	return 1;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap luy thua: ";
	cin >> f.n;
}
void Xuat(DONTHUC f)
{
	cout << "\n a ="<< f.a;
	cout << "\n n=" << f.n;

}


