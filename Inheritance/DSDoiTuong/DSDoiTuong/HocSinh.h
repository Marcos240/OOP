#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std;

class Hoc_Sinh : public Doi_Tuong
{
private:
    string Lop;
public:
    void Nhap();
    void Xuat();
};