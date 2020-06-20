#include "Personality.h"

Personality::Personality() {
	yeuTo = '\0';
	chiSo = 0;
}
void Personality::Nhap() {

}
void Personality::Xuat() {

}
int Personality::GetChiSo() {
	return chiSo;
}
Personality::Personality(const string& _yeuto) {
	yeuTo = _yeuto;
}
Personality::Personality(const int& _chiso) {
	chiSo = _chiso;
}
Personality::~Personality() {

}