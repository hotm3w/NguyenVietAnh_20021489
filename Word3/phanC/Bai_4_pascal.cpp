
#include<bits/stdc++.h>
using namespace std;
int g(int n){
	int s=1;
	if(n==0) return 1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
void tohop(int n){
	int c=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			c=g(i)/(g(j)*g(i-j));
			cout<<c<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	tohop(n);
        return 0;
}
