#include "HocSinh.h"
#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

void Hoc_Sinh::Nhap()
{
    Doi_Tuong::Nhap();
    cout << " Nhap Lop cua Hoc Sinh:  ";
    cin >> Lop;
    cout << "\n";
}
void Hoc_Sinh::Xuat()
{
    cout << " ===== Thong Tin cua Hoc Sinh la: ===== \n";
    Doi_Tuong::Xuat();
    cout << "\t - Lop cua Hoc Sinh la:  ";
    cout << Lop;
    cout << "\n";
}