#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	double t = a;
	a = b;
	b = t;
}
void BubbleSort(int listSize)
{
	bool changed = true;
	double list[10];
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	BubbleSort(10);
	for (int j = 0; j < 10; j++)
		cout << a[j] << " ";
}