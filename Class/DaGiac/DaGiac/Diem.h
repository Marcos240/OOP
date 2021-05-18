#pragma once
class Diem
{
private:
	double x;
	double y;
public:
	Diem();
	void Nhap();
	void Xuat();
	void SetX(double a);
	void SetY(double b);
	double GetX();
	double GetY();
	void TinhTien(double dx, double dy);
	~Diem();
};

