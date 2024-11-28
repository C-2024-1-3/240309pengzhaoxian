#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b,c,d,A,B;
	cin >> a >> b;
	c = (a >= b ? b : a);
	d = (a >= b ? a : b);
		while (c > 0) 
		{
			if (a % c == 0 && b % c == 0){ A = c; break;}
			 c--;
		}
		while (d > 0)
		{
			if (d % a == 0 && d % b == 0) {	B = d; break;}
			 d++;
		}
			cout << "最大公约数" << A << endl;
			cout << "最小公倍数" << B << endl;
}