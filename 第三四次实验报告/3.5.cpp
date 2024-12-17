#include<iostream>
using namespace std;
int yuan(int n)
{
	int t;
	if (n == 1) t = 1;
	else t = (yuan(n - 1) + 1) * 2;
	return t;
}
int main()
{
	cout << yuan(10);
}