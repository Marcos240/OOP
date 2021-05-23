#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include <iostream>
using namespace std;

int main()
{
    Gia_Suc Nong_Trai;
    Nong_Trai.So_Bo = 0;
    Nong_Trai.So_Cuu = 0;
    Nong_Trai.So_De = 0;
    Nong_Trai.Tong_So = 0;
    Nong_Trai.Luong_Sua = 0;
    int n, k;
    cout << " Nhap So Luong Gia Suc: ";
    cin >> n;
    cout << " \n ";
    Gia_Suc** a = new Gia_Suc * [n];
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap loai Gia Suc vao: \n";
        cout << "\t - Nhap 1 neu la Bo \n";
        cout << "\t - Nhap 2 neu la Cuu \n";
        cout << "\t - Nhap 3 neu la De \n";
        cin >> k;
        if (k == 1)
        {
            a[i] = new  Bo;
            a[i]->Nhap();
            Nong_Trai.So_Bo += 1 + a[i]->Sinh_Con();
        }
        if (k == 2)
        {
            a[i] = new  Cuu;
            a[i]->Nhap();
            Nong_Trai.So_Cuu += 1 + a[i]->Sinh_Con();
        }
        if (k == 3)
        {
            a[i] = new  De;
            a[i]->Nhap();
            Nong_Trai.So_De += 1 + a[i]->Sinh_Con();
        }
        Nong_Trai.Tong_So += a[i]->Sinh_Con();
        Nong_Trai.Luong_Sua += a[i]->Cho_Sua();
    }
    cout << " ==== Nhung Tieng Keu nghe duoc trong nong trai la ==== \n";
    for (int i = 0; i < n; i++)
    {
        a[i]->Xuat();
    }
    cout << " \n";

    cout << " ===== Thong Tin ve Bo la: ===== \n";
    cout << " \t - So Bo la: " << Nong_Trai.So_Bo << " \n\n";
    cout << " ===== Thong Tin ve Cuu la: ===== \n";
    cout << " \t - So cuu la: " << Nong_Trai.So_Cuu << " \n\n";
    cout << " ===== Thong Tin ve De la: ===== \n";
    cout << " \t - So De la: " << Nong_Trai.So_De << " \n\n";
    cout << " ===== Tong luong sua la : ";
    cout << Nong_Trai.Luong_Sua <<"\n";
    cout << " ===== Tong gia suc moi sinh la :  ";
    cout << Nong_Trai.Tong_So;
    return 0;
}