#include <iostream>
#include "Personality.h"
#include "Openness.h"
#include "Consien_tiousness.h"
#include "Extraversion.h"
#include "Agreeableness.h"
#include "Neuroticsm.h"

using namespace std;

void Nhap(Personality** p, int soLuong) {
	for (int i = 0; i < soLuong * 5; i += 5) {
		cout << endl << "________Nhap thong tin nguoi thu: " << i + 1 << "________";
		p[i] = new Openness;
		p[i]->Nhap();
		p[i + 1] = new Consien_tiousness;
		p[i + 1]->Nhap();
		p[i + 2] = new Extraversion;
		p[i + 2]->Nhap();
		p[i + 3] = new Agreeableness;
		p[i + 3]->Nhap();
		p[i + 4] = new Neuroticsm;
		p[i + 4]->Nhap();
	}
}
void XuatAll(Personality** p, int soLuong) {
	int temp = 1;
	for (int i = 0; i < soLuong * 5; i += 5) {
		cout << endl << "________Thong tin danh gia tam ly nguoi thu: " << temp << " la________";
		cout << endl << "O" << p[i]->GetChiSo() << "_C" << p[i + 1]->GetChiSo() << "_E";
		cout << p[i + 2]->GetChiSo() << "_A" << p[i + 3]->GetChiSo() << "_N" << p[i + 4]->GetChiSo();
		p[i]->Xuat();
		cout << endl;
		p[i + 1]->Xuat();
		cout << endl;
		p[i + 2]->Xuat();
		cout << endl;
		p[i + 3]->Xuat();
		cout << endl;
		p[i + 4]->Xuat();
		temp++;
	}
}
void Xuat1(Personality** p, int viTri) {
	int i = viTri * 5;
	cout << endl << "________Thong tin danh gia tam ly nguoi thu: " << viTri + 1 << " la________";
	cout << endl << "O" << p[i]->GetChiSo() << "_C" << p[i + 1]->GetChiSo() << "_E";
	cout << p[i + 2]->GetChiSo() << "_A" << p[i + 3]->GetChiSo() << "_N" << p[i + 4]->GetChiSo();
	p[i]->Xuat();
	cout << endl;
	p[i + 1]->Xuat();
	cout << endl;
	p[i + 2]->Xuat();
	cout << endl;
	p[i + 3]->Xuat();
	cout << endl;
	p[i + 4]->Xuat();
}
void NguyCo(Personality** p, int soLuong) {
	int temp = 1;
	for (int i = 0; i < soLuong*5; i += 5) {
		if (p[i + 1]->GetChiSo() <= 30 || p[i + 2]->GetChiSo() <= 30 || p[i + 3]->GetChiSo() <= 30) {
			cout << endl << "Nguoi thu: " << temp << " voi chi so: ";
			cout << "O" << p[i]->GetChiSo() << "_C" << p[i + 1]->GetChiSo() << "_E";
			cout << p[i + 2]->GetChiSo() << "_A" << p[i + 3]->GetChiSo() << "_N" << p[i + 4]->GetChiSo();
			cout << " -> Doang nghiep can luu y!" << endl;
			temp++;
		}
	}
}
int main() {
	int soLuong;
	cout << "Nhap so luong nguoi danh gia tam ly: ";
	cin >> soLuong;
	Personality** p = new Personality*[soLuong*5];
	Nhap(p, soLuong);
	XuatAll(p, soLuong);
	cout << endl << "Nhap vi tri nguoi can xuat ra thong tin danh gia tam ly: " << endl;
	int viTri;
	cin >> viTri;
	Xuat1(p, viTri - 1);
	NguyCo(p, soLuong);
}