#include "CH.h"
#include "TG.h"
using namespace std;
int main()
{
    int stt = 1;
    int sttXuat = 1;
    int tongSoLuong = 0;
    int luongLonNhat = 0;
    string maxName = "";
    int soGioQuyDinh, luongThuong;
    cout << "Moi nhap luong thuong cho giang vien Co Huu" << endl;
    cin >> luongThuong;
    cout << "Nhap so gio quy dinh chung trong thang (so gio quy dinh khong duoc be hon 40)" << endl;
    cin >> soGioQuyDinh;
    if (soGioQuyDinh < 40)
    {
        cout << "Moi nhap lai so gio quy dinh, so gio quy dinh phai >= 40" << endl;
        cin >> soGioQuyDinh;
    }
    int n;
    cout << "Moi nhap so luong giang vien Co Huu" << endl;
    cin >> n;
    int k;
    cout << "Moi nhap so luong giang vien Thinh Giang" << endl;
    cin >> k;
    CH *ch = new CH[n];
    TG *tg = new TG[k];
    if (n > 0)
    {
        for (int i = 0; i < n; i++, stt++)
        {
            cout << "Giang vien thu " << stt << " cua cong ty" << endl;
            cout << "Ban dang nhap giang vien Co Huu thu " << i + 1 << endl;
            ch[i].nhap();
            cout << endl;
        }
    }
    else
    {
        cout << "Khong co giang vien Co Huu nao" << endl;
    }
    if (k > 0)
    {
        for (int i = 0; i < k; i++, stt++)
        {
            cout << "Giang vien thu " << stt << " cua cong ty" << endl;
            cout << "Ban dang nhap giang vien Thinh Giang thu " << i + 1 << endl;
            tg[i].nhap();
            cout << endl;
        }
    }
    else
    {
        cout << "Khong co giang vien Thinh Giang nao" << endl;
    }
    // Xuất danh sách giảng viên Cơ Hữu
    for (int i = 0; i < n; i++, sttXuat++)
    {
        if (n > 0)
        {
            cout << "Giang vien thu " << sttXuat << " cua cong ty" << endl;
            cout << "Giang vien Co Huu thu " << i + 1 << endl;
            ch[i].xuat(soGioQuyDinh, luongThuong);
            CH::luongTB += ch[i].luongTong;
            tongSoLuong += ch[i].luongTong;
            if (ch[i].luongTong > luongLonNhat)
            {
                luongLonNhat = ch[i].luongTong;
                maxName = ch[i].maxName;
            }
            cout << endl;
        }
    }
    // Xuất danh sách giảng viên thỉnh giảng
    for (int i = 0; i < k; i++, sttXuat++)
    {
        if (k > 0)
        {
            cout << "Giang vien thu " << sttXuat << " cua cong ty" << endl;
            cout << "Giang vien Thinh giang thu " << i + 1 << endl;
            tg[i].xuat();
            tongSoLuong += tg[i].luongTong;
            if (tg[i].luongTong > luongLonNhat)
            {
                luongLonNhat = tg[i].luongTong;
                maxName = tg[i].maxName;
            }
            cout << endl;
        }
    }
    if (n > 0)
        cout << "Luong trung binh cua giang vien Co Huu la: " << CH::luongTB / n << endl;
    else
        cout << "Khong the tinh luong trung binh cua giang vien Co Huu vi khong co giang vien Co Huu nao" << endl;
    cout << "Tong so luong toan bo giang vien la: " << tongSoLuong << endl;
    cout << "Giang vien co tong luong cao nhat la: " << maxName << " voi tong so luong la " << luongLonNhat;
    delete[] ch, tg;
    return 0;
}
