#include <iostream>

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