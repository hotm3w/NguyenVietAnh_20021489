#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int m;
	for (int i = 0;i < n;i++) 
	{
		cin >> m;
		if (k == m) cout << i + 1 << " ";
	}
	return 0;	
}
