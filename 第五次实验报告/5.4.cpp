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
    cout << "成绩最高的学生学号为: " << a<< endl;
}
int main() {
    Student students[5];  
    for (int i = 0; i < 5; i++) 
    {
        cout << "请输入第" << (i + 1) << "个学生的学号和成绩: ";
        cin >> students[i].id >> students[i].grade;
    }
    max(students);  
    return 0;
}