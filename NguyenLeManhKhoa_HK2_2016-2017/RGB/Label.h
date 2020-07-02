#pragma once
#include"Website.h"
#include<iostream>
using namespace std;

class Label : public Website
{
public :
	void Nhap()
	{
		cout << "Nhap vao label : ";
		cout << endl;
		Website::Nhap();
	}

	void Xuat()
	{
		cout << "Label vua nhap " << endl;
		cout << endl;
		Website::Xuat();
	}
};

