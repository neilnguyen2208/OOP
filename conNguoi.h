


#pragma once
#include <iostream>
using namespace std;
class conNguoi : public nhomMau{
protected:
    int soLuong;
    nhomMau *nguoi;
public:
    void inp() {
        scanf("%d", &soLuong);
        for (int i = 0; i < soLuong; ++i)
            nguoi[i].nhapRH();
    }
    
    bool checkLoaiMau(conNguoi taker) {
        if (loaiMau    == "O")
            return 1;
        else if (loaiMau == "A" && (taker.loaiMau == "A" || taker.loaiMau == "AB"))
            return 1;
        else if (loaiMau == "B" && (taker.loaiMau == "B" || taker.loaiMau == "AB"))
            return 1;
        else if (loaiMau == "AB" && taker.loaiMau == "AB")
            return 1;
        return 0;
    }
    
    bool checkRH(conNguoi taker) {
        if (rh == "+")
            return 1;
        else
            return 0;
    }
 
};
