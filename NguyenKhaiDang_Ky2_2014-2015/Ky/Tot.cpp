#include "Tot.h"
#include<iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
Tot::Tot(int a, int b, bool test)
{
	this->x = a;
	this->y = b;
	this->MauCo = test;
}
void Tot::CachDuyChuyen()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << "Đi một ô mỗi nước.\nNếu tốt chưa vượt qua sông, nó chỉ có thể đi thẳng tiến.\nKhi đã vượt sông rồi, tốt có thể đi ngang 1 nước hay đi thẳng tiến 1 bước mỗi nước. " << endl;
}