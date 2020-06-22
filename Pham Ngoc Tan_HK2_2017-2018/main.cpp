#include <iostream>
#include <string>
#include "nhomMau.h"
#include "conNguoi.h"
using namespace std;

int main() {
    //a
    int soLuong;
    cout << "Nhap so luong nhom mau: ";
    cin >> soLuong;
    conNguoi human[1000001];
    for (int i = 0; i < soLuong; ++i)
        human[i].inp();

    //b
    string ba, me, con;
    cout << "Nhap nhom mau cua ba: " << endl;
    cin >> ba;
    cout << "Nhap nhom mau cua me: " << endl;
    cin >> me;
    cout << "Nhap nhom mau cua con: " << endl;
    cin >> con;
    if (con == "O") {
        //Tất cả trường hợp con là nhóm máu AB đều trả về kết quả là đúng
        //Chỉ trừ trường hợp tồn tại kháng nguyên AB
        if (ba == "AB" || me == "AB") 
            cout << "False" << endl;
        else
            cout << "True" << endl;
    }
    else if (con == "AB"){
        //phải xuất hiện 2 kháng nguyên đơn A và B trong máu của ba và mẹ thì mới tạo ra được AB cho con
        //nghĩa là A + B || B + A chứ k thể 2 kháng nguyên đơn cùng hợp 
        if (((ba == "A" && me == "B") || (ba == "B" && me == "A")) && (ba != me))
            cout << "True" << endl;
        //chỉ cần 1 trong 2 người có kháng nguyên AB và không người nào tồn tại kháng nguyên O
        else if ((ba == "AB" || me == "AB") && (ba != "O" && me != "O"))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    else if (con == "A") {
        //chỉ cần tồn tại kháng nguyên A trong máu thì sẽ tạo ra được kháng nguyên A cho con
        if (ba == "A" || me == "A" || ba == "AB" || me == "AB")
            cout << "True" << endl;
        //Tất cả trường hợp còn lại đều sai
        else
            cout << "False" << endl;
    }
    else {
        //Tương tự với trường hợp 3
        if (ba == "B" || me == "B" || ba == "AB" || me == "AB")
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
       


    //c
    cout << "Nhap so thu tu cua nguoi trong danh sach: ";
    int x;
    scanf("%d", &x);
    cout << "Nhung nguoi co the cho mau nguoi X la: " << endl;
    for (int i = 0; i < soLuong; ++i)
        if (human[i].checkLoaiMau(human[x]) == 1 && human[i].checkRH(human[x]) == 1)
            cout << "Nguoi thu " << i << " trong danh sach." << endl;

}
