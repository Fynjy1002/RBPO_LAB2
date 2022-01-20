#include <iostream>

using namespace std;
extern double x;
extern double y;
extern double res;

void f();

int main() {
    x = 5;
    y = 6;

    std::cout << "x =" << x << std::endl;
    std::cout << "y =" << y << std::endl;
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
