#include "NVSanXuat.h"
#include <iostream>
#include <string>
using namespace std;

void NV_San_Xuat::Nhap()
{
    Nhan_Vien::Nhap();
    cout << " Nhap Luong Co Ban cua Nhan Vien San Xuat: ";
    cin >> Luong_Co_Ban;
    cout << "\n";
    cout << " Nhap So San Pham cua Nhan Vien San Xuat: ";
    cin >> So_San_Pham;
    cout << "\n";
}
void NV_San_Xuat::Xuat()
{
    cout << " === Thong tin Nhan Vien San Xuat === \n";
    Nhan_Vien::Xuat();
    cout << "\t -Luong cua Nhan Vien San Xuat la: ";
    cout << Luong_Co_Ban + So_San_Pham * 5000;
    cout << "\n\n";
}
double NV_San_Xuat::Tinh_Luong()
{
    return Luong_Co_Ban + So_San_Pham * 5000;
}