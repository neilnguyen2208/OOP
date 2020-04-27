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
void Nhap(Diem x[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout << "\nDiem " << i;
        cout << "\n Nhap  x: ";
        cin >> x[i].toaDoX;
        cout << "\n Nhap  y: ";
        cin >> x[i].toaDoY;
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
    cin >> n;
    Diem *p = nullptr;
    p = new Diem[n];
    Nhap(p, n);
    FindMax(p, n);
    delete[] p;

}