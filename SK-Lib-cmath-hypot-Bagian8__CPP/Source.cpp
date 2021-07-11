#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double x = 5.1, y = 7.1, z = 59.2, result;
	result = hypot(x, y, z);
	cout << "hypot(x, y, z) = " << result << endl;

	_getch();
	return 0;
}