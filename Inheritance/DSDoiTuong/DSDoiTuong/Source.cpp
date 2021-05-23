#include "DoiTuong.h"
#include "CaSi.h"
#include "CongNhan.h"
#include "HocSinh.h"
#include "NgheSy.h"
#include "SinhVien.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n, k = 0;
    cout << " Nhap so luong Doi Tuong:  ";
    cin >> n;
    cout << "\n";
    Doi_Tuong** a = new Doi_Tuong * [n];
    for (int i = 0; i < n; i++)
    {
        cout << " Chon Doi Tuong nhap vao: \n ";
        cout << "\t - Nhap 1 neu Doi Tuong la Sinh Vien \n";
        cout << "\t - Nhap 2 neu Doi Tuong la Hoc Sinh \n";
        cout << "\t - Nhap 3 neu Doi Tuong la Cong Nhan \n";
        cout << "\t - Nhap 4 neu Doi Tuong la Nghe Si \n";
        cout << "\t - Nhap 5 neu Doi tuong la Ca Si \n";
        cin >> k;
        while (k < 1 || k > 5)
        {
            cout << " ***Doi Tuong ban nhap khog hop le, vui long nhap lai \n";
            cout << " Chon Doi Tuong nhap vao: \n ";
            cout << "\t - Nhap 1 neu Doi Tuong la Sinh Vien \n";
            cout << "\t - Nhap 2 neu Doi Tuong la Hoc Sinh \n";
            cout << "\t - Nhap 3 neu Doi Tuong la Cong Nhan \n";
            cout << "\t - Nhap 4 neu Doi Tuong la Nghe Si \n";
            cout << "\t - Nhap 5 neu Doi tuong la Ca Si \n";
            cin >> k;
        }

        if (k == 1)
            a[i] = new Sinh_Vien;
        if (k == 2)
            a[i] = new Hoc_Sinh;
        if (k == 3)
            a[i] = new Cong_Nhan;
        if (k == 4)
            a[i] = new Nghe_Sy;
        if (k == 5)
            a[i] = new Ca_Si;

        a[i]->Nhap();
    }
    cout << " ========== Thong Tin cua cac Doi Tuong la: ========= \n";
    for (int i = 0; i < n; i++)
        a[i]->Xuat();
    return 0;

}