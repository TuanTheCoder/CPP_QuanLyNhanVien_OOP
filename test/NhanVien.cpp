#include "NhanVien.h"
#include <iostream>
#include <string>

#include "QuanLy.h"
using namespace  std;


NhanVien::NhanVien()
{
	_HoTen = "";
	_NgSinh = "";
	_DChi = "";
	_SDT = "";
	/*QuanLy::SLNV++;*/
}

NhanVien::NhanVien(string iHoTen, string iNgSinh, string iDiaChi, string iSDT)
{
	_HoTen = iHoTen;
	_NgSinh = iNgSinh;
	_DChi = iDiaChi;
	_SDT = iSDT;
}
NhanVien::~NhanVien()
{
	_HoTen = "";
	_NgSinh = "";
	_DChi = "";
	_SDT = "";
}
double NhanVien::TinhLuong() 
{
	return -1;
}

void NhanVien::Nhap()
{
	cout << "Ten: ";
	getline(cin, _HoTen);
	cout << "Ngay Sinh: ";
	getline(cin, _NgSinh);
	cout << "Dia Chi: ";
	getline(cin, _DChi);
	cout << "SDT:";
	getline(cin, _SDT);
}
void NhanVien::Xuat()
{
	cout << _HoTen << endl;
	cout << _NgSinh << endl;
	cout << _DChi << endl;
	cout << _SDT << endl;
}