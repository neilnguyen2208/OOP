
#include "SoPhuc.h"


// #include <iostream>

// using namespace std;

// class SoPhuc{
// private:
//     int PhanThuc;
//     int PhanAo;
// public:
//     SoPhuc();
//     SoPhuc(int, int);
//     int SetThuc();
//     int SetAo();
//     void Xuat(){
//         cout << PhanThuc << " + " << PhanAo << "i" << endl;
//     }
//     SoPhuc Cong(SoPhuc, SoPhuc);
//     ~SoPhuc();
// };
SoPhuc::SoPhuc(int Thuc, int Ao){
    PhanThuc = Thuc;
    PhanAo = Ao;
}
SoPhuc SoPhuc::Cong(SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.PhanThuc = a.PhanThuc + b.PhanThuc;
    c.PhanAo = a.PhanAo + b.PhanAo;
    return c;
}
SoPhuc::SoPhuc(){
    PhanThuc = 2;
    PhanAo = 3;
}
SoPhuc::~SoPhuc(){

}

// int main()
// {
//     SoPhuc a;
//     SoPhuc b,c;
//    a = a.Cong(b, c);
//    a.Xuat();
// }