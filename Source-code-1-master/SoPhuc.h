//#pragma once
#include <iostream>

using namespace std;

class SoPhuc{
private:
    int PhanThuc;
    int PhanAo;
public:
    SoPhuc();
    SoPhuc(int, int);
    int SetThuc();
    int SetAo();
    void Xuat(){
        cout << PhanThuc << " + " << PhanAo << "i" << endl;
    }
    SoPhuc Cong(SoPhuc, SoPhuc);
    ~SoPhuc();
};