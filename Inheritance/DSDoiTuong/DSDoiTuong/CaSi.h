#pragma once
#include "DoiTuong.h"
#include <iostream>
#include <string>
using namespace std; 

class Ca_Si : public Doi_Tuong
{
private:
    string The_Loai;
public:
    void Nhap();
    void Xuat();
};