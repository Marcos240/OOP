#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;
class NV_Van_Phong : public Nhan_Vien
{
private:
    int Ngay_Lam_Viec;
public:
    void Nhap();
    void Xuat();
    double Tinh_Luong();
};