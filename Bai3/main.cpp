#include "Sach.h"
#include "TapChi.h"
#include "Bao.h"
int main()
{
    int n, m, k;
    cout << "Nhap so luong Sach" << endl;
    cin >> n;
    cout << "Nhap so luong Tap Chi " << endl;
    cin >> m;
    cout << "Nhap so luong Bao " << endl;
    cin >> k;
    static int count = m + n + k;
    Sach a;
    TapChi b;
    Bao c;
    Sach *arr1 = new Sach[n];
    TapChi *arr2 = new TapChi[m];
    Bao *arr3 = new Bao[k];

    if (n > 0)
        a.nhap(n, arr1);
    if (m > 0)
        b.nhap(m, arr2);
    if (k > 0)
        c.nhap(k, arr3);

    a.xuat(n, arr1);
    b.xuat(m, arr2);
    c.xuat(k, arr3);
    cout << "Sach day nhat la " << Sach::maxName << " voi so trang la " << Sach::maxPage << " trang" << endl;
    cout << "So Sach la: " << n << endl;
    cout << "So Tap Chi la: " << m << endl;
    cout << "So Bao la: " << k << endl;
    cout << "Tong so luong Sach, Tap Chi, Bao la: " << count << endl;
    cout << "Tong so luong tac gia sach: " << Sach::count << endl;
    delete[] arr1, arr2, arr3;
    return 0;
}
