#include "QuanLy.h"
#include <iostream>
#include <string>
using namespace std;

int QuanLy::SLSX = 0;
int QuanLy::SLCN = 0;
int QuanLy::SLQL = 0;
//int QuanLy::SLNV = 0;

void QuanLy::SoLuongNhanVien()
{
	cout << "So luong NVSX: " << SLSX << endl;
	cout << "So luong NVCN: " << SLCN << endl;
	cout << "So luong NVQL: " << SLQL << endl;
}

//void QuanLy::TongNhanVien()
//{
//	cout << "Tong so luong NV: " << SLNV << endl;
//}


QuanLy::QuanLy()
{
	_SoLuongNhanVien = 0;
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		_ArrNhanVien[i] = nullptr;
	}
}

QuanLy::QuanLy(int iSoLuongNhanVien, NhanVien* iArrNhanVien[MAX])
{
	_SoLuongNhanVien = iSoLuongNhanVien;
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		_ArrNhanVien[i] = iArrNhanVien[i];
	}
}

QuanLy::~QuanLy()
{
	_SoLuongNhanVien = 0;
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		_ArrNhanVien[i] = nullptr;
	}
}

void QuanLy::Nhap()
{
	cout << "Nhap SL Nhan Vien:";
	cin >> _SoLuongNhanVien;
	int LoaiNV;
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		do
		{
			cout << "Nhap Loai NV:";
			cin >> LoaiNV;
			cin.ignore(1);
		}
		while (LoaiNV < 1 || LoaiNV > 3);

		if (LoaiNV == NVSX)
		{
			_ArrNhanVien[i] = new NhanVienSanXuat;
		}
		else if (LoaiNV == NVCN)
		{
			_ArrNhanVien[i] = new NhanVienCongNhat;
		}
		else if (LoaiNV == NVQL)
		{
			_ArrNhanVien[i] = new NhanVienQuanLy;
		}
		_ArrNhanVien[i]->Nhap();
	}
}

void QuanLy::Xuat()
{
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		cout << "STT NV:" << i << endl;
		_ArrNhanVien[i]->Xuat();
	}
}

void QuanLy::XuatThongTinNV()
{
	int MaSoNV;
	do
	{
		cout << "Nhap STT NV:";
		cin >> MaSoNV;
		cin.ignore(1);
	}
	while (MaSoNV < 0 || MaSoNV >= _SoLuongNhanVien);
	_ArrNhanVien[MaSoNV]->Xuat();
}

void QuanLy::TongLuong()
{
	double TongLuong = 0;
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		TongLuong += _ArrNhanVien[i]->TinhLuong();
	}
	cout << "Tong luong ca cong ty la: " << TongLuong << endl;
}

void QuanLy::MaxLuong()
{
	double _TienLuong[MAX];
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		_TienLuong[i] = _ArrNhanVien[i]->TinhLuong();
	}

	double maxLuong = _TienLuong[0];
	int MaSoNV = 0;
	for (int i = 1; i < _SoLuongNhanVien - 1; i++)
	{
		if (maxLuong < _TienLuong [i])
		{
			maxLuong = _TienLuong[i];
			MaSoNV = i;
		}
	}

	cout << "NV co tien luong lon nhat la: "; 
	_ArrNhanVien[MaSoNV]->Xuat();
	cout << "Tien luong lon nhat la: " << maxLuong<< endl;

}

void  QuanLy::SapXepNV()
{
	double _TienLuong[MAX];
	for (int i = 0; i < _SoLuongNhanVien; i++)
	{
		_TienLuong[i] = _ArrNhanVien[i]->TinhLuong();
	}

	
	for (int i = 0; i < _SoLuongNhanVien - 1; i++)
	{
		for (int j = i+1; j < _SoLuongNhanVien ; j++)
		{
			if (_TienLuong[i] > _TienLuong[j])
			{
				swap(_TienLuong[i], _TienLuong[j]);
				swap(_ArrNhanVien[i], _ArrNhanVien[j]);
			}
		}
	}

	QuanLy::Xuat();
}
