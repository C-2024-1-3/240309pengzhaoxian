#include<iostream>
using namespace std;
class a
{
private:
	double lenght, width, height;
public:
	void set()
	{
		cin >> lenght >> width >> height;
	}
	void v()
	{
		double t = lenght* width * height;
		cout << t << endl;
	}
};
int main()
{
	a x,y,z;
	x.set();
	y.set();
	z.set();
	x.v();
	y.v();
	z.v();
}