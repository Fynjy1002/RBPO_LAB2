#include <iostream>
#include <iomanip>
#include "func.h";
using namespace std;


int main()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	f();
	cout << "f = " <<  result << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	f();
	cout << "f = " <<  result << endl;
}