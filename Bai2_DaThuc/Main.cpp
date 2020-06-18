#include<iostream>
#include"DaThuc.h"
using namespace std;
int main()
{
	system("color b");
	DaThuc a, b;
	cout << "Da thuc a" << endl;
	a.Nhap();
	cout << "\nDa thuc b" << endl;
	b.Nhap();
	system("cls");
	cout << "F(a)=";
	a.Xuat();
	cout << "\nF(a)=";
	b.Xuat();
	int x;
	cout << "\nNhap gia tri x: ";
	cin >> x;
	cout << "\nTong Da Thuc a, b;" << endl;
	cout << "F(a)= " << a.GiaTriDaThuc(x) << endl;
	cout << "F(b)= " << b.GiaTriDaThuc(x) << endl;
	DaThuc c = a + b;
	cout << "Da thuc c = a + b = ";
	c.Xuat();
	DaThuc d = a - b;
	cout << "\nDa thuc d = a - b = ";
	d.Xuat();

	return 0;
}