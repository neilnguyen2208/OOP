#include "Openness.h"

Openness::Openness() {
	yeuTo = "O";
	chiSo = 60;
}
Openness::Openness(string _yeuto) {
	yeuTo = yeuTo;
}
Openness::Openness(int _chiso) {
	chiSo = _chiso;
}
int Openness::GetChiSo() {
	return chiSo;
}
void Openness::SetChiSo(string _yeuto, int _chiso) {
	yeuTo = _yeuto;
	chiSo = _chiso;
}
void Openness::Nhap() {
	Personality::Nhap();
	int temp;
	cout << endl << "Nhap chi so O (san sang trai nghiem):    {0 =< O >= 100}" << endl;
	cin >> temp;
	Openness::SetChiSo("O", temp);
}
void Openness::Xuat() {
	Personality::Xuat();
	cout << endl << "San sang trai nghiem (O): ";
	if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong kha bao thu, kho tiep nhan nhung y ";
		cout << "tuong moi, la.Ho thich su on dinh, quen thuoc va thuc te.";
		return;
	}
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi thich nhung y tuong moi, thich ";
		cout << "hieu biet nhieu linh vuc nhung dong thoi cung thich tu do, khong thich bi rang buoc\.\.\.";
		return;
	}
	else {
		cout << "Khong xac dinh ro";
	}
}
Openness::~Openness() {

}
