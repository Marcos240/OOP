#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;
class NV_San_Xuat : public Nhan_Vien
{
private:
    double Luong_Co_Ban;
    int So_San_Pham;
public:
    void Nhap();
    void Xuat();
    double Tinh_Luong();
};