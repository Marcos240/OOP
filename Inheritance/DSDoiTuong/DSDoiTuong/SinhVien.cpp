#include "SinhVien.h"
#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

void Sinh_Vien::Nhap()
{
    Doi_Tuong::Nhap();
    cout << " Nhap Ma So Sinh Vien: ";
    cin >> MSSV;
    cout << "\n";
}
void Sinh_Vien::Xuat()
{
    cout << " ===== Thong Tin Sinh Vien ===== \n";
    Doi_Tuong::Xuat();
    cout << "\t - Ma So Sinh Vien la:  ";
    cout << MSSV;
    cout << "\n";
}