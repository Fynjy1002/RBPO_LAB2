#include <cmath>

double x ;
double y;
double res;

void f() {
    res = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
}