#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	Time tl;           //����t1ΪTime�����
	tl.settime();
	tl.showtime();
	return 0;
}
