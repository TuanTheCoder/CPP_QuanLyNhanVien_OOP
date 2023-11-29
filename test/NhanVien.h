#pragma once
#include  <string>
using namespace std;

class NhanVien
{
protected:
	string _HoTen;
	string _NgSinh;
	string _DChi;
	string _SDT;

public:
	NhanVien();
	NhanVien(string, string, string, string);
	virtual void Nhap();
	virtual void Xuat();
	virtual ~NhanVien();
	virtual  double TinhLuong();
};

