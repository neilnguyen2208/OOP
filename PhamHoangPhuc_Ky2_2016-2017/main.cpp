#include "Button.h"
#include "Label.h"
#include "Component.h"

bool checkBoTuc(int a, int b)
{
    if (abs(a - b) == 6)
        return true;
    return false;
}
int main()
{
    int n = 0;
    cout << "Nhap so luong thanh phan" << endl;
    cin >> n;
    Component **a = new Component *[n];
    for (int i = 0; i < n; i++)
    {
        int loai = 0;
        cout << "Label.1 Button.2" << endl;
        cin >> loai;
        if (loai == 1)
        {
            a[i] = new Label;
            a[i]->nhap();
        }
        if (loai == 2)
        {
            a[i] = new Button;
            a[i]->nhap();
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Thanh phan thu " << i + 1 << " ";
        a[i]->xuat();
    }
    bool check = true;

    //b. Thanh phan dau tien co phoi mau bo tuc khong
    checkBoTuc(a[0]->getMauNen(), a[0]->getMauText());
    
    //c. Cac thanh phan co thuoc phuong phap phoi mau nao khong

    // Mau Don sac
    for (int i = 0; i < n; i++)
    {
        if (a[0]->getMauNen() != a[i]->getMauNen())
        {
            check = false;
        }
    }
    if (check == true)
    {
        cout << "Thanh phan phoi mau don sac" << endl;
        return 0;
    }

    // Mau bo tuc
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
                if (checkBoTuc(a[i]->getMauNen(), a[j]->getMauNen()))
                {
                    cout << "Thanh phan phoi mau bo tuc";
                    check = true;
                    return 0;
                }
        }
    }

    // Mau tuong dong
    if (!check)
    {
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n)
            {
                if (a[i]->getMauNen() + 1 == a[i + 1]->getMauNen() && a[i + 1]->getMauNen() + 1 == a[i + 2]->getMauNen())
                {
                    cout << "Thanh phan phoi mau tuong dong";
                    check = true;
                    break;
                }
                if (a[i]->getMauNen() == 11 && a[i + 1]->getMauNen() == 12 && a[i + 2]->getMauNen() == 1)
                {
                    cout << "Thanh phan phoi mau tuong dong";
                    check = true;
                    break;
                }
            }
        }
    }
    if (check == true)
    {
        return 0;
    }
    else
    {
        cout << "Thanh phan khong thuoc phuong phap phoi mau nao";
    }
}
// 