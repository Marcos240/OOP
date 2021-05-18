class SoPhuc {
private:
    double thuc;
    double ao;
public:
    SoPhuc();
    SoPhuc(double t, double a);
    void Nhap();
    void Xuat();
    ~SoPhuc();
    void Cong(SoPhuc sp1, SoPhuc sp2);
    void Tru(SoPhuc sp1, SoPhuc sp2);
    void Nhan(SoPhuc sp1, SoPhuc sp2);
    void Chia(SoPhuc sp1, SoPhuc sp2);
};