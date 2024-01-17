#include <iostream>;
using namespace std;

typedef struct ngay NGAY;

struct ngay
{
	int ngay;
	int thang;
	int nam;
};
NGAY Nhap();
void Xuat(NGAY x);


int main()
{
	NGAY a = Nhap();
	
	Xuat(a);
	return 1;

}

NGAY Nhap() 
{
	NGAY x;
	cout << "Nhap ngay: ";
	cin >> x.ngay;
	cout << "Nhap thang: ";
	cin >> x.thang;
	cout << "Nhap nam: ";
	cin >> x.nam;
	return x;
}
void Xuat(NGAY x)
{
	cout << "\n Ngay = " << x.ngay;
	cout << "\n Thang= " << x.thang;
	cout << "\n Nam= " << x.nam;
}