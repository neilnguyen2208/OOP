#include <iostream>
#include <math.h>
using namespace std;
// Khai báo struct Phân số
// ================PHÂN SỐ================
typedef struct PHANSO
{
    int tu;
    int mau;
} PHANSO;
// Nhập phân số
int Nhap(PHANSO &P)
{
    cout << "Nhap tu so";
    cin >> P.tu;
    cout << "Nhap mau so";
    cin >> P.mau;
}
// Xuất phân số
int Xuat(PHANSO &P)
{
    cout << P.tu << "/" << P.mau;
}

// ================DANH SÁCH PHÂN SỐ================
//Danh sách phân số -ở đây là 2 nhưng tập cấp phát động
typedef struct DanhSach
{
    PHANSO max;
    PHANSO *arr; // khai báo mảng động chứa phân số
    int n;       // so luong phan so
} DANHSACH;
int NhapDanhSach(DANHSACH &ds)
{
    for (int i = 0; i < ds.n; i++)
    {
        cout << "\nNhap phan so thu " << i + 1 << endl;
        // gọi lại hàm nhập 1 phân số để nhập giá trị
        Nhap(ds.arr[i]);
    }
}
int XuatDanhSach(DANHSACH &ds)
{
    for (int i = 0; i < ds.n; i++)
    {
        cout << "\n phan so thu " << i + 1 << endl;
        // gọi lại hàm xuất  1 phân số để xuất giá trị
        Xuat(ds.arr[i]);
    }
}
//tim UCLN theo thuat toan
int UCLN(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
        {
            b -= a;
        }
    }
    return a;
}
// Rút gọn phân số bằng cách lấy tử và mẫu chia ucln của tử mẫu
int RutGon(PHANSO &p)
{
    int ucln = UCLN(p.tu, p.mau);
    p.tu = p.tu / ucln;
    p.mau = p.mau / ucln;
}
// xuất danh sách rút gọn phân số, tập cấp phát động
int RutGonDanhSach(DANHSACH &ds)
{
    for (int i = 0; i < ds.n; i++)
    {
        RutGon(ds.arr[i]);
    }
}
int MaxPHANSO(DANHSACH &ds)
{
    int tu = ds.max.tu;
    int mau = ds.max.mau;
    for (int i = 0; i < ds.n; i++)
    {
        tu = ds.arr[0].tu;
        mau = ds.arr[0].mau;
        if ((tu / mau) < (ds.arr[i].tu / ds.arr[i].mau))
        {
            tu = ds.arr[i].tu;
            mau = ds.arr[i].mau;
        }
    }
    cout << tu << "/" << mau;
}
PHANSO TinhTong2PHANSO(PHANSO x, PHANSO y)
{
    PHANSO ketqua;
    if (x.mau != y.mau)
    {
        ketqua.tu = (x.tu * y.mau) + (y.tu * x.mau);
        ketqua.mau = x.mau * y.mau;
    }
    else
    {
        ketqua.tu = x.tu + y.tu;
        ketqua.mau = x.mau;
    }
    return ketqua;
}
PHANSO TinhThuong2PHANSO(PHANSO x, PHANSO y)
{
    int temp;
    PHANSO ketqua;
    if (x.mau == 0 || y.mau == 0)
    {
        cout << "Mau so phai khac 0";
    }
    else
    {

        ketqua.tu = x.tu * y.mau;
        ketqua.mau = x.mau * y.tu;
    }
    return ketqua;
}
PHANSO TinhTongTatCaPHANSO(DanhSach ds)
{

    PHANSO ketqua = ds.arr[0];

    for (int i = 1; i < ds.n; i++)
    {
        ketqua = TinhTong2PHANSO(ketqua, ds.arr[i]);
    }

    return ketqua;
}
PHANSO TinhThuongTatCa2PhanSo(DanhSach ds)
{
    PHANSO ketqua = ds.arr[0];
    for (int i = 1; i < ds.n; i++)
    {
        ketqua = TinhThuong2PHANSO(ketqua, ds.arr[i]);
    }
    return ketqua;
}

int main()
{
    DANHSACH ds;
    cout << "Nhap so luong ps";
    cin >> ds.n;
    ds.arr = new PHANSO[ds.n]; // cấp phát mảng động
    cout << "Nhap danh sach phan so";
    NhapDanhSach(ds);
    cout << "Xuat danh sach phan so";
    XuatDanhSach(ds);
    cout << "\n Danh sach phan so sau khi rut gon";
    RutGonDanhSach(ds);
    XuatDanhSach(ds);
    cout << "\n Phan so lon nhat la";
    MaxPHANSO(ds);

    cout << "\n\n\n\t\t TONG TAT CA CAC PHAN SO\n"; // ở đây là 2
    PHANSO ketqua;
    ketqua = TinhTongTatCaPHANSO(ds);
    RutGon(ketqua);
    Xuat(ketqua);

    cout << "\n\n\n\t\t THUONG TAT CA CAC PHAN SO\n"; // ở đây là 2
    ketqua = TinhThuongTatCa2PhanSo(ds);
    RutGon(ketqua);
    Xuat(ketqua);
}