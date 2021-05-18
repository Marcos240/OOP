#include <iostream>
#include "TestCandidate.h"
using namespace std;

int main() {
	TestCandidate dsThiSinh;
	dsThiSinh.NhapDS();
	dsThiSinh.XuatDS();
	cout << "- Cac thi sinh co tong diem > 15 la: \n";
	dsThiSinh.KiemTraDS();
}