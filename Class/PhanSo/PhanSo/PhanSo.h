class PhanSo {
private:
    int tuSo;
    int mauSo;
public:
    PhanSo();
    void RutGon();
    PhanSo Cong(PhanSo a, PhanSo b);
    PhanSo Tru(PhanSo a, PhanSo b);
    PhanSo Nhan(PhanSo a, PhanSo b);
    PhanSo Chia(PhanSo a, PhanSo b);
    void Xuat();
    void Nhap();
    ~PhanSo();
};