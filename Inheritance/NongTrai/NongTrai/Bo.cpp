#include "Bo.h"
#include <iostream>
using namespace std;

void Bo::Nhap()
{
    cout << " Tieng Bo keu nhu the nao nhi? :  ";
    cin.ignore();
    getline(cin, Bo_Keu);
    cout << " \n ";
}
int Bo::Sinh_Con()
{
    Gia_Suc::Sinh_Con();
    srand(time(NULL));
    int So_Con = rand() % 5;
    return So_Con;
}
int Bo::Cho_Sua()
{
    srand(time(NULL));
    int Sua = rand() % 21;
    return Sua;
}
void Bo::Xuat()
{
    cout << Bo_Keu << " ";
}