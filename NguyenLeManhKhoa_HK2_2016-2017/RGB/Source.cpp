#include<iostream>

#include"Button.h"
#include"Website.h"
#include"Label.h"

using namespace std;

int main()
{
	int n;

	Website* Wb[1000];

	cout << "Nhap vao so luong thanh phan : ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "0.Label		1.Button :" << endl;
		bool PhanLoai;

		cin >> PhanLoai;
		if (PhanLoai == 0)
		{
			Wb[i] = new Label();
		}
		else
		{
			Wb[i] = new Button();
		}
		Wb[i]->Nhap();
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		Wb[i]->Xuat();
	}

	cout << endl;

	//	Kiem tra phan tu dau tien co phai bo tuc truc tiep hay khong 

	if (abs(Wb[0]->GetMauNen() - Wb[0]->GetMauChu()) == 6)
	{
		cout << "Phan tu dau tien phoi mau truc tiep ";
		cout << endl;
	}
	else
	{
		cout << "Phan tu dau tien khong phoi mau truc tiep ";
		cout << endl;
	}

	//	Kiem tra mau nen cua thanh phan co phu hop nguyen tac nao khong

	//	Tao mot mang dem so luong mau 

	int Mau[13];
	int DanhSachMau[4];
	int SoLuongMau = 0;

	//	Khoi tao Mau[]

	for (int i = 0; i < 13; i++)
	{
		Mau[i] = 0;
	}

	//	Kiem tra mau va so luong mau nen

	for (int i = 0; i < n; i++)
	{
		if (Wb[i]->GetMauNen() != 0)
		{
			Mau[Wb[i]->GetMauNen()] = 1;
		}
	}
	
	//	Kiem tra danh sach mau 

	for (int i = 0; i < 13; i++)
	{
		if (Mau[i] != 0)
		{
			DanhSachMau[SoLuongMau] = i;
 			SoLuongMau++;
		}
	}


	if (SoLuongMau == 1)
	{
		cout << "Mau nen cua tat ca thanh phan phoi mau don sac ";
	}
	else if (SoLuongMau == 2)
	{
		if (abs(DanhSachMau[0] - DanhSachMau[1]) == 6)
		{
			cout << "Mau nen cua tat ca thanh phan phoi mau truc tiep";
		}
	}
	else if (SoLuongMau == 3)
	{
		if (abs(DanhSachMau[0] - DanhSachMau[1]) == 1 && abs(DanhSachMau[2] - DanhSachMau[1]) == 1 && abs(DanhSachMau[2] - DanhSachMau[0]) == 2)
		{
			cout << "Mau nen cua tat ca thanh phan phoi mau tuong dong ";
		}
	}
	else
	{
		cout << "Mau nen khong phoi mau theo bat ki nguyen tac nao ";
	}

	
	return 0;
}