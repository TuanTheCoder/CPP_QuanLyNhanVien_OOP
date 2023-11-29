#pragma once
#include "NhanVien.h"
class NhanVienSanXuat :
    public NhanVien
{
public:
    NhanVienSanXuat();
    NhanVienSanXuat(string, string, string, string);
    ~NhanVienSanXuat();
   void Nhap();
    void Xuat();
    double TinhLuong();

};

