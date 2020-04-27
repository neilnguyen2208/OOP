#include <iostream>
#pragma once
// g++ -o main main.cpp Time.h Time.cpp
// ./main
using namespace std;

class Time
{
private:
    int gio;
    int phut;
    int giay;

public:
    Time()
    {
        gio = 0;
        phut = 0;
        giay = 0;
    };
    void Nhap();
    void Xuat()
    {
        cout << gio << " : " << phut << " : "
             << " : " << giay;
    };
};