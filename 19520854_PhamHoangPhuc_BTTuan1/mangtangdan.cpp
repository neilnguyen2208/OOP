#include <iostream>
using namespace std;
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu " << i << ": ";
        cin >> a[i];
    }
}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}
void HoanVi(int &x, int &y)
{
    int q = x;
    x = y;
    y = q;
}
void Sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
        }
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    NhapMang(a, n);
    Sort(a, n);
    XuatMang(a, n);

    cout << endl;
}