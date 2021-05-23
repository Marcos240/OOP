#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

class Cong_Nhan : public Doi_Tuong
{
private:
    double Luong;
public:
    void Nhap();
    void Xuat();
};