#include <iostream>
#include <cmath>
int main()
{
	double x, f, y;
	x = 5;
	y = 8.2537;
	std::cout << "x: " << x << std::endl;
	std::cout << "y:" << y << std::endl;
	f = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
	std::cout << "f = " << f << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;
	f = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
	std::cout << "f = " << f << std::endl;
	return 0;
}
