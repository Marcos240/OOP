#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;

Candidate::Candidate() {
	MS = 18521585;
	ten = "Nguyen Xuan Tu";
	ngaySinh = "24/08/00";
	diemToan = 9;
	diemVan = 8;
	diemAnh = 7;
}
void Candidate::Nhap()
{
	cout << " Nhap MS Thi Sinh: \n";
	cin >> MS;	
	cout << " Nhap ten Thi Sinh: \n ";
	cin.ignore();
	getline(cin, ten);	
	cout << " Nhap Ngay Thang Nam sinh Thi Sinh: \n ";
	cin.ignore();
	getline(std::cin, ngaySinh);
	cout << " Nhap diem Toan, diem Van, diem Anh cua Thi Sinh theo thu tu:  \n";
	cin >> diemToan >> diemVan >> diemAnh;
}
int Candidate::KiemTra()
{
	return (diemAnh + diemToan + diemVan) > 15;

}
void Candidate::Xuat()
{
	cout << " \t\t - MS Thi Sinh: " << MS;
	cout << "\n";
	cout << " \t\t\t - Ten Thi Sinh:  " << ten;
	cout << "\n";
	cout << " \t\t\t - Ngay Thang Nam sinh Thi Sinh: " << ngaySinh;
	cout << "\n";
	cout << " \t\t\t - Diem Toan, diem Van, diem Anh cua Thi Sinh theo thu tu:  " << diemToan << " " << diemVan << " " << diemAnh;
	cout << "\n";
}