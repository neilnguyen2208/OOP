#include "KyHieu.h"
KyHieu::KyHieu()
{
	TruongDo = 0;
	LaDauLang = false;
}
void KyHieu::Nhap()
{
	cin >> this->TruongDo;
}