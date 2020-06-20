#pragma once
#include <iostream>
#include "Personality.h"

using namespace std;

class Neuroticsm : public Personality
{
public:
	Neuroticsm();
	Neuroticsm(string _yeuto);
	Neuroticsm(int _chiso);
	int GetChiSo();
	void SetChiSo(string _yeuto, int _chiso);
	void Nhap();
	void Xuat();
	~Neuroticsm();
};

