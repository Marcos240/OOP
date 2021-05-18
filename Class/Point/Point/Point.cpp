#include "Point.h"
#include<iostream>
using namespace std;


Point::Point() {
    SetterX(0);
    SetterY(0);
}
Point::Point(int a, int b) {
    SetterX(a);
    SetterY(b);
}
int Point::GetterX() {
    return x;
}
int Point::GetterY() {
    return y;
}
void Point::Input() {
    cout << "--- Nhap diem \n";
    cout << "x = ";
    cin >> x;
    cout << "\n";
    cout << "y = ";
    cin >> y;
    cout << "\n";
}
void Point::Output() {
    cout << "x = " << GetterX() << "\n";
    cout << "y = " << GetterY() << "\n";
}
void Point::SetterX(int a) {
    x = a;
}
void Point::SetterY(int b) {
    y = b;
}
void Point::MovePoint(int a, int b) {
    SetterX(GetterX() + a);
    SetterY(GetterY() + b);
}
Point::~Point() {
}