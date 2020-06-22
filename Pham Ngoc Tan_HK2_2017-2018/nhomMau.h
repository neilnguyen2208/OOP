#pragma once
class nhomMau {
protected:
    string rh;
    string loaiMau;
public:
    void inp() {
        cout << "Nhap nhom mau: ";
        cin >> loaiMau;
        cout << "Nhap RH: ";
        cin >> rh;
    }
};
