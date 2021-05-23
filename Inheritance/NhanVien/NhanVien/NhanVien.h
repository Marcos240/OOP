#pragma once
#include <iostream>
using namespace std;
class Nhan_Vien
{
protected:
    string Ho_Ten;
    string Ngay_Sinh;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual double Tinh_Luong();
    double Tong_Luong(int& n, Nhan_Vien* a[]);
    void NV_Luong_Cao_Thap_Nhat(int n, Nhan_Vien* a[]);
};


