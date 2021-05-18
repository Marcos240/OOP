#pragma once
#include <string>
#include <string.h>
using namespace std;
class Candidate
{
private:
	int MS;
	string ten;
	string ngaySinh;
	float diemToan, diemVan, diemAnh;
public:
	Candidate();
	void Nhap();
	void Xuat();
	int KiemTra();
};