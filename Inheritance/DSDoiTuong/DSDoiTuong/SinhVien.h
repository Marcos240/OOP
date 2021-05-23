#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

class Sinh_Vien : public Doi_Tuong
{
private:
    int MSSV;
public:
    void Nhap();
    void Xuat();
};