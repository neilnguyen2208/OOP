#include "Neuroticsm.h"

Neuroticsm::Neuroticsm() {
	yeuTo = "N";
	chiSo = 0;
}
Neuroticsm::Neuroticsm(string _yeuto) {
	yeuTo = _yeuto;
}
Neuroticsm::Neuroticsm(int _chiso) {
	chiSo = _chiso;
}
int Neuroticsm::GetChiSo() {
	return chiSo;
}
void Neuroticsm::SetChiSo(string _yeuto, int _chiso) {
	yeuTo = _yeuto;
	chiSo = _chiso;
}
void Neuroticsm::Nhap() {
	Personality::Nhap();
	int temp;
	cout << endl << "Nhap chi so N (Bat on cam xuc):    {0 =< N >= 100}" << endl;
	cin >> temp;
	Neuroticsm::SetChiSo("N", temp);
}
void Neuroticsm::Xuat() {
	Personality::Xuat();
	cout << endl << "Bat on cam xuc (N): ";
	if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong kiem soat duoc cam xuc, ung pho ";
		cout << "voi cang thang tot, it bi ben ngoai anh huong den tam trang cua ban than.";
		return;
	}
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong co cac cam xuc tieu cuc nhu: lo lang, ";
		cout << "buc boi, tu ti, yeu duoi va kha nang chiu ap luc keem.";
		return;
	}
	else {
		cout << "Khong xac dinh ro";
	}
}
Neuroticsm::~Neuroticsm() {

}
