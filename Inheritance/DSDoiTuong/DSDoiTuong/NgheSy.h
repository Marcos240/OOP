#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std; 

class Nghe_Sy : public Doi_Tuong
{
private:
    string Nganh;
public:
    void Nhap();
    void Xuat();
};
