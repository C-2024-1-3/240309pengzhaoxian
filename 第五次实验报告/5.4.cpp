#include <iostream>
using namespace std;
class Student {
public:
    int id;   
    int grade;   
};
void max(Student* students) 
{
    int a=students[0].id, b = 0;
    for (int i = 1; i < 5; i++) 
        if (students[b].grade < students[i].grade)
        {
            a = students[i].id;
            b = i;
        }
    cout << "�ɼ���ߵ�ѧ��ѧ��Ϊ: " << a<< endl;
}
int main() {
    Student students[5];  
    for (int i = 0; i < 5; i++) 
    {
        cout << "�������" << (i + 1) << "��ѧ����ѧ�źͳɼ�: ";
        cin >> students[i].id >> students[i].grade;
    }
    max(students);  
    return 0;
}