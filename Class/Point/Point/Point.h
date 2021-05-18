#include<iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point();
    Point(int a, int b);
    int GetterX();
    int GetterY();
    void SetterX(int a);
    void SetterY(int b);
    void MovePoint(int a, int b);
    void Input();
    void Output();
    ~Point();
};