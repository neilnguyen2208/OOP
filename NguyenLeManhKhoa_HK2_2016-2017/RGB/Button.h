#pragma once
#include<iostream>
#include"Website.h"
using namespace std;

class Button : public Website
{
public :
	void Nhap()
	{
		cout << "Nhap vao button : "<<endl;
		cout << "0.Nhap img		1.Nhap text : ";
		
		bool PhanLoai;
		
		cin >> PhanLoai;

		if (PhanLoai == 0)
		{
			MauChu = 0;
			MauNen = 0;
		}
		else
		{
			Website::Nhap();
		}
	}

	void Xuat()
	{
		cout << "Button vua nhap : " << endl;
		Website::Xuat();
	}
};

