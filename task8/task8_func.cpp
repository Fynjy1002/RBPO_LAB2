#include <iostream>
#include "func.h"
using namespace std;

double x = 5;
double y = 6;
double result = 0;
void f() {
	result = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
}