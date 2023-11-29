#pragma once
#include "NhanVien.h"

class NhanVienQuanLy :
    public NhanVien
{
public:
    NhanVienQuanLy();
    NhanVienQuanLy(string,string,string,string);
    ~NhanVienQuanLy();
    void Nhap();
    void Xuat();
    double TinhLuong();
};


