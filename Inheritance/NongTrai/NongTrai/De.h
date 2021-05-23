#pragma once
#include "GiaSuc.h"
#include <string>
using namespace std;
class De :public Gia_Suc
{
private:
    string De_Keu;
public:
    void Nhap();
    void Xuat();
    int Cho_Sua();
    int Sinh_Con();
};
