#include <iostream>
#include "Diem.h"
#include "DaGiac.h"
using namespace std;
int main() {
	DaGiac dg;
	cout << "default \n";
	dg.XuatDG();
	cout << "\n";
	dg.NhapDG();
	dg.TinhTienDG(1,1); //tinh tien 1, 1
	dg.XuatDG();
	cout << "\nDa giac sau khi quay 1 goc 30 do la: \n";
	dg.QuayDG(30);
	dg.XuatDG();
	cout << "\nDa giac sau khi thu phong gap 2 lan la: \n";
	dg.ThuPhong(2);
	dg.XuatDG();
	return 0;
}