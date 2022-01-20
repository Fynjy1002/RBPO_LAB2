#include <iostream>
#include "func.h"

double x = 5;
double y = 6;
double r = 0;

namespace Zhuravlev {
	void f() {
		r = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
	}
}
