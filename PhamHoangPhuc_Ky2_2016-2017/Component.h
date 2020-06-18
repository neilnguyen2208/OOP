#include <iostream>
#pragma once
using namespace std;

class Component
{
protected:
    string text;
    int mauText;
    int mauNen;
// 
public:
    Component(/* args */);
    virtual int getMauText()
    {
        return mauText;
    }
    virtual int getMauNen()
    {
        return mauNen;
    }
    virtual string getText()
    {
        return text;
    }
    virtual void nhap();
    void xuat();
    virtual ~Component();
};

Component::Component(/* args */)
{
}
void Component::nhap()
{
    cout << "Nhap mau text tu 1 -> 12" << endl;
    cin >> mauText;
    cout << "Nhap mau nen tu 1 -> 12" << endl;
    cin >> mauNen;
}
void Component::xuat()
{
    cout << "Mau chu la " << mauText << " Mau nen la " << mauNen << endl;
}
Component::~Component()
{
}
