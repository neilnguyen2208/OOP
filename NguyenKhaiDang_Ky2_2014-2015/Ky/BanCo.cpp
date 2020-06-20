#include"BanCo.h"
#include<iostream>
using namespace std;
BanCo::BanCo()
{
	//Quân Trắng
	this->a[0] = new Xe(1, 1, true);
	this->a[1] = new Ngua(1, 2, true);
	this->a[2] = new QTuong(1, 3, true);
	this->a[3] = new Si(1, 4, true);
	this->a[4] = new Tuong(1, 5, true);
	this->a[5] = new Si(1, 6, true);
	this->a[6] = new QTuong(1, 7, true);
	this->a[7] = new Ngua(1, 8, true);
	this->a[8] = new Xe(1, 9, true);

	this->a[9] = new Phao(3, 2, true);
	this->a[10] = new Phao(3, 8, true);

	this->a[11] = new Tot(4, 1, true);
	this->a[12] = new Tot(4, 3, true);
	this->a[13] = new Tot(4, 5, true);
	this->a[14] = new Tot(4, 7, true);
	this->a[15] = new Tot(4, 9, true);

	//Quân đen
	this->a[16] = new Xe(10, 1, false);
	this->a[17] = new Ngua(10, 2, false);
	this->a[18] = new QTuong(10, 3, false);
	this->a[19] = new Si(10, 4, false);
	this->a[20] = new Tuong(10, 5, false);
	this->a[21] = new Si(10, 6, false);
	this->a[22] = new QTuong(10, 7, false);
	this->a[23] = new Ngua(10, 8, false);
	this->a[24] = new Xe(10, 9, false);

	this->a[25] = new Phao(8, 2, false);
	this->a[26] = new Phao(8, 8, false);

	this->a[27] = new Tot(7, 1, false);
	this->a[28] = new Tot(7, 3, false);
	this->a[29] = new Tot(7, 5, false);
	this->a[30] = new Tot(7, 7, false);
	this->a[31] = new Tot(7, 9, false);
}
void BanCo::CachDi()
{
	int t;
	cout << "1/Tuong 2/Si 3/Tuong 4/Ngua 5/Xe 6/Phao 7/Tot";
	cin >> t;
	switch (t)
	{
	case 1:
		a[5]->CachDuyChuyen();
		break;
	case 2:
		a[4]->CachDuyChuyen();
		break;
	case 3:
		a[3]->CachDuyChuyen();
		break;
	case 4:
		a[2]->CachDuyChuyen();
		break;
	case 5:
		a[1]->CachDuyChuyen();
		break;
	case 6:
		a[9]->CachDuyChuyen();
		break;
	case 7:
		a[11]->CachDuyChuyen();
		break;
	}
}