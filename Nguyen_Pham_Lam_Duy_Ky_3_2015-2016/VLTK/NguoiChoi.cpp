#include<iostream>
#include<string>
using namespace std;
#include "NguoiChoi.h"

NguoiChoi::NguoiChoi() {
	setTen("");
	setLevel(1);
	setDamage(); // damage = level * 5
	setMonPhai(ThienVuong);//mac dinh Thien Vuong
}

NguoiChoi::NguoiChoi(string name, int level, Phai ph) {
	setTen(name);
	setLevel(level);
	setDamage();
	setMonPhai(ph);
}

int NguoiChoi::getMonPhai()
{
	return this->phai.getMonPhai();
}

void NguoiChoi::setElement(Phai x)
{
	switch (x)
	{
	case ThienVuong:
		this->Element.setNguHanh(Kim);
		break;
	case ThieuLam:
		this->Element.setNguHanh(Kim);
		break;
	case NguDoc:
		this->Element.setNguHanh(Moc);
		break;
	case DuongMon:
		this->Element.setNguHanh(Moc);
		break;
	case NgaMy:
		this->Element.setNguHanh(Thuy);
		break;
	case ThuyYen:
		this->Element.setNguHanh(Thuy);
		break;
	case CaiBang:
		this->Element.setNguHanh(Hoa);
		break;
	case ThienNhan:
		this->Element.setNguHanh(Hoa);
		break;
	case VoDang:
		this->Element.setNguHanh(Tho);
		break;
	case ConLon:
		this->Element.setNguHanh(Tho);
		break;

	}
}

void NguoiChoi::setDamage() {
	this->damage = getLevel() * 5.0;
}


void NguoiChoi::setMonPhai(Phai x)
{
	this->phai.setMonPhai(x);
	this->setElement(x);
}

void NguoiChoi::nhap() {
	cin.ignore();
	cout << "Ten: "; 
	getline(cin, ten);
	cout << "Level :";;
	cin >> Level;
	Level < 0 ? Level = 1 : Level = Level;
	setDamage();

	int x = -1;
	while (x < 0 or x > 9)
	{
		cout << "MonPhai (0:ThienVuong,1:ThieuLam,2:NgaMy,3:ThuyYen,4:DuongMon,5:NguDoc,6:CaiBang,7:ThienNhan,8:VoDang,9:ConLon): ";
		cin >> x;
		switch (x)
		{
			case 0:
				phai.setMonPhai(ThienVuong);
				break;
			case 1:
				phai.setMonPhai(ThieuLam);
				break;
			case 2:
				phai.setMonPhai(NgaMy);
				break;
			case 3:
				phai.setMonPhai(ThuyYen);
				break;
			case 4:
				phai.setMonPhai(DuongMon);
				break;
			case 5:
				phai.setMonPhai(NguDoc);
				break;
			case 6:
				phai.setMonPhai(CaiBang);
				break;
			case 7:
				phai.setMonPhai(ThienNhan);
				break;
			case 8:
				phai.setMonPhai(VoDang);
				break;
			case 9:
				phai.setMonPhai(ConLon);
				break;
		}
	}
}

void NguoiChoi::xuat()
{
	cout << "\n====<Nguoi choi>====";
	cout << "\nTen: " << this->getTen()
		 << "\nLevel: " << this->getLevel()
		 << "\nNgu hanh: ";

	switch (this->Element.getNguHanh())
	{	
		case Kim:
			cout << "Kim";
			break;
		case Moc:
			cout << "Moc";
			break;
		case Thuy:
			cout << "Thuy";
			break;
		case Hoa:
			cout << "Hoa";
			break;
		case Tho:
			cout << "Tho";
			break;
	}

	switch (this->phai.getMonPhai())
	{
	case ThienVuong:
		cout << "\nThien Vuong";
		break;
	case ThieuLam:
		cout << "\nThieu Lam";
		break;
	case NguDoc:
		cout << "\nNgu Doc";
		break;
	case DuongMon:
		cout << "\nDuong Mon";
		break;
	case NgaMy:
		cout << "\nNga My";
		break;
	case ThuyYen:
		cout << "\nThuy Yen";
		break;
	case CaiBang:
		cout << "\nCai Bang";
		break;
	case ThienNhan:
		cout << "\nThien Nhan";
		break;
	case VoDang:
		cout << "\nVo Dang";
		break;
	case ConLon:
		cout << "\nCon Lon";
		break;
	}

	cout << "\nSat thuong :" << this->getDamage();
}