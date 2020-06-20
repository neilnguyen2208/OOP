#include<iostream>
#include <io.h>
#include <fcntl.h>
#include "Tuong.h"
using namespace std;
Tuong::Tuong(int a, int b, bool test)
{
	this->x = a;
	this->y = b;
	this->MauCo = test;
}
void Tuong::CachDuyChuyen()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	cout << "Đi từng ô một, đi ngang hoặc dọc.\nTướng luôn luôn phải ở trong phạm vi cung và không được ra ngoài.\nCung tức là hình vuông 2X2 được đánh dấu bằng đường chéo hình chữ X " << endl;
}