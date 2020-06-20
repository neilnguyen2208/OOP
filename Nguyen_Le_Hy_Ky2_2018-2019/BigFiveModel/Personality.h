#pragma once
#include <iostream>
#include <string> 

using namespace std;

class Personality
{
protected: 
	string yeuTo;
	int chiSo;
public:
	Personality();
	Personality(const string& _yeuto);
	Personality(const int& _chiso);
	virtual int GetChiSo();
	virtual void Nhap();
	virtual void Xuat();
	~Personality();
};

