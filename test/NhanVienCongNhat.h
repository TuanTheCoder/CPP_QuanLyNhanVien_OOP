#pragma once
#include "NhanVien.h"

class NhanVienCongNhat :
    public NhanVien
{

public:
    NhanVienCongNhat();
    NhanVienCongNhat(string, string, string, string);
    ~NhanVienCongNhat();
    void Nhap();
    void Xuat();
    double TinhLuong();
};

