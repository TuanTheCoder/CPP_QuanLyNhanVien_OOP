#include "NhanVienSanXuat.h"
#include <iostream>
#include <string>

#include "QuanLy.h"
using namespace  std;

NhanVienSanXuat::NhanVienSanXuat() :NhanVien()
{
	QuanLy::SLSX++;
}
NhanVienSanXuat::NhanVienSanXuat(string iHoten, string iNgsinh, string iDiaChi, string iSDT):NhanVien(iHoten,iNgsinh,iDiaChi,iSDT)
{
	QuanLy::SLSX++;
}
NhanVienSanXuat::~NhanVienSanXuat()
{
	_HoTen = "";
	_NgSinh = "";
	_DChi = "";
	_SDT = "";

}
double NhanVienSanXuat::TinhLuong()
{
	cout << "Nhap so San pham: ";
	int SoSanPham = 0;
	cin >> SoSanPham;
	return SoSanPham * 3000;
}

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();
}
void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();
}