#include <iostream>
#include <cmath>

void f();
double res;
double x = 5;
double y = 6;

int main() {
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    f();
    std::cout << "f = " << res << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    f();
    std::cout << "f = " << res << std::endl;
    return 0;
}

void f() {
    res = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
}



