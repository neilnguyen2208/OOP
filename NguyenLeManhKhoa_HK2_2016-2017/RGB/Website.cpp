#include "Website.h"

Website :: Website(int Chu, int Nen)
{
	this->MauChu = MauChu;
	this->MauNen = MauNen;
}

void Website::Nhap()
{
	cout << "Nhap vao mau chu: ";
	cin >> MauChu;
	cout << "Nhap vao mau nen : ";
	cin >> MauNen;
	cout << endl;
}

void Website::Xuat()
{
	cout << "Mau chu : " << MauChu;
	cout << "\nMau nen : " << MauNen;
	cout << endl;
}