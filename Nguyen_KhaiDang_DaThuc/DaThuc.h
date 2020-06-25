#include<iostream>
using namespace std;
#pragma once
class DaThuc
{
protected:
	int n;
	int* a;
public:
	DaThuc() { n = 0; a = NULL; };
	void KTDaThuc(int n);

	long GiaTriDaThuc(int x);

	void Nhap();
	void Xuat();

	DaThuc operator+(DaThuc b);
	DaThuc operator-(DaThuc b);
};

