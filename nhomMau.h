



#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class nhomMau{
public:
    enum mau{NHOMMAU, O, A, B, AB};
protected:
    string rh;
    string loaiMau;
public:
    virtual string blood() {
        return "";
    }
    virtual void nhapRH() {
        //cout << "Nhap nhom mau: ";
        /*cout << "O: 1, A: 2, B: 3, AB: 4" << endl;
        cin >> loaiMau;*/
        string s;
        cin >> s;
        
        cout << "Nhap RH: ";
        cin >> rh;
    }
 
};
