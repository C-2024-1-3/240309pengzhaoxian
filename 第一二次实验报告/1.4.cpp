#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char i;
    cin >> i;
    if (i >= 'a' && i <= 'z')
    {
        i = i + 'A' - 'a';
        cout << i;
    }
    else
        cout << int(i) + 1;
}