#include <iostream>
#include <cmath>
using namespace std;
struct String
{
	int n;
	char* str = new char[100];
	String(const char* s)
	{ 
		int t = 0; 
		while (*(s + t) != '\0') {
		*(str + t) = *(s + t); t++;
		}
			*(str + t) = '\0';
			n = t;
	};
	~String() { delete[]str; }
	void print()
	{
		for (int i = 0; i < n; i++) cout << *(str + i);
		cout << endl;
	}
	void append(const char* s)
	{
		int t = 0;
		while (*(s + t) != 0) { *(str + n + t) = *(s + t); t++; }
		n += t;
		*(str + n) = '\0';
	}
};
int main()
{
	String c("Hello");
	c.print();
	c.append(" There");
	c.print();
	return 0;
}
