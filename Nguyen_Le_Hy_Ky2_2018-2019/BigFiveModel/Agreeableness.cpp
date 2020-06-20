#include "Agreeableness.h"

Agreeableness::Agreeableness() {
	yeuTo = "A";
	chiSo = 0;
}
Agreeableness::Agreeableness(string _yeuto) {
	yeuTo = _yeuto;
}
Agreeableness::Agreeableness(int _chiso) {
	chiSo = _chiso;
}
int Agreeableness::GetChiSo() {
	return chiSo;
}
void Agreeableness::SetChiSo(string _yeuto, int _chiso) {
	yeuTo = _yeuto;
	chiSo = _chiso;
}
void Agreeableness::Nhap() {
	int temp;
	cout << endl << "Nhap chi so A (Hoa dong de chiu):    {0 =< A >= 100}" << endl;
	cin >> temp;
	Agreeableness::SetChiSo("A", temp);
}
void Agreeableness::Xuat() {
	Personality::Xuat();
	cout << endl << "Hoa dong de chiu (A): ";
	if (chiSo <= 30) {
		cout << "Nguoi co diem thap thuong dạt loi ich cua ban than len tren, ";
		cout << "it dong cam, chia se voi dong nghiep, co tinh canh tranh cao.";
		return;
	}
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong than thien, coi mo, dong ";
		cout << "cam voi moi nguoi nhung nhieu khi \"thieu chinh kien\".";
		return;
	}
	else {
		cout << "Khong xac dinh ro";
	}
}
Agreeableness::~Agreeableness() {

}