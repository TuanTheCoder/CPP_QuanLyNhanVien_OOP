#include "NhanVienQuanLy.h"
#include <iostream>
#include <string>

#include "QuanLy.h"
using namespace  std;

NhanVienQuanLy::NhanVienQuanLy():NhanVien()
{
	QuanLy::SLQL++;
}
NhanVienQuanLy::NhanVienQuanLy(string iHoten, string iNgsinh, string iDiaChi, string iSDT) :NhanVien(iHoten, iNgsinh, iDiaChi, iSDT)
{
	QuanLy::SLQL++;
}
NhanVienQuanLy::~NhanVienQuanLy()
{
	_HoTen = "";
	_NgSinh = "";
	_DChi = "";
	_SDT = "";
}
double NhanVienQuanLy::TinhLuong()
{
	double LuongCoBan = 0, HeSoLuong = 0;
	cout << "Nhap Luong Co Ban:";
	cin >> LuongCoBan;
	cout << "Nhap He So Luong:";
	cin >> HeSoLuong;
	return LuongCoBan * HeSoLuong;
}


void NhanVienQuanLy::Nhap()
{
	NhanVien::Nhap();
}
void NhanVienQuanLy::Xuat()
{
	NhanVien::Xuat();
}