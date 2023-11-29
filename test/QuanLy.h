#pragma once

#include "NhanVienQuanLy.h"
#include "NhanVienCongNhat.h"
#include "NhanVienSanXuat.h"

#define NVSX 1
#define NVCN 2
#define NVQL 3


const int MAX = 100;
using namespace std;

class QuanLy
{
private:
	int _SoLuongNhanVien;
	NhanVien* _ArrNhanVien[MAX];
public:
	static int SLSX; static int SLCN; static int SLQL;/*static int SLNV;*/
	QuanLy();
	QuanLy(int, NhanVien*Arr[MAX]);
	~QuanLy();
	void Nhap();
	void Xuat();
	void XuatThongTinNV();
	static void SoLuongNhanVien();
	//static void TongNhanVien();
	void TongLuong();
	void MaxLuong();
	void SapXepNV();

};

