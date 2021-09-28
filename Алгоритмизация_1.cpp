#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 6;
	int c = 9;

	c -= a - c * a - b;
	cout << c << endl;

	float k = 3.7;
	int f = 8;
	int y = 4.8;
	int x = 0;

	f = (int)k;
	x = k + y;
	cout << f << ' ' << x << endl;

}