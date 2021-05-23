#include "Cuu.h"
#include <iostream>
#include <string>
using namespace std;

void Cuu::Nhap()
{
    cout << " Tieng Cuu keu nhu the nao nhi? :  ";
    cin.ignore();
    getline(cin, Cuu_Keu);
    cout << " \n ";
}
int  Cuu::Sinh_Con()
{
    Gia_Suc::Sinh_Con();
    srand(time(NULL));
    int So_Con = rand() % 5;
    return So_Con;
}
int Cuu::Cho_Sua()
{
    srand(time(NULL));
    int Sua = rand() % 6;
    return  Sua;
}
void Cuu::Xuat()
{
    cout << Cuu_Keu << " ";
}

