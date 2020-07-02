#pragma once
#include<iostream>
using namespace std;

class Website
{
protected : 
	int MauChu;
	int MauNen;

public :
	Website(int = 0, int = 0);

	virtual void Nhap() = 0;
	virtual void Xuat();

	int GetMauChu()
	{
		return MauChu;
	}

	int GetMauNen()
	{
		return MauNen;
	}
};

