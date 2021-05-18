#include "TestCandidate.h"
#include <iostream>
using namespace std;
void TestCandidate::NhapDS() {
	cout << "Nhap so luong thi sinh: \n";
	cin >> numberOfStudent;
	listCandidate = new Candidate[numberOfStudent];
	for (int i = 0; i < numberOfStudent; i++)
	{
		listCandidate[i].Nhap();
	}
}
void TestCandidate::XuatDS() {
	for (int i = 0; i < numberOfStudent; i++)
	{
		cout << "Thong tin cua sinh vien thu " << i << " la: \n";
		listCandidate[i].Xuat();
	}
}
void TestCandidate::KiemTraDS() {
	for (int i = 0; i < numberOfStudent; i++)
	{
		if (listCandidate[i].KiemTra())
			listCandidate[i].Xuat();
	}
}
TestCandidate::~TestCandidate() {
	if (listCandidate != NULL)
	{
		delete[]listCandidate;
		cout << "Da xoa vung nho cap phat";
	}
}