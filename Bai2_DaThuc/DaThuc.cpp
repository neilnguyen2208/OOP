#include "DaThuc.h"
void DaThuc::KTDaThuc(int n)
{
	a = new int[n];
}
void DaThuc::Nhap()
{
	cout << "Nhap vao bac: ";
	cin >> n;

	KTDaThuc(n);

	for (int i = 0; i < n; i++)
	{
		cout << "He so a" << i << ": ";
		cin >> a[i];
	}
}
void DaThuc::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i];
			if (i >0) {
				cout << ".x^" << i;
			}
			if (i != n - 1)
				cout << "+";
		}
	}
}
long DaThuc::GiaTriDaThuc(int x)
{
	long tong=0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[i] * pow(x, i);
	}
	return tong;
}
DaThuc DaThuc::operator+(DaThuc b)
{
	DaThuc c;
	c.n = n;
	if (b.n > c.n)
		c.n = b.n;

	c.KTDaThuc(c.n);

	for (int i = 0; i < c.n; i++)
	{
		if (i > n - 1)
			c.a[i] = b.a[i];
		if (i > b.n - 1)
			c.a[i] = a[i];
		if(i < n && i < b.n)
			c.a[i] = b.a[i] + a[i];
	}

	return c;
}
DaThuc DaThuc::operator-(DaThuc b)
{
	DaThuc c;
	c.n = n;
	if (b.n > c.n)
		c.n = b.n;

	c.KTDaThuc(c.n);

	for (int i = 0; i < c.n; i++)
	{
		if (i > n - 1)
			c.a[i] = b.a[i];
		if (i > b.n - 1)
			c.a[i] = a[i];
		if (i < n && i < b.n)
			c.a[i] = a[i] - b.a[i];
	}

	return c;
}