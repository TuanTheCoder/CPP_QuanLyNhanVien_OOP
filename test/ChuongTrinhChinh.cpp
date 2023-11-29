#include "QuanLy.h"
#include <iostream>
#include <string>

using namespace  std;
int main()
{
	//NhanVien* nv = new NhanVienSanXuat;
	//nv->Nhap();
	//nv->Xuat();
	//cout<<"Luong: "<<nv->TinhLuong()<<endl;
	//cin.ignore(1);

	//nv = new NhanVienQuanLy;
	//nv->Nhap();
	//nv->Xuat();
	//cout << "Luong: " << nv->TinhLuong() << endl;
	//cin.ignore(1);

	//nv = new NhanVienCongNhat;
	//nv->Nhap();
	//nv->Xuat();
	//cout << "Luong: " << nv->TinhLuong() << endl;
	//cin.ignore(1);

	QuanLy* CaoThang = new QuanLy;
	CaoThang->Nhap();
	QuanLy::SoLuongNhanVien();
	//QuanLy::TongNhanVien();
	CaoThang->Xuat();
	CaoThang->XuatThongTinNV();
	CaoThang->TongLuong();
	CaoThang->MaxLuong();
	CaoThang->SapXepNV();

	return 0;
}