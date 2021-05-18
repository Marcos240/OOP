#include "DaGiac.h"
#include "Diem.h"
#include <iostream>
#define PI 3.1416
using namespace std;

DaGiac::DaGiac() {
	size = 3;
	arrPoint = new Diem[3];
	arrPoint[0].SetX(1);
	arrPoint[0].SetY(2);
	arrPoint[1].SetX(-2);
	arrPoint[1].SetY(2);
	arrPoint[2].SetX(1);
	arrPoint[2].SetY(-2);
}
void DaGiac::NhapDG() {
	do {
		cout << "Nhap so dinh cua da giac: \n";
		cin >> size;
	} 	while (size < 3);
	arrPoint = new Diem[size];
	for (int i = 0; i < size; i++)
	{
		arrPoint[i].Nhap();
	}
}

void DaGiac::XuatDG() {
	cout << "Cac dinh cua da giac lan luot la: \n";
	for (int i = 0; i < size; i++)
	{
		arrPoint[i].Xuat();
	}
}

void DaGiac::TinhTienDG(double a, double b) {
	for (int i = 0; i < size; i++)
	{
		arrPoint[i].TinhTien(a,b);
	}
}
void DaGiac::QuayDG(double goc) {
	goc = goc * PI / 180;
	for (int i = 0; i < size; i++) {
		int a = this->arrPoint[i].GetX();
		int b = this->arrPoint[i].GetY();
		this->arrPoint[i].SetX(a * cos(goc) - b * sin(goc));
		this->arrPoint[i].SetY(a * sin(goc) + b * cos(goc));
	}
}
void DaGiac::ThuPhong(double k) {
	for (int i = 0; i < size; i++) {
		this->arrPoint[i].SetX(this->arrPoint[i].GetX() * k);
		this->arrPoint[i].SetY(this->arrPoint[i].GetY() * k);
	}
}

DaGiac::~DaGiac() {
	if (arrPoint != NULL)
	{
		delete[]arrPoint;
		cout << "Da xoa vung nho cap phat";
	}
}

