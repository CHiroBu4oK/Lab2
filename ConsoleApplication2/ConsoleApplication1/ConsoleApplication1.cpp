#include<iostream>
#include<string>

using namespace std;
void main()
{
	float a, b, c, c1, c2, c3;
	
	cout << "Input 3 number:";
	cin >> a, b, c;

	c1 = a + b + c;
	c2 = a - b - c;
	c3 = a / b * c;

	cout << a << "+" << b << "+" << c << "=" << c1 << endl;
	cout << a << "-" << b << "-" << c << "=" << c2 << endl;
	cout << a << "/" << b << "/" << c << "=" << c3 << endl;
}
