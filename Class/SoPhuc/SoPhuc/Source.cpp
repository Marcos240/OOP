#include<iostream>
#include "SoPhuc.h"
using namespace std;
int main() {
    SoPhuc sp1, sp2, sp3, sp4(1, 1);
    sp1.Nhap();
    sp2.Nhap();
    cout << "So phuc 1: ";
    sp1.Xuat();
    cout << "So phuc 2: ";
    sp2.Xuat();
    cout << "So phuc 3 (default contructor): ";
    sp3.Xuat();
    cout << "So phuc 4 (contructor with paramater 1,1 ): ";
    sp4.Xuat();
    SoPhuc tong, hieu, tich, thuong;
    //cong hai so phuc
    cout << ". sp1 + sp2 = ";
    tong.Cong(sp1, sp2);
    tong.Xuat();
    //tru hai so phuc
    cout << ". sp1 - sp2 = ";
    hieu.Tru(sp1, sp2);
    hieu.Xuat();
    //Nhan hai so phuc
    cout << ". sp1 * sp2 = ";
    tich.Nhan(sp1, sp2);
    tich.Xuat();
    //Chia hai so phuc
    cout << ". sp1 / sp2 = ";
    thuong.Chia(sp1, sp2);
    thuong.Xuat();
    return 0;
}