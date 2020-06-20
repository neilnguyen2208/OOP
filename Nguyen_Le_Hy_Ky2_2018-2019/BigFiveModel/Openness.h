#pragma once
#include <iostream>
#include "Personality.h"

using namespace std;

// san sang trai nghiem
class Openness : public Personality {
public:
	Openness();
	Openness(string _yeuto);
	Openness(int _chiSo);
	int GetChiSo();
	void SetChiSo(string _yeuto, int _chiso);
	void Nhap();
	void Xuat();
	~Openness();
};

