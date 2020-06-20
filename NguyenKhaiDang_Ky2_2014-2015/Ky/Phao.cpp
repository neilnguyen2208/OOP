#include "Phao.h"
#include<iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
Phao::Phao(int a, int b, bool test)
{
	this->x = a;
	this->y = b;
	this->MauCo = test;
}
void Phao::CachDuyChuyen()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << "Đi ngang và dọc giống như xe.\nĐiểm khác biệt là nếu pháo muốn ăn quân, pháo phải nhảy qua đúng 1 quân nào đó.\nKhi không ăn quân, tất cả những điểm từ chỗ đi đến chỗ đến phải không có quân cản.";
}