#include <cmath>

double f(double x, double y) {
    double f;
    f = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
    return f;
}

