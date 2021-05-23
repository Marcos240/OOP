#pragma once
#include "GiaSuc.h"
#include <string>
using namespace std;
class Cuu :public Gia_Suc
{
private:
    string Cuu_Keu;
public:
    void Nhap();
    void Xuat();
    int Cho_Sua();
    int  Sinh_Con();
};

