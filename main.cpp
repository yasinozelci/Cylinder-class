#include <iostream> #include "Cylinder.h" using namespace std;
int main() {
Cylinder cylinder(1, 3, 4, 7); Circle circle(5, 15, 25);
Point point(6, 11);
cout << "Distance of point: " << point.distance() <<endl;
cout << "Area of circle: " << circle.area() << endl;
cout << "Surface area of cylinder: " << cylinder.surfaceArea() << endl;
2
cout << "Volume of cylinder: " << cylinder.volume()<< endl;
return 0; }
