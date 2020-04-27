#include <iostream>
#include <string>
using namespace std;
class TG
{
private:
    int soGioGiangDay;
    string name, email, office, address, phone;

public:
    static int luongTong;
    static string maxName;
    TG();
    TG(int, string, string, string, string, string);
    void nhap();
    void xuat();
    ~TG();
};

TG::TG()
{
    cout << "Khoi tao class giang vien thinh giang" << endl;
}
int TG::luongTong = 0;
string TG::maxName = "";
TG::TG(int soGioGiangDay, string name, string email, string office, string address, string phone)
{
    soGioGiangDay = soGioGiangDay;
    name = name;
    email = email;
    office = office;
    address = address;
    phone = phone;
}
void TG::nhap()
{
    fflush(stdin);
    cout << "Nhap ten" << endl;
    cin >> name;
    cout << "Nhap email" << endl;
    cin >> email;
    cout << "Nhap co quan lam viec hien tai" << endl;
    cin >> office;
    cout << "Nhap dia chi" << endl;
    cin >> address;
    cout << "Nhap so dien thoai" << endl;
    cin >> phone;
    cout << "Nhap so gio giang day trong thang" << endl;
    cin >> soGioGiangDay;
    TG::maxName = name;
}
void TG::xuat()
{
    cout << "Ten giang vien: " << name << endl;
    cout << "Loai giang vien: Giang vien Thinh Giang" << endl;
    cout << "Email cua giang vien: " << email << endl;
    cout << "Noi lam viec hien tai cua giang vien:" << office << endl;
    cout << "Dia chi giang vien: " << address << endl;
    cout << "So dien thoai giang vien: " << phone << endl;
    cout << "So gio giang day cua giang vien: " << soGioGiangDay << endl;
    TG::luongTong = soGioGiangDay * 100000;
    cout << "Luong tong cua giang vien la: " << TG::luongTong << endl;
}
TG::~TG()
{
}
