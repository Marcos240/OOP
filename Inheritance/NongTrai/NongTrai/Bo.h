#pragma once
#include "GiaSuc.h"
#include <string>
using namespace std;
class Bo :public Gia_Suc
{
private:
    string Bo_Keu;
public:
    void Nhap();
    void Xuat();
    int Cho_Sua();
    int Sinh_Con();
};

