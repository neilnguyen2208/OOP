#include<iostream>
using namespace std;
#include "Nguhanh.h"

int Nguhanh::getNguHanh()
{
	return this->Name;
}

void Nguhanh::setNguHanh(He x) {
	this->Name = x;
	setSinh(x);
	setKhac(x);
}

int Nguhanh::getSinh() {
	return this->Sinh;
}

int Nguhanh::getKhac() {
	return this->Khac;
}
void Nguhanh::setSinh(He x) {
	switch(x)
	{
		case Kim:
			this->Sinh = Thuy;
			break;
		case Moc:
			this->Sinh = Hoa;
			break;
		case Thuy:
			this->Sinh = Moc;
			break;
		case Hoa:
			this->Sinh = Tho;
			break;
		case Tho:
			this->Sinh = Kim;
			break;

	}
}
void Nguhanh::setKhac(He x) {
	switch (x)
	{
	case Kim:
		this->Khac = Moc;
		break;
	case Moc:
		this->Khac = Tho;
		break;
	case Thuy:
		this->Khac = Hoa;
		break;
	case Hoa:
		this->Khac = Kim;
		break;
	case Tho:
		this->Khac = Thuy;
		break;
	}
}