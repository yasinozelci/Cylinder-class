
#include <iostream> #include <cmath>
class Point { public:
Point(int sid1, int sid2) { x = sid1;
y = sid2; }
double distance() {
return sqrt(x * x + y * y);
} protected:
int x, y; };
