
#include <iostream>
#include <string>
using namespace std;
class TapChi
{
private:
    int maTapChi, soBanPhatHanh, soPhatHanh, thang, nam, index;
    string tenTapChi, tenNhaXuatBan;

public:
    TapChi();
    TapChi(string, string, int, int, int, int, int, int);
    //Copy constructor
    TapChi(const TapChi &n);
    bool date(int, int);
    void nhap(int n, TapChi arr[]);
    void xuat(int n, TapChi arr[]);
    ~TapChi();
};

TapChi::TapChi()
{
}
TapChi::TapChi(string a, string b, int c, int d, int e, int f, int g, int h)
{
    tenTapChi = a;
    tenNhaXuatBan = b;
    maTapChi = c;
    soBanPhatHanh = d;
    soPhatHanh = e;
    thang = f;
    nam = g;
    index = h;
}
TapChi::TapChi(const TapChi &n)
{
    tenTapChi = n.tenTapChi;
    tenNhaXuatBan = n.tenNhaXuatBan;
    maTapChi = n.maTapChi;
    soBanPhatHanh = n.soBanPhatHanh;
    soPhatHanh = n.soPhatHanh;
    thang = n.thang;
    nam = n.nam;
    index = n.index;
}
bool TapChi::date(int thang, int nam)
{
    if (thang > 0 && thang <= 12 && nam > 0)
        return true;
    return false;
}
void TapChi::nhap(int n, TapChi arr[])
{
    for (int i = 0; i < n; i++)
    {
        bool check = false;
        fflush(stdin);
        cout << endl;
        cout << "Tap chi thu " << i + 1 << endl;
        cout << "Nhap ten Tap Chi " << endl;
        cin >> arr[i].tenTapChi;
        cout << "Nhap ten nha xuat ban " << endl;
        cin >> arr[i].tenNhaXuatBan;
        cout << "Nhap ma Tap Chi " << endl;
        cin >> arr[i].maTapChi;
        cout << "Nhap so ban phat hanh " << endl;
        cin >> arr[i].soBanPhatHanh;
        cout << "Nhap so phat hanh " << endl;
        cin >> arr[i].soPhatHanh;
        while (check == false)
        {
            cout << "Nhap thang : " << endl;
            cin >> arr[i].thang;
            cout << "Nhap nam : " << endl;
            cin >> arr[i].nam;
            if (date(arr[i].thang, arr[i].nam) == true)
            {
                break;
            }
            else
            {
                cout << "Nhap sai dinh dang thang, nam moi nhap lai" << endl;
            }
        }

        TapChi(arr[i].tenTapChi, arr[i].tenNhaXuatBan, arr[i].maTapChi, arr[i].soBanPhatHanh, arr[i].soPhatHanh, arr[i].thang, arr[i].nam, i + 1);
    }

}
void TapChi::xuat(int n, TapChi arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Ten Tap Chi thu " << i + 1 << ": " << tenTapChi << endl;
        cout << "Ten nha xuat ban: " << arr[i].tenNhaXuatBan << endl;
        cout << "Ma Tap Chi: " << arr[i].maTapChi << endl;
        cout << "So phat hanh: " << arr[i].soPhatHanh << endl;
        cout << "So ban phat hanh: " << arr[i].soBanPhatHanh << endl;
        cout << "Thang phat hanh: "
             << "Thang " << arr[i].thang << " nam " << arr[i].nam
             << endl;
    }
}
TapChi::~TapChi()
{
}