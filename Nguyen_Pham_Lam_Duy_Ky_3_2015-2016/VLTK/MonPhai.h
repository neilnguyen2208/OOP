#pragma once
enum Phai{ThienVuong,ThieuLam,NgaMy,ThuyYen,DuongMon,NguDoc,CaiBang,ThienNhan,VoDang,ConLon};

class MonPhai
{
private :
	Phai nPhai;
public:
	int getMonPhai();
	void setMonPhai(Phai x); 
};

