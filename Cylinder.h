#include "Circle.h"
class Cylinder : public Circle { public:
Cylinder(int x, int y, int r, int h) :Circle(x, y, r) {
height = h; }
double surfaceArea() {
return 2 * 3.14 * radius * height + 2 * 3.14 *
radius * radius; }
double volume() {
return 3.14 * radius * radius * height;
} private:
int height; };
