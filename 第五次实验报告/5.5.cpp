#include<iostream>
using namespace std;
class point
{
private:
	int x = 60, y = 80;
public:
	void setPoint(int i, int j)
	{
		x += i; y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")"<<endl;
	}
};
int main()
{
	point a;
	a.display();
	a.setPoint(40, 20);
	a.display();
}