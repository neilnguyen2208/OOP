#include<iostream>
#include<string>
#include"KyHieu.h"
#include"NotNhac.h"
#include"DauLang.h"
using namespace std;
int main()
{
	int n;
	cout << "Nhap so not nhac: ";
	cin >> n;
	KyHieu* a[100];
	for (int i = 0; i < n; i++)
	{
		//Nhập dạng C(enter)1/2
		string temp;
		getline(cin, temp);
		if (temp[0] == 'Z')
			a[i] = new DauLang();
		else
			a[i] = new NotNhac();
		a[i]->Nhap();
	}
}