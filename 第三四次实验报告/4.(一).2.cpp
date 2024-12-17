#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	double t = a;
	a = b;
	b = t;
}
void bubbleSort(double list[], int size)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size-1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	bubbleSort(a,10);
	for (int j = 0; j < 10; j++)
		cout << a[j]<<"  ";
}