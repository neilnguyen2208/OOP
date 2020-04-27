#include <iostream>
#include <string>
using namespace std;
class CH
{
private:
    int soGioGiangDay, luongThoaThuan, soGioQuyDinh;
    string name, email, address, phone;

public:
    static int luongTB, luongTong;
    static string maxName;
    CH();
    CH(int, int, int, string, string, string, string);
    void nhap();
    void xuat(int soGioQuyDinh, int luongThuong);
    ~CH();
};

CH::CH()
{
    cout << "Khoi tao class giang vien co huu" << endl;
}
int CH::luongTong = 0;
int CH::luongTB = 0;
string CH::maxName = "";
CH::CH(int soGioGiangDay, int luongThoaThuan, int soGioQuyDinh, string name, string email, string address, string phone)
{
    soGioGiangDay = soGioGiangDay;
    luongThoaThuan = luongThoaThuan;
    soGioQuyDinh = soGioQuyDinh;
    name = name;
    email = email;
    address = address;
    phone = phone;
}
void CH::nhap()
{
    fflush(stdin);
    cout << "Nhap ten" << endl;
    cin >> name;
    cout << "Nhap email" << endl;
    cin >> email;
    cout << "Nhap dia chi" << endl;
    cin >> address;
    cout << "Nhap so dien thoai" << endl;
    cin >> phone;
    cout << "Nhap luong thoa thuan quy dinh" << endl;
    cin >> luongThoaThuan;
    cout << "Nhap so gio giang day trong thang" << endl;
    cin >> soGioGiangDay;
    CH::maxName = name;
}
void CH::xuat(int soGioQuyDinh, int luongThuong)
{
    cout << "Ten giang vien: " << name << endl;
    cout << "Loai giang vien: Giang vien Co Huu" << endl;
    cout << "Email cua giang vien: " << email << endl;
    cout << "Dia chi giang vien: " << address << endl;
    cout << "So dien thoai giang vien: " << phone << endl;
    cout << "Luong thoa thuan cua giang vien: " << luongThoaThuan << endl;
    cout << "So gio giang day cua giang vien: " << soGioGiangDay << endl;
    if (soGioGiangDay > soGioQuyDinh)
    {
        cout << "Giang vien DUOC luong thuong do so gio giang day lon hon so gio giang day quy dinh chung la " << soGioQuyDinh << endl;
        CH::luongTong = luongThoaThuan + luongThuong;
    }
    else
    {
        cout << "Giang vien KHONG DUOC luong thuong do so gio giang day it hon so gio giang day quy dinh chung la " << soGioQuyDinh << endl;
        ;
        CH::luongTong = luongThoaThuan;
    }
    cout << "Luong tong cua giang vien la: " << CH::luongTong << endl;
}
CH::~CH()
{
}
