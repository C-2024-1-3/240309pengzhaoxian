#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int n = 0; n < i; n++)
	{
		int b = 0;
		for (int j = n - 1; j > 0; j--)
		{
			if (a[n] == a[j])
			{
				b++;
				break;
			}
		}
		if (b == 1) continue;
		else cout << a[n] << " ";
	}
}