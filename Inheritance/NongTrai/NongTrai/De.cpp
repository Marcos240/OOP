#include "De.h"
#include <iostream>
#include <string>
using namespace std;

void De::Nhap()
{
    cout << " Tieng De keu nhu the nao nhi? :  ";
    cin.ignore();
    getline(cin, De_Keu);
    cout << " \n ";
}
int De::Sinh_Con()
{
    Gia_Suc::Sinh_Con();
    srand(time(NULL));
    int So_Con = rand() % 6;
    return So_Con;
}
int De::Cho_Sua()
{
    srand(time(NULL));
    int Sua = rand() % 11;
    return Sua;
}
void De::Xuat()
{
    cout << De_Keu << " ";
}
