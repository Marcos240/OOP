#include "NgheSy.h"
#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

void Nghe_Sy::Nhap()
{
    Doi_Tuong::Nhap();
    cout << " Nhap nganh cua Nghe Sy (VD: Am nhac, Van hoc, ... ):  ";
    cin.ignore();
    getline(cin, Nganh);
    cout << "\n";
}
void Nghe_Sy::Xuat()
{
    cout << " ===== Thong tin cua Nghe Sy la: ===== \n";
    Doi_Tuong::Xuat();
    cout << "\t - Nganh cua Nghe Sy la:  ";
    cout << Nganh;
    cout << "\n";
}