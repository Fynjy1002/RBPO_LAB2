#include <iostream>
#include <cmath>

double f(double x, double y);

int main() {
    double x = 5;
    double y = 6;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "f = " << f(x,y) << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "f = " << f(x,y) << std::endl;
    return 0;
}

double f(double x, double y) {
    double f;
    f = (pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1);
    return f;
}



