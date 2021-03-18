#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int n = rand()&100 + 1;
	cout << n << endl;
	int f[n];
	for (int i = 0; i < n; i++) f[i] = rand() % 100 + 1;
	for (int i = 0; i < n; i++) cout << f[i] << " ";
	cout << endl;
	for(int i = 0; i < n-1 ; i++)
	{
		for(int j=i+1; j < n; j++)
		{
			if(f[i]>f[j])
			{
				int m = f[i];
				f[i]=f[j];
				f[j]=m;
			}
		}
	}
	for (int i = 0; i < n; i++) cout << f[i] << " ";
	return 0;
}
