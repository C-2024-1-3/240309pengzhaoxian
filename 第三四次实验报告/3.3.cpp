#include<iostream>
#include<iomanip>
using namespace std;
double celsius_to_fah(double cel)
{
	double a;
	a = cel * 9 / 5 + 32;
	return a;
}
double fahrenheit_to_cels(double fah)
{
	double b;
	b = (fah - 32) * 5 / 9;
	return b;
}
int main()
{
	cout << "Celsius" << " " << "Fahrenheit" << "Fahrenheit" << " " << "Celsius" << endl;
for (double i = 40.0; i > 30; i--)
{
	cout << i << "  " <<fixed<<setprecision(2)<<celsius_to_fah(i) << endl;
}
cout << "Fahrenheit" << " " << "Celsius" << endl;
for (double j = 120.0; j >= 30.0; j--)
{
	cout << j << "  " << fahrenheit_to_cels(j) << endl;
}
}