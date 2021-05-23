#include "CaSi.h"
#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

void Ca_Si::Nhap()
{
    Doi_Tuong::Nhap();
    cout << " Nhap The Loai cua Ca Si (VD: Bolero, Rock, Nhac Tre, ... ): ";
    cin.ignore();
    getline(cin, The_Loai);
    cout << "\n";
}
void Ca_Si::Xuat()
{
    cout << " ===== Thong Tin cua Ca Si la: ===== \n";
    Doi_Tuong::Xuat();
    cout << "\t - The Loai cua Ca Si la:  ";
    cout << The_Loai;
    cout << "\n";
}