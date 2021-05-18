#pragma once
#include "Diem.h"
#include <iostream>
using namespace std;
class DaGiac
{
private:
	int size;
	Diem* arrPoint;
public:
	DaGiac();
	void NhapDG();
	void XuatDG();
	void TinhTienDG(double a, double b);
	void QuayDG(double goc);
	void ThuPhong(double k);
	~DaGiac();
};

