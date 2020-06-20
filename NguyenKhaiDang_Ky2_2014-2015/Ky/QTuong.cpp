#include <io.h>
#include <fcntl.h>
#include<iostream>
#include "QTuong.h"
using namespace std;
QTuong::QTuong(int a, int b, bool test)
{
	this->x = a;
	this->y = b;
	this->MauCo = test;
}
void QTuong::CachDuyChuyen()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	cout << "Đi chéo 2 ô (ngang 2 và dọc 2) cho mỗi nước đi.\nTượng chỉ được phép ở một bên của bàn cờ, không được di chuyển sang nửa bàn cờ của đối phương.\nNước đi của tượng sẽ không hợp lệ khi có một quân cờ nằm chặn giữa đường đi" << endl;
}