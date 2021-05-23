#include "CongNhan.h"
#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

void Cong_Nhan::Nhap()
{
    Doi_Tuong::Nhap();
    cout << " Nhap Luong cua Cong Nhan:  ";
    cin >> Luong;
    cout << "\n";
}
void Cong_Nhan::Xuat()
{
    cout << " ===== Thong tin cua Cong Nhan la: ===== \n";
    Doi_Tuong::Xuat();
    cout << " Luong cua Cong Nhan la:  ";
    cout << Luong;
    cout << "\n";
}