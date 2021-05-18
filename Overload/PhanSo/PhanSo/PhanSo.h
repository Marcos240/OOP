#pragma once
#include<iostream>
using namespace std;
class PHANSO {
private:
    int TuSo;
    int MauSo;
public:
    PHANSO();
    void RutGon();
    //PHANSO Cong(const PHANSO& Ps);
    PHANSO operator+(const PHANSO& Ps);
    //PHANSO operator+(const int& a);
    PHANSO operator-(const PHANSO& Ps);
    PHANSO operator*(const PHANSO& Ps);
    PHANSO operator/(const PHANSO& Ps);
    bool operator==(const PHANSO& Ps);
    bool operator!=(const PHANSO& Ps);
    bool operator>(const PHANSO& Ps);
    bool operator<(const PHANSO& Ps);
    bool operator>=(const PHANSO& Ps);
    bool operator<=(const PHANSO& Ps);
    friend ostream& operator<<(ostream& os, const PHANSO& Ps);
    friend istream& operator>>(istream& is, PHANSO& Ps);
    ~PHANSO();
};