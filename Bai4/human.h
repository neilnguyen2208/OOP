#include <iostream>
using namespace std;

class Human
{
protected:
    string hoTen, date;
    int luong = 0;

public:
    Human();
    void nhapInfo();
    void xuatInfo();
    ~Human();
};

class VanPhong : public Human

{
private:
    int luongCanBan = 0;
    int soSanPham = 0;
    int luongVanPhong;

public:
    void nhapInfo();
    void nhapVP();
    int calcLuongVanPhong();
};

class SanXuat : public Human
{
private:
    int soNgay = 0;
    int loaiNhanVien;
    int luongSanXuat;

public:
    void nhapInfo();
    void nhapSX();
    int calcLuongSanXuat();
};
Human::Human(/* args */)
{
    // cout << "human generated";
}
void Human::nhapInfo()
{
    int loaiNhanVien;
    cout << "Nhap thong tin nhan vien" << endl;
    cout << "Nhap ho ten nhan vien" << endl;
    cin >> hoTen;
    cout << "Nhap ngay sinh nhan vien " << endl;
    cin >> date;
}
void Human::xuatInfo()
{
    cout << "Thong tin cua nhan vien: " << endl;
    cout << "Ho va ten: " << hoTen << " Date " << date << " Luong la " << luong << endl;
}
Human::~Human()
{
    // cout << "human deconstructed";
}

void VanPhong::nhapVP()
{
    Human::nhapInfo();
    cout << "Luong can ban: " << endl;
    cin >> luongCanBan;
    cout << "Nhap so san pham: " << endl;
    cin >> soSanPham;
}
int VanPhong::calcLuongVanPhong()
{

    luongVanPhong = luongCanBan + soSanPham * 5000;
    return luongVanPhong;
}

void SanXuat::nhapSX()
{
    Human::nhapInfo();
    cout << "Nhap so ngay lam viec" << endl;
    cin >> soNgay;
}
int SanXuat::calcLuongSanXuat()
{
    luongSanXuat = soNgay * 100000;
    return luongSanXuat;
}