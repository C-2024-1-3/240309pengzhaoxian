#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void settime()
    {
		cin >> hour >> minute >> sec;
    }
	void showtime()
	{
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.settime();
	tl.showtime();
	return 0;
}
