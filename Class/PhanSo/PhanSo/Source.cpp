#include<iostream>
#include "PhanSo.h"
using namespace std;
int main() {
    PhanSo ps1, ps2, ps3, tong, hieu, tich, thuong;
    ps1.Nhap();
    ps2.Nhap();
    cout << "Gia tri ps1 la: \n";
    ps1.Xuat();
    cout << "Gia tri ps2 la: \n";
    ps2.Xuat();
    cout << "Gia tri ps3 (default contructor) la: \n";
    ps3.Xuat();
    cout << "- ps1 + ps2 = ";
    tong = tong.Cong(ps1, ps2);
    tong.Xuat();
    cout << "- ps1 - ps2 = ";
    hieu = hieu.Tru(ps1, ps2);
    hieu.Xuat();
    cout << "- ps1 * ps2 = ";
    tich = tich.Nhan(ps1, ps2);
    tich.Xuat();
    cout << "- ps1 / ps2 = ";
    thuong = thuong.Chia(ps1, ps2);
    thuong.Xuat();
    return 0;
}