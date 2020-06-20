#pragma once
#include <iostream>
#include "Personality.h"

using namespace std;

//Tự chủ tận tâm
class Consien_tiousness : public Personality
{
public:
	Consien_tiousness();
	Consien_tiousness(int _chiso);
	Consien_tiousness(string _yeuto);
	int GetChiSo();
	void SetChiSo(string _yeuto, int _chiso);
	void Nhap();
	void Xuat();
	~Consien_tiousness();
};

