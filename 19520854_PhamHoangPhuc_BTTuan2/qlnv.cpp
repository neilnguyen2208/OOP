// #include<iostream>
// #include<cstring>

// using namespace std;

// int main()
// {

// 	char Names[5][20];
// 	char c[20];

// 	for(int i =0 ; i <5;i++)
// 	{

// 	cout<<"Enter Your Desire Names: ";
// 	  cin>>Names[i];

// }
//    for(int i = 1 ; i < 5;i++)
//    {
//    	for(int j = 1 ; j <5;j++)
// 	   {
//    		if(strcmp(Names[j-1], Names[j])>0){
//    			strcpy(c , Names[j-1]);
//    			strcpy(Names[j-1] , Names[j]);
//    			strcpy(Names[j],c);
// 		   }
// 	   }
//    }
//    cout<<"sort abc là\n";
//    for(int i = 0 ; i <5;i++)
// {
//    		cout<<Names[i]<<"\n";
//    }
// }

#include <iostream>
#include <string.h>
using namespace std;

typedef struct NhanVien
{
    char MaNhanVien[8];
    char Ten[20];
    char PhongBan[10];
    int LuongCoBan;
    int Thuong;
    int ThucLanh;
} NHANVIEN;

void DocDuLieu(NHANVIEN Nv[], int &n)
{
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    { //nhập mã nhân viên
        cout << endl
             << "Nhap ma nhan vien: ";
        cin >> (Nv[i].MaNhanVien);
        //nhập Họ và tên
        cout << endl
             << "Nhap ho va ten nhan vien: ";
        cin >> (Nv[i].Ten);
        //nhập lượng phòng ban
        cout << endl
             << "Nhap phong ban cua nhan vien: ";
        cin >> (Nv[i].PhongBan);
        //nhập lượng cở bản
        cout << endl
             << "Nhap luong co ban cua nhan vien : ";
        cin >> Nv[i].LuongCoBan;
        cout << endl
             << "Nhap tien thuong cua nhan vien : ";
        cin >> Nv[i].Thuong;
        Nv[i].ThucLanh = Nv[i].LuongCoBan + Nv[i].Thuong;
    }
}
// in nhân viên lương thấp
void LuongThap(NHANVIEN Nv[], int n)
{
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (Min < Nv[i].LuongCoBan)
        {
            Min = Nv[i].LuongCoBan;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Min == Nv[i].LuongCoBan)
        {
            cout << Nv[i].LuongCoBan << " ";
        }
    }
}
// đếm số lượng nv thưởng >= 1200000
int Dem(NHANVIEN Nv[], int n)
{
    int Dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (Nv[i].Thuong >= 1200000)
        {
            Dem++;
        }
    }
    return Dem;
}

int TimMax(int a, int b)
{
    return (a > b) ? a : b;
}
// sắp xếp phòng ban  strcmp
void SapXepPhongBan(NHANVIEN Nv[], int n)
{
    int Max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Max < strlen(Nv[i].PhongBan))
            Max = strlen(Nv[i].PhongBan);
    }
    for (int ViTri = 0; ViTri < Max; ViTri++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(Nv[i].PhongBan, Nv[j].PhongBan) != 0)
                {
                    if (Nv[i].PhongBan[ViTri] != NULL && Nv[j].PhongBan[ViTri] != NULL)
                    {
                        if (int(Nv[i].PhongBan[ViTri]) > int(Nv[j].PhongBan[ViTri]))
                        {
                            if (int(Nv[i].PhongBan[ViTri - 1]) == int(Nv[j].PhongBan[ViTri - 1]))
                            {
                                swap(Nv[i].PhongBan, Nv[j].PhongBan);
                            }
                        }
                    }
                }
            }
        }
    }
}
//Sắp xếp mã nvien strcmp
void SapXepMaNhanVien(NHANVIEN Nv[], int n)
{
    int Max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Max < strlen(Nv[i].MaNhanVien))
            Max = strlen(Nv[i].MaNhanVien);
    }
    for (int ViTri = 0; ViTri < Max; ViTri++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (Nv[i].MaNhanVien[ViTri] != NULL && Nv[j].MaNhanVien[ViTri] != NULL)
                {
                    if (strcmp(Nv[i].PhongBan, Nv[j].PhongBan) != 0)
                    {
                        if (int(Nv[i].MaNhanVien[ViTri]) > int(Nv[j].MaNhanVien[ViTri]))
                        {
                            if (int(Nv[i].MaNhanVien[ViTri - 1]) == int(Nv[j].MaNhanVien[ViTri - 1]))
                            {
                                swap(Nv[i].MaNhanVien, Nv[j].MaNhanVien);
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    NHANVIEN Nv[100];
    int n;

    DocDuLieu(Nv, n);

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Thuc lanh cua nhan vien " << Nv[i].Ten << " la : " << Nv[i].ThucLanh << endl;
    }
    LuongThap(Nv, n);
    cout << "\n So Luong nhan vien co >= 1200000." << endl;
    cout << Dem(Nv, n);
    SapXepPhongBan(Nv, n);
    SapXepMaNhanVien(Nv, n);
    for (int i = 0; i < n; i++)
    {
        cout <<endl<< Nv[i].Ten << " Thuoc phong ban: " << Nv[i].PhongBan << endl;
    }
}