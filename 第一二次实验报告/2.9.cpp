#include <iostream>
using namespace std;
int main()
{
	float  b = 2,c,d,e;
	c = d = e=0;
	while(1)
	{
		c = c + b;
		if (c > 100)break;
		e = e + 0.8 * b;
		d++;
		b = b * 2;	
	} 
	cout << e / d;
}