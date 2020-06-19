#pragma once

enum He { Kim,Moc,Thuy,Hoa,Tho };

class Nguhanh
{
private:
	He Name;
	He Sinh;
	He Khac;
public:
	int getSinh(); 
	int getKhac();
	int getNguHanh();

	void setNguHanh(He);
	void setSinh(He);
	void setKhac(He);
};

