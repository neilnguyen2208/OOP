#pragma once
#include <iostream>
#include <string>
#include "Nguhanh.h"
using namespace std;

// class trung gian giua nguoi choi va quai vat

class Object
{
protected:
	string ten;
	int Level;
	double damage;
	Nguhanh Element;
public:

	Object() {
		ten = "";
		Level = 1;
		damage = 0;
		Element.setNguHanh(Kim);
	}
	//get
	int getElement();
	string getTen();
	int getLevel();
	double getDamage();

	//set
	void setLevel(int);
	void setTen(string);

	virtual void nhap() {};
	virtual void xuat() {};

	void solo(Object*);

};
