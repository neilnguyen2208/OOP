#include "Component.h"

class Label : public Component
{
public:
    Label();
    ~Label();
    void nhap();
};
Label::Label()
{
}
void Label::nhap()
{
    cout << "Nhap label" << endl;
    Component::nhap();
}

Label::~Label()
{
}