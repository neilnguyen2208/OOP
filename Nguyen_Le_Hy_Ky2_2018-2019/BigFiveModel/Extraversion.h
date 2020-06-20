#pragma once
#include <iostream>
#include "Personality.h"

using namespace std;

//Hướng ngoại
class Extraversion : public Personality
{
public:
	Extraversion();
	Extraversion(string _yeuto);
	Extraversion(int _chiso);
	int GetChiSo();
	void SetChiSo(string _yeuto, int _chiso);
	void Nhap();
	void Xuat();
	~Extraversion();
};

