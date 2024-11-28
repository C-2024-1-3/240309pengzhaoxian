#include <iostream>
using namespace std;
int main()
{
	long double a, b,c;
	cin >> a;
	c = a;
	b = c / 2 + a / (2 * c);
	while (b - c >= 10e-5 || c - b >= 10e-5)
	{
		c = b;
		b = c / 2 + a / (2 * c);
	}
	cout << b;
}