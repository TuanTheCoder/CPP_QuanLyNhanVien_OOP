#include "NhanVienCongNhat.h"
#include <iostream>
#include <string>

#include "NhanVienSanXuat.h"
#include "QuanLy.h"
using namespace  std;

NhanVienCongNhat::NhanVienCongNhat():NhanVien()
{
	QuanLy::SLCN++;
}

NhanVienCongNhat::NhanVienCongNhat(string iHoten, string iNgsinh, string iDiaChi, string iSDT) :NhanVien(iHoten, iNgsinh, iDiaChi, iSDT)
{
	QuanLy::SLCN++;
}
NhanVienCongNhat::~NhanVienCongNhat()
{
	_HoTen = "";
	_NgSinh = "";
	_DChi = "";
	_SDT = "";
}
double NhanVienCongNhat::TinhLuong()
{
	cout << "Nhap Ngay Cong:";
	int SoNgayCong = 0;
	cin >> SoNgayCong;
	return SoNgayCong * 70000;
}

void NhanVienCongNhat::Nhap()
{
	NhanVien::Nhap();
}
void NhanVienCongNhat::Xuat()
{
	NhanVien::Xuat();
}