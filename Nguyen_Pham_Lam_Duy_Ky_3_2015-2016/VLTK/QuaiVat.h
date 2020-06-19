#pragma once

#include "Nguhanh.h"
#include "Object.h"


class QuaiVat : public Object
{
private:
	bool Type_ob_mob = 0; // 0: Quai thuong, 1 : Boss
public:
	QuaiVat();
	QuaiVat(string,int,He,bool);
	bool isBoss();
	void MakeBoss();
	void setDamage();
	void nhap();
	void xuat();
};

