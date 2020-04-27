#include <iostream>
#include <string>
using namespace std;
class Human
{
private:
    int age;
    string name, sex;

public:
    Human();
    Human(string name, string sex, int age);
    void nhap();
    void xuat();
    ~Human();
};
Human::Human()
{
    cout << "Khoi tao class Human" << endl;
}
Human::Human(string name, string sex, int age)
{
    name = name;
    sex = sex;
    age = age;
}
void Human::nhap()
{
    cout << "Nhap ten" << endl;
    cin >> name;
    cout << endl
         << "Nhap gioi tinh";
    cin >> sex;
    cout << endl
         << "Nhap tuoi";
    cin >> age;
}
void Human::xuat()
{
    cout << "Ten " << name << endl
         << "Gioi tinh " << sex << endl
         << "So tuoi la " << age;
}

Human::~Human()
{
    cout << endl
         << "Destruct class Human";
}
