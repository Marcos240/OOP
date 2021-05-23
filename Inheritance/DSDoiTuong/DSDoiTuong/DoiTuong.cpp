#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

void Doi_Tuong::Nhap()
{
    cout << " Nhap Ho Ten cua Doi Tuong:  ";
    cin.ignore();
    getline(cin, Ho_Ten);
    cout << "\n";
    cout << " Nhap Ngay Sinh cua Doi Tuong:  ";
    cin.ignore();
    getline(cin, Ngay_Sinh);
    cout << "\n";
}
void Doi_Tuong::Xuat()
{
    cout << "\t - Ho Ten cua Doi Tuong la:  ";
    cout << Ho_Ten;
    cout << "\n";
    cout << "\t - Ngay Sinh cua Doi Tuong la:  ";
    cout << Ngay_Sinh;
    cout << "\n";
}