#include<iostream>
#define M 3.1415//圆周率
using namespace std;
int main()
{
	double i, j;//i为半径，j为锥高
	cin >> i >> j;
	cout << i * i * M * j / 3;
}