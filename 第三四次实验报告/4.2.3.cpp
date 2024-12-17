#include<iostream>
using namespace std;
//#include ?¡ãstdio.h?¡À
void f(char* st, int i)
{
    st[i] = '\0';
    cout << st;   // printf(?¡ã%s\n?¡À,st);
    if (i > 1) f(st, i - 1);
}
void main()
{
    char st[] = "abcd";
    f(st, 4);
}