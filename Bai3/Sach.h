#include <iostream>
#include <string>
using namespace std;
class Sach
{
private:
    int maSach, soTrang, soBanPhatHanh, index;
    string tenSach, tenTacGia, tenNhaXuatBan;

public:
    static int count, maxPage;
    static string maxName;
    Sach();
    Sach(string, string, string, int, int, int, int);
    //Copy constructor
    Sach(const Sach &n);
    void nhap(int n, Sach arr[]);
    void xuat(int n, Sach arr[]);
    ~Sach();
};
int Sach::count = 0;
int Sach::maxPage = 0;
string Sach::maxName = "";
Sach::Sach()
{
}
Sach::Sach(string a, string b, string c, int d, int e, int f, int g)
{
    tenSach = a;
    tenTacGia = b;
    tenNhaXuatBan = c;
    maSach = d;
    soTrang = e;
    soBanPhatHanh = f;
    index = g;
}
Sach::Sach(const Sach &n)
{
    tenSach = n.tenSach;
    tenTacGia = n.tenTacGia;
    tenNhaXuatBan = n.tenNhaXuatBan;
    maSach = n.maSach;
    soTrang = n.soTrang;
    soBanPhatHanh = n.soBanPhatHanh;
    index = n.index;
}
void Sach::nhap(int n, Sach arr[])
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << endl;
        cout << "Sach thu " << i + 1 << endl;
        cout << "Nhap ten sach " << endl;
        cin >> arr[i].tenSach;
        cout << "Nhap ten tac gia " << endl;
        cin >> arr[i].tenTacGia;
        Sach::count++;
        cout << "Nhap ten nha xuat ban " << endl;
        cin >> arr[i].tenNhaXuatBan;
        cout << "Nhap ma sach " << endl;
        cin >> arr[i].maSach;
        cout << "Nhap so trang " << endl;
        cin >> arr[i].soTrang;
        if (arr[i].soTrang > maxPage)
        {
            maxPage = arr[i].soTrang;
            maxName = arr[i].tenSach;
        }
        cout << "Nhap so ban phat hanh " << endl;
        cin >> arr[i].soBanPhatHanh;
        Sach(arr[i].tenSach, arr[i].tenTacGia, arr[i].tenNhaXuatBan, arr[i].maSach, arr[i].soTrang, arr[i].soBanPhatHanh, i + 1);
    }
}
void Sach::xuat(int n, Sach arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Ten Sach thu " << i + 1 << ": " << tenSach << endl;
        cout << "Ten tac gia: " << arr[i].tenTacGia << endl;
        cout << "Ten nha xuat ban: " << arr[i].tenNhaXuatBan << endl;
        cout << "Ma sach: " << arr[i].maSach << endl;
        cout << "So trang: " << arr[i].soTrang << endl;
        cout << "So ban phat hanh: " << arr[i].soBanPhatHanh << endl;
    }
}
Sach::~Sach()
{
}