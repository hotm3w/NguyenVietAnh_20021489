#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	while(N >= 0)
	{
	cout<<(N%5==0?N/5:-1)<<endl;
	--N;
	}
	while ( N == -1) 
	{
		cout << "Bye";
		break;
		
	}
	
}
