#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem() {
	x = 0;
	y = 0;
}
void Diem::SetX(double a) {
	this->x = a;
}
void Diem::SetY(double b) {
	this->y = b;
}
double Diem::GetX() {
	return this->x;
}
double Diem::GetY() {
	return this->y;
}
void Diem::Nhap() {
	cout << "Nhap hoanh do: \n";
	cin >> x;
	cout << "Nhap tung do: \n";
	cin >> y;
}

void Diem::Xuat() {
	cout << "(" << x << "," << y << ")   ";
}

void Diem::TinhTien(double dx, double dy) {
	x += dx;
	y += dy;
}
Diem::~Diem() {

}