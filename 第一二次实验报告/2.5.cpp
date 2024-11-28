#include <iostream>
using namespace std;

int main() {
    int a = 0,b = 0,d = 0,e = 0;  
    char c;
    while ((c = getchar()) != '\n')
    {  
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))   
        a++;
        else if (c == ' ') 
        b++;
        else if (c >= '0' && c <= '9')  d++;
        else  e;
    }
    cout << "英文字母的个数: " << a << endl;
    cout << "空格的个数: " << b << endl;
    cout << "数字字符的个数: " << d << endl;
    cout << "其他字符的个数: " << e << endl;
    return 0;
}