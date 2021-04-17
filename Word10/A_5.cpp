#include <iostream>
#include <cmath>
using namespace std;
struct Test
{
	double f_[100];
};
struct Point
{
	double* x = new double;
	double y;
	Test c;
};
int main()
{
	Point first;
	Point second;
	double n;
	cin >> n;
	*first.x = n;
	second = first;
	cout << first.x << " " << second.x << endl;
	cout << first.c.f_ << " " << second.c.f_ << endl;
	return 0;
}
