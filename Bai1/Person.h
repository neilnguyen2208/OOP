#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    int age;
    string name, sex, address, phone;

public:
    Person();
    Person(string name, string sex, string address, string phone, int age);
    void nhap();
    void xuat();
    ~Person();
};
Person::Person()
{
    cout << "Khoi tao class Person" << endl;
}
Person::Person(string name, string sex, string address, string phone, int age)
{
    name = name;
    sex = sex;
    address = address;
    phone = phone;
    age = age;
}
void Person::nhap()
{
    cout << "Nhap ten" << endl;
    cin >> name;
    cout << endl
         << "Nhap gioi tinh";
    cin >> sex;
    cout << endl
         << "Nhap tuoi";
    cin >> age;
    cout << endl
         << "Nhap dia chi";
    cin >> address;
    cout << endl
         << "Nhap so dien thoai";
    cin >> phone;
}
void Person::xuat()
{
    cout << "Ten " << name << endl
         << "Gioi tinh " << sex << endl
         << "So tuoi la " << age << endl
         << "Dia chi la " << address << endl
         << "So dien thoai la " << address << endl;
}

Person::~Person()
{
    cout << endl
         << "Destruct class Person";
}
