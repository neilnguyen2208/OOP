#include "Ngua.h"
#include <io.h>
#include <fcntl.h>
#include<iostream>
using namespace std;
Ngua::Ngua(int a, int b, bool test)
{
	this->x = a;
	this->y = b;
	this->MauCo = test;
}
void Ngua::CachDuyChuyen()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << "Đi ngang 2 ô và dọc 1 ô (hay dọc 2 ô và ngang 1 ô) cho mỗi nước đi.\nNếu có quân nằm ngay bên cạnh mã và cản đường ngang 2 (hay đường dọc 2), mã bị cản không được đi đường đó." << endl;
}