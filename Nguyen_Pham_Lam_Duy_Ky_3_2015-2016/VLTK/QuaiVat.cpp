#include "QuaiVat.h"
#include<iostream>
#include<string>
using namespace std;

QuaiVat::QuaiVat() {
	setTen("");
	setLevel(1);
	this->setDamage(); // mac dinh quai thuong
}

QuaiVat::QuaiVat(string name, int level, He x, bool y) {
	setTen(name);
	setLevel(level);
	if (y) MakeBoss();
	this->setDamage();
	this->Element.setNguHanh(x);
}

void QuaiVat::MakeBoss() {
	// Chuyen quai thuong thanh boss
	this->Type_ob_mob = 1;
}

void QuaiVat::setDamage() {
	if (isBoss()) this->damage = this->getLevel() * 7.0;
	else
		this->damage = this->getLevel() * 3.0;
}

bool QuaiVat::isBoss() {
	if (Type_ob_mob) return true;
	return false;
}
void QuaiVat::nhap()
{
	cin.ignore();
	cout << "Ten: ";
	getline(cin, ten);

	int he = -1;
	while (he < 0 or he >5)
	{
		cout << "He (0:Kim,1:Moc,2:Thuy,3:Hoa,4:Tho): ";
		cin >> he;
		switch (he)
		{
			case 0:
				this->Element.setNguHanh(Kim);
				break;
			case 1:
				this->Element.setNguHanh(Moc);
				break;
			case 2:
				this->Element.setNguHanh(Thuy);
				break;
			case 3:
				this->Element.setNguHanh(Hoa);
				break;
			case 4:
				this->Element.setNguHanh(Tho);
				break;
		}
	}
	cout << "Level :";
	cin >> Level;
	cout << "Loai Quai (0: Quai Thuong, 1: BOSS): ";
	cin >> Type_ob_mob;
	setDamage();
}


void QuaiVat::xuat()
{
	cout << "\n====<Quai Vat>====";
	cout<<"\nTen: " << this->getTen()
		<< "\nLevel: " << this->getLevel()
		<< "\nNgu hanh: ";

	switch (this->Element.getNguHanh())
	{	//Kim,Moc,Thuy,Hoa,Tho
		case 0:
			cout << "Kim";
			break;
		case 1:
			cout << "Moc";
			break;
		case 2:
			cout << "Thuy";
			break;
		case 3:
			cout << "Hoa";
			break;
		case 4:
			cout << "Tho";
			break;
	}
	
	if (isBoss()) cout << "\nLoai: BOSS";
	else
		cout << "\nLoai: Quai thuong";

	cout << "\nSat thuong :" << this->getDamage();

}