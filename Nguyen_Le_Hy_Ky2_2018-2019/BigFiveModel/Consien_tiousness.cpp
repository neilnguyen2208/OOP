#include "Consien_tiousness.h"


Consien_tiousness::Consien_tiousness() {
	yeuTo = "C";
	chiSo = 0;
}
Consien_tiousness::Consien_tiousness(string _yeuto) {
	yeuTo = _yeuto;
}
Consien_tiousness::Consien_tiousness(int _chiso) {
	chiSo = _chiso;
}
int Consien_tiousness::GetChiSo() {
	return chiSo;
}
void Consien_tiousness::SetChiSo(string _yeuto, int _chiso) {
	yeuTo = _yeuto;
	chiSo = _chiso;
}
void Consien_tiousness::Nhap() {
	Personality::Nhap();
	int temp;
	cout << endl << "Nhap chi so C (Tu chu tan tam):    {0 =< C >= 100}" << endl;
	cin >> temp;
	Consien_tiousness::SetChiSo("C", temp);
}
void Consien_tiousness::Xuat() {
	Personality::Xuat();
	cout << endl << "Tu chu tan tam (C): ";
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi cham chi, co kha nang chiu ap luc tot.";
		cout << " Ho thuong la nguoi gan bo, trung thanh voi to chuc.";
		return;
	}
	if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong de bo cuoc, kha nang chiu ap luc, tuan thu ky luat ";
		cout << "cua to chuc kem.";
		return;
	}
	else {
		cout << "Khong xac dinh ro";
	}
}
Consien_tiousness::~Consien_tiousness() {

}