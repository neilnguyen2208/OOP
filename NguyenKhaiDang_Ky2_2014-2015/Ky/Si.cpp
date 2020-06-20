#include<iostream>
#include <io.h>					//copy tiếng việt qua làm biếng bỏ dấu nên sái này để in ra tiếng việt
#include <fcntl.h>
#include "Si.h"
using namespace std;
Si::Si(int a, int b, bool test)
{
	this->x = a;
	this->y = b;
	this->MauCo = test;
}
void Si::CachDuyChuyen()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << "Đi xéo 1 ô mỗi nước. Sĩ luôn luôn phải ở trong cung như Tướng." << endl;
}