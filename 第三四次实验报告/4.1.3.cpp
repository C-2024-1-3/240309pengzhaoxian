#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = true;
	}
	for (int j = 1; j < 100; j++) 
	{
		for (int n = j; n < 100; n = n + j + 1)
		{
			a[n] =!a[n];
		}
	}
	for (int t = 0; t < 100; t++)
		if (a[t]) cout << t+1 << " ";
}