#include<iostream>
#include "SoPhuc.h"
#include<cmath>
using namespace std;

SoPhuc::SoPhuc() {
    thuc = ao = 0;
}
SoPhuc::SoPhuc(double t, double a) {
    thuc = t;
    ao = a;
}
SoPhuc::~SoPhuc() {
}
void SoPhuc::Nhap() {
    cout << "--- Nhap SoPhuc \n";
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}
void SoPhuc::Xuat() {
    cout << thuc << ((ao >= 0) ? " + " : " - ") << abs(ao) << "i" << endl;
}
void SoPhuc::Cong(SoPhuc sp1, SoPhuc sp2) {
    this->thuc = sp1.thuc + sp2.thuc;
    this->ao = sp1.ao + sp2.ao;
}
void SoPhuc::Tru(SoPhuc sp1, SoPhuc sp2) {
    this->thuc = sp1.thuc - sp2.thuc;
    this->ao = sp1.ao - sp2.ao;
}
void SoPhuc::Nhan(SoPhuc sp1, SoPhuc sp2) {
    this->thuc = sp1.thuc * sp2.thuc - sp2.ao * sp1.ao;
    this->ao = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;
}
void SoPhuc::Chia(SoPhuc sp1, SoPhuc sp2) {
    this->thuc = (sp1.thuc * sp2.thuc + sp1.ao * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
    this->ao = (sp2.thuc * sp1.ao - sp1.thuc * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
}