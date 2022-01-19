#include <cmath>

static double x = 5;
static double y = 6;
static double res;

static void f() {
    res = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
}