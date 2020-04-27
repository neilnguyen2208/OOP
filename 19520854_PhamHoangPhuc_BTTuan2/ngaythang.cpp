#include <iostream>
using namespace std;

typedef struct ThoiGian
{
    int Ngay;
    int Thang;
    int Nam;
} THOIGIAN;
//Hàm nhập
void Nhap(THOIGIAN &T)
{
    cout << "nhap ngay: ";
    cin >> T.Ngay;
    cout << endl
         << "nhap thang : ";
    cin >> T.Thang;
    cout << endl
         << "nhap nam : ";
    cin >> T.Nam;
    cout << endl;
}

int NamNhuan(int nam)
{
    // Kiểm tra bằng cách xem chia hết cho 4 và 400 không
    if ((nam % 4 == 0) && (nam % 400 == 0))
    {
        return 1;
    }
    else
    {
        if (nam % 100 == 0)
            return 0;
        if (nam % 4 == 0)
            return 1;
    }

    return 0;
}

// Tăng năm

THOIGIAN TangNam(THOIGIAN &T, int &ch)
{
    if (T.Ngay == 31 && T.Thang == 12)
    {
        T.Nam++;
        T.Thang = 1;
        T.Ngay = 1;
        ch++;
    }

    return T;
}

THOIGIAN TangThang(THOIGIAN &T, int &ch)
{
    if (T.Ngay == 31 && (T.Thang == 1 || T.Thang == 3 || T.Thang == 5 || T.Thang == 7 || T.Thang == 8 || T.Thang == 10 || T.Thang == 12))
    {
        T.Thang++;
        T.Ngay = 1;
        ch++;
        // qua tháng khác
    }
    if (T.Ngay == 30 && (T.Thang == 4 || T.Thang == 6 || T.Thang == 9 || T.Thang == 11))
    {
        T.Thang++;
        T.Ngay = 1;
        ch++;
        // qua tháng khác
    }

    return T;
}
// tăng ngày khi chưa cuối tháng

THOIGIAN TangNgay(THOIGIAN &T, int &ch)
{
    if (T.Ngay < 31 && (T.Thang == 1 || T.Thang == 3 || T.Thang == 5 || T.Thang == 7 || T.Thang == 8 || T.Thang == 10 || T.Thang == 12))
    {
        T.Ngay++;
    }
    if (T.Ngay < 30 && (T.Thang == 4 || T.Thang == 6 || T.Thang == 9 || T.Thang == 11))
    {
        T.Ngay++;
    }
    if ((NamNhuan(T.Nam) == 1) && T.Thang == 2 && T.Ngay < 29)
        T.Ngay++;
    // tháng 2
    if ((NamNhuan(T.Nam) == 0) && T.Thang == 2 && T.Ngay < 28)
        T.Ngay++;
    return T;
}
//Tìm ngày
THOIGIAN TimNgay(THOIGIAN &T, int &ch)
{
    if (NamNhuan(T.Nam) == 1)
    {
        if (T.Thang == 2 && T.Ngay == 29)
        {
            T.Ngay = 1;
            T.Thang++;
            // ngày 29/2
        }
        else
        {
            TangNam(T, ch);
            if (ch == 0)
                TangThang(T, ch);
            if (ch == 0)
                TangNgay(T, ch);
        }
    }
    else
    {
        if (T.Thang == 2 && T.Ngay == 28)
        {
            T.Thang++;
            T.Ngay = 1;
        }
        else
        {
            TangNam(T, ch);
            if (ch == 0)
                TangThang(T, ch);
            if (ch == 0)
                TangNgay(T, ch);
        }
    }
    return T;
}

int main()
{

    int ch = 0;
    THOIGIAN NgayHomNay;
    THOIGIAN NgayMai = TimNgay(NgayHomNay, ch);

    Nhap(NgayHomNay);

    cout << "Ngay ke tiep la : ";
    cout << NgayMai.Ngay << endl;
    cout << "Thang ke tiep la : ";
    cout << NgayMai.Thang << endl;
    cout << "Nam ke tiep la : ";
    cout << NgayMai.Nam;

    return 0;
}