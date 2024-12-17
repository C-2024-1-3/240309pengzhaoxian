#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 + size2; i++)
	{
		if (i < size1) list3[i] = list1[i+1];
		else list3[i] = list2[i - size1+1];
	}
	for (int x = 0; x < size1 + size2-1; x++)
		for(int y=x+1;y<size1+size2;y++)
		if (list3[x] > list3[y])
		{
			int t = list3[x];
			list3[x] = list3[y];
			list3[y] = t;
		}
	cout << "The marge list is ";
	for (int m = 0; m < size1 + size2; m++)
		 cout<< list3[m] << " ";
}
int main()
{
	int a[81], b[81],c[160];
	cout << "Enter list1£»";
	cin >> a[0];
	for (int x = 1; x <= a[0]; x++)
		cin >> a[x];
	cout << "Enter list2:";
	cin >> b[0];
	for (int y = 1; y <= b[0]; y++)
		cin >> b[y];
	merge(a, a[0], b, b[0],c);
}