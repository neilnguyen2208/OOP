#include "Component.h"

class Button : public Component
{
public:
    Button();
    ~Button();
    void nhap();
};
// 
Button::Button()
{
}
void Button::nhap()
{
    int n;
    cout << "Co nhap Hinh anh khong? 0.Co 1.Khong";
    cin >> n;
    if (n == 0)
    {
        text = "";
        mauText = 0;
        mauNen = 0;
    }
    if (n == 1)
    {
        cout << "Nhap button" << endl;
        Component::nhap();
    }
}
Button::~Button()
{
}