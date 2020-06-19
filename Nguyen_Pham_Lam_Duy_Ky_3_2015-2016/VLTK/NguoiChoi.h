#pragma once
#include "Object.h"
#include "MonPhai.h"

class NguoiChoi:public Object
{
	private:
		MonPhai phai;
	public:
		NguoiChoi();
		NguoiChoi(string, int, Phai);
		//get
		int getMonPhai();
		//set
		void setMonPhai(Phai);
		void setDamage();
		void setElement(Phai);
		// input, output
		void nhap();
		void xuat();
};

