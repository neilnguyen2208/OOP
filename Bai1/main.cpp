#include "Human.h"
#include "Person.h"
using namespace std;
int main()
{
    int n;
    Human a;
    Person b;
    cout << "Moi ban chon Human - 1 hoac Person - 2" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        a.nhap();
        a.xuat();
        break;
    case 2:
        b.nhap();
        b.xuat();
        break;

    default:
        break;
    }

    return 0;
}
