
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;

int Object::getLevel() {
	return this->Level;
}

int Object::getElement()
{
	return this->Element.getNguHanh();
}

string Object::getTen()
{
	return this->ten;
}

double Object::getDamage() {
	return this->damage;
}

void Object::setTen(string name) {
	this->ten = name;
}

void Object::setLevel(int x) {
	this->Level = x;
}

void Object::solo(Object *x)
{
	int A = this->Element.getNguHanh(); // ngu hanh doi tuong A
	int B = x->Element.getNguHanh();// ngu hanh doi tuong B
	int A_sinh = this->Element.getSinh();
	int A_khac = this->Element.getKhac();
	int B_sinh = x->Element.getSinh();
	int B_khac = x->Element.getKhac();

	if (A_sinh == B) {
		cout << "\nA tuong sinh voi B tao ra st: " << this->getDamage() * 1.1; // tang 10% st
		cout << "\nB gay cho A sat thuong la: " << x->getDamage();
	}
	else if (A_khac == B) {
		cout << "\nA tuong khac voi B tao ra st: " << this->getDamage() * 1.2; // tang 20% st
		cout << "\nB bi tuong khac boi A tao ra st la: " << x->getDamage() * 0.8;// giam 20% st
	}
	else if (A == B_sinh) {
		cout << "\nA gay cho B sat thuong la: " << this->getDamage();
		cout << "\nB tuong sinh voi A tao ra st: " << x->getDamage() * 1.1; // tang 10% st
	}
	else if (A == B_khac) {
		cout << "\nA bi tuong khac boi B tao ra st la: " << this->getDamage() * 0.8;   // giam 20% st
		cout << "\nB tuong khac voi A tao ra st: " << x->getDamage() * 1.2;// tang 20% st
	}
	else
	{
		cout << "\nA gay cho B sat thuong la: " << this->getDamage();
		cout << "\nB gay cho A sat thuong la: " << x->getDamage();
	}

}