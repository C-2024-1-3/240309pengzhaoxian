#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	int a = 0;
	while (s[a] != '\0')
	{
		char c = tolower(s[a]);
		if (c < 'z' && c>'a')counts[c - 'a']++;
		a++;
	}
}
int main()
{
	char s[100];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		char a = 'a' + i;
		if (counts[i] != 0)cout <<a<< ":" << counts[i] << "times" << endl;
	}
}