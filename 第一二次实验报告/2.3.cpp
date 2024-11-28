#include <iostream>
using namespace std;
int main()
{
    float a, b, c,A;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        A = a + b + c;
        cout << "三角形周长为" << A<<endl;
        if (a == b || a == c || b == c) cout << "是等腰三角形" << endl;
        else cout << "不是等腰三角形" << endl;
    }
    else cout << "无法构成三角形" << endl;
}

