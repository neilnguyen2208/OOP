
#include <iostream>
#include <string>
using namespace std;
class Bao
{
private:
    int maBao, soBanPhatHanh, ngay, thang, nam, index;
    string tenBao, tenNhaXuatBan;

public:
    Bao();
    Bao(string, string, int, int, int, int, int, int);
    //Copy constructor
    Bao(const Bao &n);
    bool date(int, int, int);
    void nhap(int n, Bao arr[]);
    void xuat(int n, Bao arr[]);
    ~Bao();
};

Bao::Bao()
{
}
Bao::Bao(string a, string b, int c, int d, int e, int f, int g, int h)
{
    tenBao = a;
    tenNhaXuatBan = b;
    maBao = c;
    soBanPhatHanh = d;
    ngay = e;
    thang = f;
    nam = g;
    index = h;
}
Bao::Bao(const Bao &n)
{
    tenBao = n.tenBao;
    tenNhaXuatBan = n.tenNhaXuatBan;
    maBao = n.maBao;
    soBanPhatHanh = n.soBanPhatHanh;
    ngay = n.ngay;
    thang = n.thang;
    nam = n.nam;
}
bool Bao::date(int ngay, int thang, int nam)
{
    int ngaymax;
    if (nam < 0 || thang < 0 || thang > 12 || ngay < 0 || ngay > 31)
    {
        return false;
    }
    else
    {
        switch (thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            ngaymax = 31;
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                ngaymax = 29;
            else
                ngaymax = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            ngaymax = 30;
            break;
        }
        if (ngay <= ngaymax)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
void Bao::nhap(int n, Bao arr[])
{
    for (int i = 0; i < n; i++)
    {
        bool check = false;
        fflush(stdin);
        cout << endl;
        cout << "Bao thu " << i + 1 << endl;
        cout << "Nhap ten Bao " << endl;
        cin >> arr[i].tenBao;
        cout << "Nhap ten nha xuat ban " << endl;
        cin >> arr[i].tenNhaXuatBan;
        cout << "Nhap ma Bao " << endl;
        cin >> arr[i].maBao;
        cout << "Nhap so ban phat hanh " << endl;
        cin >> arr[i].soBanPhatHanh;
        while (check == false)
        {
            cout << "Nhap ngay : " << endl;
            cin >> arr[i].ngay;
            cout << "Nhap thang : " << endl;
            cin >> arr[i].thang;
            cout << "Nhap nam : " << endl;
            cin >> arr[i].nam;

            if (date(arr[i].ngay, arr[i].thang, arr[i].nam) == true)
            {
                break;
            }
            else
            {
                cout << "Nhap sai dinh dang ngay thang, moi nhap lai" << endl;
            }
        }

        Bao(arr[i].tenBao, arr[i].tenNhaXuatBan, arr[i].maBao, arr[i].soBanPhatHanh, arr[i].ngay, arr[i].thang, arr[i].nam, i + 1);
    }
}
void Bao::xuat(int n, Bao arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Ten Bao thu " << i + 1 << ": " << arr[i].tenBao << endl;
        cout << "Ten nha xuat ban: " << arr[i].tenNhaXuatBan << endl;
        cout << "Ma Bao: " << arr[i].maBao << endl;
        cout << "So ban phat hanh: " << arr[i].soBanPhatHanh << endl;
        cout << "Ngay phat hanh: "
             << "Ngay " << arr[i].ngay << " Thang " << arr[i].thang << " nam " << arr[i].nam
             << endl;
    }
}
Bao::~Bao()
{
}