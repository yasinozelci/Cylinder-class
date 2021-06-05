#include "Point.h"
class Circle : public Point { public:
Circle(int x, int y, int r) :Point(x, y) { radius = r;
}
double area() {
return 3.14 * radius * radius; }
protected: int radius;
};
