#include "NhanVien.h"
#include "NVVanPhong.h"
#include "NVSanXuat.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cout << " Nhap so luong Nhan Vien: ";
    cin >> n;
    cout << "\n";
    cout << " ===== Nhap danh sach Nhan Vien: =====  \n";
    Nhan_Vien** a = new Nhan_Vien * [n];
    for (int i = 0; i < n; i++)
    {
        cout << "\t - Nhap 1 neu la Nhan Vien Van Phong \n";
        cout << "\t - Nhap 2 neu la Nhan Vien San Xuat \n";
        cin >> k;
        if (k == 1)
            a[i] = new NV_Van_Phong;
        else
            a[i] = new NV_San_Xuat;
        a[i]->Nhap();
    }
    cout << " ======= Thong Tin cac Nhan Vien la ======= \n\n";
    for (int i = 0; i < n; i++)
    {
        a[i]->Xuat();
    }
    Nhan_Vien b;
    cout << "******** Tong Luong phai tra cho Nhan Vien la:  ";
    cout << b.Tong_Luong(n, a);
    cout << " \n\n ";
    b.NV_Luong_Cao_Thap_Nhat(n, a);
    return 0;
}