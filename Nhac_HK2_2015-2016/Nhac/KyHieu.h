#include<iostream>
#include<string>
#pragma once
using namespace std;
class KyHieu
{
protected:
	float TruongDo;
	bool LaDauLang;
public:
	KyHieu();
	virtual void Nhap();
//	virtual string CaoDo();
//	virtual bool DauLangDen();
};

