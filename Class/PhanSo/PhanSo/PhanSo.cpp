#include<iostream>
#include "PhanSo.h"
#include<math.h>
using namespace std;

PhanSo::PhanSo() {
    tuSo = 0;
    mauSo = 1;
}
void PhanSo::RutGon() {
    int ucln;
    int a = abs(tuSo);
    int b = abs(mauSo);
    //Neu tu so = 0 thi xuat ra 0 o ham Xuat
    if (tuSo == 0 ) {
        ucln = 1;
    }
    else {
        while (a != b) {
            if (a > b) {
                a -= b;
            }
            else
            {
                b -= a;
            }
        }
        ucln = a;
    }
    tuSo /= ucln;
    mauSo /= ucln;
}
PhanSo PhanSo::Cong(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
    res.mauSo = a.mauSo * b.mauSo;
    res.RutGon();
    return res;
}
PhanSo PhanSo::Tru(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tuSo = a.tuSo * b.mauSo - b.tuSo * a.mauSo;
    res.mauSo = a.mauSo * b.mauSo;
    res.RutGon();
    return res;
}
PhanSo PhanSo::Nhan(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tuSo = a.tuSo * b.tuSo;
    res.mauSo = a.mauSo * b.mauSo;
    res.RutGon();
    return res;
}
PhanSo PhanSo::Chia(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tuSo = a.tuSo * b.mauSo;
    res.mauSo = a.mauSo * b.tuSo;
    res.RutGon();
    return res;
}
void PhanSo::Xuat() {
    if (tuSo == 0)
        cout << 0 << "\n";
    else
        if (mauSo == 0)
            cout << "PhanSo khong xac dinh" << "\n";
        else
            cout << tuSo << "/" << mauSo << " " << endl;
}
void PhanSo::Nhap() {
    cout << "--- Nhap PhanSo \n";
    cout << "- tuSo = ";
    cin >> tuSo;
    cout << "\n";
    cout << "- mauSo = ";
    cin >> mauSo;
    cout << "\n";
}
PhanSo::~PhanSo() {
}