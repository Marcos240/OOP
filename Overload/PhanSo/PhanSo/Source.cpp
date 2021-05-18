#include<iostream>
#include "PhanSo.h"
using namespace std;
int main() {
    PHANSO ps1;
    cout << "-- Nhap Phan So 1 -- " << endl;
    cin >> ps1;
    PHANSO ps2;
    cout << "-- Nhap Phan So 2 -- " << endl;
    cin >> ps2;
    cout << endl << "- Phan So 1 la: " << ps1 << endl;
    cout << "- Phan So 2 la: " << ps2 << endl << endl;
    PHANSO hieu, tong, tich, thuong;
    hieu = ps1 - ps2;
    tong = ps1 + ps2; //ps1.Cong(ps2); 
    //tong = ps1 + 3;
    tich = ps1 * ps2;
    thuong = ps1 / ps2;
    cout << "- Hieu 2 phan so la: " << hieu << endl;
    cout << "- Tong 2 phan so la: " << tong << endl;
    cout << "- Tich 2 phan so la: " << tich << endl;
    cout << "- Thuong 2 phan so la: " << thuong << endl;
    cout << endl  << " --- So sanh hai phan so ---" << endl;
    cout << "- ps1 == ps2 : " << (ps1 == ps2) << endl; 
    cout << "- ps1 != ps2 : " << (ps1 != ps2) << endl;
    cout << "- ps1 > ps2 : " << (ps1 > ps2) << endl;
    cout << "- ps1 < ps2 : " << (ps1 < ps2) << endl;
    cout << "- ps1 >= ps2 : " << (ps1 >= ps2) << endl;
    cout << "- ps1 <= ps2 : " << (ps1 <= ps2) << endl;
    return 0;
}