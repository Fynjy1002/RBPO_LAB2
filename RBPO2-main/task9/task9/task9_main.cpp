#include <iostream>
#include <iomanip> 
#include "func.h";

using namespace std;

int main()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	Zhuravlev::f();
	cout << "f = " << r << endl;

	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	Zhuravlev::f();
	cout << "f = " << r << endl;
	return 0;
}