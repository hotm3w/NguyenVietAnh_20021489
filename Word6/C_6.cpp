#include <iostream>
using namespace std;
bool f[100];
int c[100];
void rev(int n,int t)
{
	for (int i = 1;i <= n;i++)
		if (f[i] == true)
		{
			f[i] = false;
			c[t] = i;
			if (t == n)
			{
				for (int j = 1; j <= t; j++) cout << c[j];
				cout << endl;
			}
			else rev(n,t + 1);
			f[i] = true;
		}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) f[i] = true;
	rev(n, 1);
	return 0;
}
