#include <iostream>
#include <cmath>

void f(const double& x, const double& y, double& res);

int main() {
    double x = 5;
    double y = 6, z;
    f(x, y, z);
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "f = " << z << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    f(x, y, z);
    std::cout << "f = " << z << std::endl;
    return 0;
}

void f(const double& x, const double& y, double& res) {
    res = (pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1);
}

