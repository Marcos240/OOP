#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;

void Nhan_Vien::Nhap()
{
    cout << " Nhap Ho Ten cua Nhan Vien:  ";
    cin.ignore();
    getline(cin, Ho_Ten);
    cout << "\n";
    cout << "Nhap Ngay Sinh cua Nhan Vien:  ";
    cin >> Ngay_Sinh;
    cout << "\n";
}
void Nhan_Vien::Xuat()
{
    cout << "\t - Ho Ten cua Nhan Vien la: ";
    cout << Ho_Ten;
    cout << "\n";
    cout << "\t - Ngay Sinh cua Nhan Vien la: ";
    cout << Ngay_Sinh;
    cout << "\n";
}
double Nhan_Vien::Tong_Luong(int& n, Nhan_Vien* a[])
{
    double s = 0;
    for (int i = 0; i < n; i++)
        s += a[i]->Tinh_Luong();
    return s;
}
void Nhan_Vien::NV_Luong_Cao_Thap_Nhat(int n, Nhan_Vien* a[])
{
    double Luong_Thap_Nhat, Luong_Cao_Nhat;
    Nhan_Vien* Thap_Nhat = a[0], * Cao_Nhat = a[0];
    Luong_Thap_Nhat = a[0]->Tinh_Luong();
    Luong_Cao_Nhat = a[0]->Tinh_Luong();
    for (int i = 1; i < n; i++)
    {
        if (a[i]->Tinh_Luong() > Luong_Cao_Nhat)
        {
            Luong_Cao_Nhat = a[i]->Tinh_Luong();
            Cao_Nhat = a[i];
        }
        if (a[i]->Tinh_Luong() < Luong_Thap_Nhat)
        {
            Luong_Thap_Nhat = a[i]->Tinh_Luong();
            Thap_Nhat = a[i];
        }
    }
    cout << "******* Nhan Vien co luong cao nhat la: \n\n";
    Cao_Nhat->Xuat();
    cout << " \n ";
    cout << "******* Nhan Vien co luong thap nhat la: \n\n";
    Thap_Nhat->Xuat();
    cout << " \n ";
}
double Nhan_Vien::Tinh_Luong()
{
    return 0;
}
