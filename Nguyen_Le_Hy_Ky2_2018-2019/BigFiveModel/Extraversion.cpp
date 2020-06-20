#include "Extraversion.h"

Extraversion::Extraversion() {
	yeuTo = "E";
	chiSo = 0;
}
Extraversion::Extraversion(string _yeuto) {
	yeuTo = _yeuto;
}
Extraversion::Extraversion(int _chiso) {
	chiSo = _chiso;
}
void Extraversion::Nhap() {
	Personality::Nhap();
	int temp;
	cout << endl << "Nhap chi so E (Huong ngoai):    {0 =< E >= 100}" << endl;
	cin >> temp;
	Extraversion::SetChiSo("E", temp);
}
int Extraversion::GetChiSo() {
	return chiSo;
}
void Extraversion::SetChiSo(string _yeuto, int _chiso) {
	yeuTo = _yeuto;
	chiSo = _chiso;
}
void Extraversion::Xuat() {
	Personality::Xuat();
	cout << endl << "Huong ngoai (E): ";
	if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong ngai giao tiep, khong thich su noi bat, ";
		cout << "thich duoc lam viec doc lap.";
		return;
	}
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh, nang dong, ";
		cout << "giao tiep tot, thich the hien ban than.";
		return;
	}
	else {
		cout << "Khong xac dinh ro";
	}
}
Extraversion::~Extraversion() {

}