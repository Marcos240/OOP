#include "NVVanPhong.h"
#include <iostream>
#include <string>
using namespace std;

void NV_Van_Phong::Nhap()
{
    Nhan_Vien::Nhap();
    cout << " Nhap so Ngay Lam Viec cua Nhan Vien Van Phong:  ";
    cin >> Ngay_Lam_Viec;
    cout << "\n";
}
void NV_Van_Phong::Xuat()
{
    cout << " === Thong Tin Nhan Vien Van Phong ===  \n";
    Nhan_Vien::Xuat();
    cout << "\t - Luong cua Nhan_Vien Van Phong la: ";
    cout << Ngay_Lam_Viec * 100000;
    cout << "\n";
}
double NV_Van_Phong::Tinh_Luong()
{
    return Ngay_Lam_Viec * 100000;
}