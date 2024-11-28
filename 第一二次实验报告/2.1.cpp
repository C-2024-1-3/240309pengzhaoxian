#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;//k为定义且int需要小写
	cout << i++ << endl;
    i = 1;//i重定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
