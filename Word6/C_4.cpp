#include <iostream>
using namespace std;
char* f[100];
void rev(int n, int k)
{
	for (int i = k + 1; i <= 2 * k; i++)
		for (int j = 1; j <= k; j++)
			f[i][j] = f[i - k][j];
	for (int i = 1; i <= k; i++)
		for (int j = k + 1; j <= 2 * k; j++)
			f[i][j] = f[i][j - k];
	for (int i = k + 1; i <= 2 * k; i++)
		for (int j = k + 1; j <= 2 * k; j++)
			if (f[i - k][j - k] == '.') f[i][j] = 'o';
			else f[i][j] = '.';
	if (2 * k < n) rev(n, 2 * k);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) f[i] = new char[2 * n + 1];
	for (int i = 1; i <= 2; i++)
		for (int j = 1; j <= 2; j++) f[i][j] = '.';
	f[2][2] = 'o';
	rev(n * 2, 2);
	for (int i = 1; i <= 2 * n; i++)
	{
		for (int j = 1; j <= 2 * n; j++) cout << f[i][j] << " ";
		cout << endl;
	}
	return 0;
}

