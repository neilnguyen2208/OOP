
#include <iostream>

using namespace std;

#include "Object.h"
#include"NguoiChoi.h"
#include"QuaiVat.h"

void Nhap(Object* List[] ,int &n) {

	int input, i = 0;
	string s;

	while(1)
	{ 
		while (1)
		{
			system("cls");// clear man hinh
			cout << "===================<INPUT>===================";
			cout << "\nChon doi tuong muon nhap (Quaivat:0, NguoiChoi:1)";
			cin >> input;
			if (input == 1) {
				List[i] = new NguoiChoi();
				break;
			}
			else if (input == 0)
			{
				List[i] = new QuaiVat();
				break;
			}
		}

		system("cls");// clear man hinh
		cout << "===================<INPUT>===================";
		cout << "\nID: " << i;

		if (input == 1)
			cout << "\nNhap nguoi choi: \n";
		else
			cout << "\nNhap quai vat: \n";

		List[i]->nhap();

		cout << "Do you want to continue ? (y/n): ";
		cin >> s;

		if (s == "n") {
			break;
		}
		i++;
	}
		
	n = i;
}

void Xuat(Object* List[], int n)
{
	system("cls");
	int i = 0;

	cout << "===================<OUTPUT>===================";
	cout << "\nDanh sach cac phan tu trong game:\n ";

	while (i<=n)
	{
		cout << "ID: " << i;
		List[i]->xuat();
		i++;
	}
}
void MaxDamageInList(Object* List[], int n) {
	double max = 0;
	int pos = 0;

	for (int i = 0; i <= n; i++)
	{
		double temp = List[i]->getDamage();
		if (temp > max)
		{
			max = temp;
			pos = i;
		}

	}
	cout << "\n=================================";
	cout << "\nPhan tu co sat thuong cao nhat la: " << List[pos]->getTen();
	cout << "\nVoi muc sat thuong: " << List[pos]->getDamage();
	cout << "\n=================================";
}

int main()
{
	Object* List[1000]; 
	int n = 1;

	Nhap(List,n);
	//List[0] = new NguoiChoi("King",10,NgaMy);
	//List[1] = new QuaiVat("Monsterx",8,Hoa,1);

	Xuat(List, n);
	MaxDamageInList(List,n);
	
	int x, y;
	cout << "\nChon 2 phan tu bat ki de so sanh sat thuong (theo ID):";
	cin >> x >> y;

	List[x]->solo(List[y]);
}