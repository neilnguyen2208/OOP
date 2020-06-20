#pragma once
#include <iostream>
#include "Personality.h"

using namespace std;

//Hòa đồng dễ chịu 
class Agreeableness : public Personality {
public:
	Agreeableness();
	Agreeableness(string _yeuto);
	Agreeableness(int _chiso);
	int GetChiSo();
	void SetChiSo(string _yeuto, int _chiso);
	void Nhap();
	void Xuat();
	~Agreeableness();
};

