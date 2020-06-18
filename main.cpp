#include <iostream>
#include <string>
#include "nhomMau.h"
#include "conNguoi.h"
#include "cacLoaiMau.h"
using namespace std;

int main() {
    int soLuong;
    nhomMau *nguoi;
    scanf("%d", &soLuong);
    for (int i = 0; i < soLuong; ++i)
        nguoi[i].nhapRH();
 
}
