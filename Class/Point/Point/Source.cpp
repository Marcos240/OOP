#include<iostream>
#include"Point.h"
using namespace std;
int main() {
    //default constuctor
    Point Point1; 
    //call contructor
    Point Point2(1, 1); 
    //show Point1, Point2
    cout << "Point1 default constuctor: \n";
    Point1.Output();
    cout << "\n";
    cout << "Point2 constuctor with paramater 1,1 \n";
    Point2.Output();
    cout << "\n";
    //read Point3
    Point Point3;
    Point3.Input();
    cout << "Point 3: \n";
    Point3.Output();
    cout << "\n";
    //Move point
    cout << "Excute Move Point3 (2,2) \n";
    Point3.MovePoint(2, 2);
    //show Point3 after move
    cout << "Point 3: \n";
    Point3.Output();
    cout << "\n";
    return 0;
}