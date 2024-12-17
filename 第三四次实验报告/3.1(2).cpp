#include<iostream>
using namespace std;
int yin(int& a, int& b)
{
	int c;
	c = (a > b ? b : a);
	while (c > 0)
	{
		if (a % c == 0 && b % c == 0)break;
		else c--;
	}
	return c;
}
int bei(int& x, int& y)
{
	int d;
	d = (x > y ? x : y);
	while (1)
	{
		if (d % x == 0 && d % y == 0)break;
		else d++;
	}
	return d;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "最大公约数为" << yin(m, n) << endl;
	cout << "最小公倍数为" << bei(m, n);
}