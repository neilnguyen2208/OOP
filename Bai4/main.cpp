#include "human.h"
#include <vector>
int main()
{
    int n = 0;
    cout << "Nhap so luong nhan vien";
    cin >> n;
    Human **nv = new Human *[n];
    // vector<Human> **v = new vector<Human> *[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Nhap Loai nhan vien - 1 cho Van Phong 2 cho San Xuat" << endl;
        int loaiNhanVien;
        cin >> loaiNhanVien;
        switch (loaiNhanVien)
        {
        case 1:
        {
            cout << "Ban chon loai nhan vien Van Phong" << endl;
            nv[i] = new VanPhong();
            ((VanPhong *)nv[i])->nhapVP();
            ((VanPhong *)nv[i])->calcLuongVanPhong();
            break;
        }
        case 2:

        {
            cout << "Ban chon loai nhan vien San Xuat" << endl;
            nv[i] = new SanXuat();
            ((SanXuat *)nv[i])->nhapSX();
            ((SanXuat *)nv[i])->calcLuongSanXuat();
            break;
        }
        default:
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        nv[i] -> xuatInfo();
    }
}