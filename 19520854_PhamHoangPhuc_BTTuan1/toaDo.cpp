#include <iostream>
#include <cmath>

using namespace std;

struct Diem
{
    int toaDoX;
    int toaDoY;
};
struct TwoPoints
{
    int toaDoXMot;
    int toaDoYMot;
    int toaDoXHai;
    int toaDoYHai;
};

void SetDiem(struct Diem &toaDo, int trucHoanh, int trucTung)
{
    toaDo.toaDoX = trucHoanh; 
    toaDo.toaDoY = trucTung; 
}
void Nhap(struct Diem Diem[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            cout << "\nDiem " << i;
            cout << "\n Nhap toa do x: ";
            cin >> Diem[i].toaDoX;
            cout << "\n Nhap toa do y: ";
            cin >> Diem[i].toaDoY;
            SetDiem(Diem[i], Diem[i].toaDoX, Diem[i].toaDoY);
        }
        if (i % 3 == 1)
        {
            cout << "\nDiem " << i;
            cout << "\n Nhap toa do x: ";
            cin >> Diem[i].toaDoX;
            SetDiem(Diem[i], Diem[i].toaDoX, Diem[i].toaDoY = 0);
        }
        if (i % 3 == 2)
        {
            cout << "\nDiem " << i;
            SetDiem(Diem[i], Diem[i].toaDoX = 0, Diem[i].toaDoY = 0);
        }
    }
}
void Xuat(Diem Diem[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << "\n Diem " << i << " x = " << Diem[i].toaDoX << " y = " << Diem[i].toaDoY;
        i++;
    }
}
void FindMax(Diem P[], int n)
{
    float Max = 0;
    TwoPoints D;
    float Distance = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            Distance = sqrt(pow(P[j].toaDoX - P[i].toaDoX, 2) + pow(P[j].toaDoY - P[i].toaDoY, 2));
            if (Max < Distance)
            {
                Max = Distance;
                D.toaDoXMot = P[i].toaDoX;
                D.toaDoYMot = P[i].toaDoY;
                D.toaDoXHai = P[j].toaDoX;
                D.toaDoYHai = P[j].toaDoY;
            }
        }
    }
    cout << "\n toa X1 la :" << D.toaDoXMot;
    cout << endl
         << "toa Y1 la :" << D.toaDoYMot;
    cout << endl
         << "toa X2 la :" << D.toaDoXHai;
    cout << endl
         << "toa Y2 la:" << D.toaDoYHai;
}
int main()
{
    int n;
    cout << "Nhap vao so luong diem ";
    cin >> n;

    Diem *p = nullptr;
    p = new Diem[n];
    Nhap(p, n);
    Xuat(p, n);
    FindMax(p, n);

    delete[] p;

    system("pause");
    return 0;
}